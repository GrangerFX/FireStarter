"""Preserve and analyze the six user-launched batches. Never launch a benchmark."""
import collections, csv, hashlib, json, math, re, shutil, statistics, subprocess
from datetime import datetime, timezone
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]
BASE = Path(__file__).resolve().parent
LOGS = ROOT / 'FireStarter' / 'Logs'
COMMIT = '13461b1733a03019eded0745a557ab021613fa17'
RUNS = [
 ('EvolveNew',1,'2026-10-08_12-16-24','2026-10-08_12-16-24',256),
 ('EvolveNew',2,'2026-10-08_12-17-11','2026-10-08_12-17-11',256),
 ('EvolveGPU',1,'2026-10-08_12-19-24','2026-10-08_12-19-24',256),
 ('EvolveGPU',2,'2026-10-08_12-26-10','2026-10-08_12-26-10',256),
 ('EvolveCPU',1,'2026-10-08_12-44-07','2026-10-08_12-44-07',64),
 ('EvolveCPU',2,'2026-10-08_14-05-25','2026-10-08_14-05-26',64),
]

def digest(path): return hashlib.sha256(path.read_bytes()).hexdigest()
def save(path,value): path.write_text(json.dumps(value,indent=2)+'\n',encoding='utf-8')
def number(text,pattern,integer=False):
 m=re.search(pattern+r'\s*([-+\d.eE]+)',text)
 return (int(m[1]) if integer else float(m[1])) if m else None
def percentile(v,p):
 v=sorted(v);i=(len(v)-1)*p;l=math.floor(i);h=math.ceil(i)
 return v[l]+(v[h]-v[l])*(i-l) if v else None
def stats(v):
 v=[x for x in v if x is not None and math.isfinite(x)]
 if not v:return {'n':0}
 return dict(n=len(v),mean=statistics.mean(v),median=statistics.median(v),
  sample_stddev=statistics.stdev(v) if len(v)>1 else None,minimum=min(v),maximum=max(v),p90=percentile(v,.9),p95=percentile(v,.95))
def progression(rows,field):
 pairs=[(r['test'],r[field]) for r in rows if r[field] is not None]
 if len(pairs)<2:return {'n':len(pairs)}
 mx=statistics.mean(x for x,y in pairs);my=statistics.mean(y for x,y in pairs)
 xx=sum((x-mx)**2 for x,y in pairs);yy=sum((y-my)**2 for x,y in pairs)
 xy=sum((x-mx)*(y-my) for x,y in pairs)
 slope=xy/xx
 width=max(8,len(rows)//8)
 return dict(n=len(pairs),slope_seconds_per_test=slope,fitted_change_seconds=slope*(pairs[-1][0]-pairs[0][0]),
  correlation=xy/math.sqrt(xx*yy) if yy else 0,
  windows=[dict(first_test=p[0]['test'],last_test=p[-1]['test'],statistics=stats([r[field] for r in p])) for i in range(0,len(rows),width) if (p:=rows[i:i+width])])
def header(text):
 d={}
 for line in text.splitlines():
  if 'Seed=' in line:break
  m=re.fullmatch(r'(\w+) = (\S+)',line.strip())
  if m:d[m[1]]=m[2]
 return d

def capture(target,run,summary_stamp,status_stamp,expected):
 directory=BASE/target/f'Run{run}';raw=directory/'raw';raw.mkdir(parents=True,exist_ok=True)
 paths=sorted({*LOGS.glob(summary_stamp+'_*'),*LOGS.glob(status_stamp+'_*')})
 if len(paths)!=expected+3:raise ValueError(f'{target} Run {run}: unexpected raw set {len(paths)}')
 manifest=[]
 for original in paths:
  copied=raw/original.name;original_hash=digest(original)
  if copied.exists():
   if digest(copied)!=original_hash:raise ValueError('Existing raw copy differs; refusing replacement')
  else:shutil.copyfile(original,copied)
  manifest.append(dict(name=original.name,original_path=str(original),bytes=original.stat().st_size,
   sha256=original_hash,copy_sha256=digest(copied),original_last_write_utc=datetime.fromtimestamp(original.stat().st_mtime,timezone.utc).isoformat()))
 save(directory/'raw-manifest.json',manifest)
 summary=raw/f'{summary_stamp}_{target}_Results.txt'
 settings=raw/f'{status_stamp}_FireStarterSettings.h'
 meta=dict(target=target,run=run,expected_tests=expected,git_commit=COMMIT,summary_stamp=summary_stamp,status_stamp=status_stamp,
  raw_files=len(manifest),settings_sha256=digest(settings),settings_match_current_source=digest(settings)==digest(ROOT/'FireStarter/FireStarterSettings.h'),
  launch_owner='User',launch_method='Direct desktop launch of existing Release executable',
  user_confirmed_protocol='Reboot then direct local console; ChatGPT, Ollama, LM Studio, Visual Studio closed; no rebuild or settings changes within each pair',
  numeric_os_exit_code=None,whole_process_stopwatch_seconds=None)
 save(directory/'provenance.json',meta)
 return directory,summary,raw,meta

def analyze(target,run,summary_stamp,status_stamp,expected):
 directory,summary,raw,meta=capture(target,run,summary_stamp,status_stamp,expected)
 rows=[];anomalies=[];settings_headers=collections.Counter();terminal_rows=[]
 for line in summary.read_text(encoding='utf-8-sig').splitlines():
  if not line.strip():continue
  r=dict(test=number(line,r'Test[=:]',True),seed=number(line,r'Seed[=:]',True),
   generations=number(line,r'\bGeneration=',True),cumulative_generations=number(line,r'\bTotal=',True),
   evolve_result=number(line,r'Evolve Result='),optimize_result=number(line,r'Optimize Result='),
   duration_seconds=number(line,r'Duration:'),logged_generation_average_seconds=number(line,r'GenTime:'),
   cumulative_solution_seconds=number(line,r'\bTotal:'),logged_running_average_seconds=number(line,r'Average:'),
   best_candidate_generations=number(line,r'Best Generations=',True),best_candidate_evolutions=number(line,r'Evolutions=',True),
   success='*******' in line)
  if any(r[k] is None for k in ['test','seed','generations','duration_seconds','evolve_result','optimize_result']):raise ValueError(f'Unparsed result row: {line}')
  r['completion_fitness']=r['evolve_result'] if target=='EvolveCPU' else r['optimize_result']
  r['rounded_threshold_ambiguity']=r['completion_fitness']==1e-6
  r['duration_per_outer_generation_seconds']=r['duration_seconds']/r['generations'] if r['generations'] else None
  status=raw/f'{status_stamp}_FIRESTARTER_EVOLVE_{target[6:].upper()}_{r["test"]}.txt'
  if not status.exists():raise ValueError(f'Missing status file {status}')
  status_text=status.read_text(encoding='utf-8-sig');h=header(status_text)
  settings_headers[json.dumps(h,sort_keys=True)]+=1
  status_lines=[s for s in status_text.splitlines() if 'Seed=' in s]
  if not status_lines:anomalies.append(dict(kind='empty_status',test=r['test']))
  r['status_rows']=len(status_lines)
  precision=[number(s,r'BestError=') for s in status_lines if 'BestError=' in s]
  r['dense_precision_256_samples']=precision[-1] if precision else None
  r['status_final_fitness']=number(status_lines[-1],r'Best=') if status_lines else None
  r['status_final_run_seconds']=number(status_lines[-1],r'Run Time=') if status_lines else None
  r['median_logged_optimization_stage_seconds']=stats([number(s,r'\bTime=') for s in status_lines]).get('median')
  terminal_rows.append(dict(test=r['test'],last_status_line=status_lines[-1] if status_lines else None,
   last_register_line=next((s for s in reversed(status_text.splitlines()) if s.startswith('const unsigned int registers')),None)))
  if not r['success']:anomalies.append(dict(kind='fitness_failure',test=r['test']))
  if r['duration_seconds']<=0:anomalies.append(dict(kind='nonpositive_or_quantized_duration',test=r['test']))
  if r['completion_fitness']>1e-6:anomalies.append(dict(kind='completion_fitness_above_target',test=r['test']))
  if r['status_final_fitness']!=r['completion_fitness']:anomalies.append(dict(kind='summary_status_fitness_difference',test=r['test']))
  if h.get('tests')!=str(expected) or h.get('variations')!='1' or h.get('samples')!='15':anomalies.append(dict(kind='unexpected_runtime_settings',test=r['test'],header=h))
  rows.append(r)
 if [r['test'] for r in rows]!=list(range(expected)):anomalies.append(dict(kind='test_sequence_or_count'))
 running=0
 for r in rows:
  running+=r['generations']
  if running!=r['cumulative_generations']:anomalies.append(dict(kind='generation_total_inconsistency',test=r['test']))
 if len(settings_headers)!=1:anomalies.append(dict(kind='multiple_runtime_headers'))
 if not meta['settings_match_current_source']:anomalies.append(dict(kind='settings_source_snapshot_difference'))
 successes=[r for r in rows if r['success']]
 times=[r['duration_seconds'] for r in successes]
 q1=percentile(times,.25);q3=percentile(times,.75)
 snapshot_text=(raw/f'{status_stamp}_FireStarter_LoadState.h').read_text(encoding='utf-8-sig')
 snapshot=dict(test=number(snapshot_text,r'// Run test =',True),application_run_seconds=number(snapshot_text,r'// Run duration ='),
  precision_256_samples=number(snapshot_text,r'// Run precision\s*='),fitness=number(snapshot_text,r'// Run max result ='),
  run_date=next((s.split(': ',1)[1] for s in snapshot_text.splitlines() if s.startswith('// Run date: ')),None))
 normalized=[r['duration_per_outer_generation_seconds'] for r in rows]
 median=statistics.median(normalized);mad=statistics.median(abs(v-median) for v in normalized)
 exceptional=[r['test'] for r in rows if r['duration_per_outer_generation_seconds']>median+3*statistics.stdev(normalized)]
 quartiles=[]
 for i in range(4):
  part=rows[len(rows)*i//4:len(rows)*(i+1)//4]
  quartiles.append(dict(first_test=part[0]['test'],last_test=part[-1]['test'],solution_time=stats([r['duration_seconds'] for r in part]),
   generations=stats([r['generations'] for r in part]),generation_average=stats([r['duration_per_outer_generation_seconds'] for r in part]),
   logged_generation_average=stats([r['logged_generation_average_seconds'] for r in part])))
 report=dict(target=target,run=run,configured_tests=expected,completed_tests=len(rows),successes=len(successes),failures=len(rows)-len(successes),
  incomplete_tests=max(0,expected-len(rows)),success_rate=len(successes)/expected,successful_solution_seconds=stats(times),
  successful_generations=stats([r['generations'] for r in successes]),generation_count_distribution=dict(sorted(collections.Counter(r['generations'] for r in successes).items())),
  best_candidate_generations=stats([r['best_candidate_generations'] for r in rows]),best_candidate_generation_distribution=dict(sorted(collections.Counter(r['best_candidate_generations'] for r in rows if r['best_candidate_generations'] is not None).items())),
  evolve_results=stats([r['evolve_result'] for r in rows]),optimize_results=stats([r['optimize_result'] for r in rows]),completion_fitness=stats([r['completion_fitness'] for r in rows]),
  dense_precision_256_samples=stats([r['dense_precision_256_samples'] for r in rows]),precision_above_1e_minus_6_tests=[r['test'] for r in rows if (r['dense_precision_256_samples'] or 0)>1e-6],
  final_snapshot=snapshot,first_test=rows[0],last_test=rows[-1],sum_rounded_solution_seconds=sum(times),last_logged_cumulative_seconds=rows[-1]['cumulative_solution_seconds'],
  logged_generation_average=stats([r['logged_generation_average_seconds'] for r in rows]),duration_per_outer_generation=stats(normalized),
  quartiles=quartiles,generation_time_progression=progression(rows,'duration_per_outer_generation_seconds'),logged_generation_time_progression=progression(rows,'logged_generation_average_seconds'),
  high_duration_outlier_tests=[r['test'] for r in rows if r['duration_seconds']>q3+1.5*(q3-q1)],generation_average_three_sd_tests=exceptional,
  rounded_threshold_ambiguity_tests=[r['test'] for r in rows if r['rounded_threshold_ambiguity']],runtime_headers=[dict(values=json.loads(h),files=n) for h,n in settings_headers.items()],
  integrity_or_completion_anomalies=anomalies,raw_files=meta['raw_files'],settings_snapshot_matches_current_source=meta['settings_match_current_source'])
 save(directory/'analysis.json',report);save(directory/'terminal-status-rows.json',terminal_rows)
 with (directory/'tests.csv').open('w',newline='',encoding='utf-8') as f:
  w=csv.DictWriter(f,fieldnames=list(rows[0]));w.writeheader();w.writerows(rows)
 return report,rows,meta

def comparisons(target,observations):
 (a,ar,am),(b,br,bm)=observations
 fields=['generations','evolve_result','optimize_result','best_candidate_generations','best_candidate_evolutions','dense_precision_256_samples']
 differences=[dict(test=x['test'],fields={k:dict(run1=x[k],run2=y[k]) for k in fields if x[k]!=y[k]}) for x,y in zip(ar,br) if any(x[k]!=y[k] for k in fields)]
 c=dict(target=target,paired_tests=min(len(ar),len(br)),generation_counts_identical=[r['generations'] for r in ar]==[r['generations'] for r in br],
  runtime_headers_identical=a['runtime_headers']==b['runtime_headers'],settings_source_snapshots_identical=am['settings_sha256']==bm['settings_sha256'],
  result_difference_tests=differences,mean_time_run2_over_run1=b['successful_solution_seconds']['mean']/a['successful_solution_seconds']['mean'],
  final_snapshot_precision_identical=a['final_snapshot']['precision_256_samples']==b['final_snapshot']['precision_256_samples'])
 save(BASE/target/'comparison.json',c)
 return c

if __name__=='__main__':
 observed_commit=subprocess.check_output(['git','-C',str(ROOT),'rev-parse','HEAD'],text=True).strip()
 if observed_commit!=COMMIT:raise ValueError('Revision differs from expected campaign source')
 observations=collections.defaultdict(list)
 for run in RUNS:
  result=analyze(*run);observations[run[0]].append(result)
  r=result[0]
  print(json.dumps({k:r[k] for k in ['target','run','completed_tests','successes','failures','successful_solution_seconds','successful_generations','logged_generation_average','integrity_or_completion_anomalies']}))
 for target,runs in observations.items():print(json.dumps(comparisons(target,runs)))
 audit=[]
 for m in BASE.rglob('raw-manifest.json'):
  records=json.loads(m.read_text(encoding='utf-8'));errors=[]
  for r in records:
   if digest(Path(r['original_path']))!=r['sha256']:errors.append(r['name']+': original')
   if digest(m.parent/'raw'/r['name'])!=r['sha256']:errors.append(r['name']+': copy')
  audit.append(dict(observation=str(m.parent.relative_to(BASE)),files=len(records),hash_mismatches=errors))
 save(BASE/'integrity-audit.json',dict(observations=audit,total_raw_files=sum(r['files'] for r in audit),original_and_copy_checks=2*sum(r['files'] for r in audit)))
