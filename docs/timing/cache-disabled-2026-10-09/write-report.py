from pathlib import Path
import json,csv,statistics,shutil
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
import numpy as np
BASE=Path(__file__).resolve().parent
def load(p):return json.loads(p.read_text(encoding='utf-8'))
def rows(mode,n):
 with (BASE/mode/f'Run{n}'/'tests.csv').open() as f:return list(csv.DictReader(f))
R={(mode,n):load(BASE/mode/f'Run{n}'/'analysis.json') for mode in ('EvolveNew','EvolveGPU','EvolveCPU') for n in (1,2)}
E=load(BASE/'extended-analysis.json');P=load(BASE/'previous-campaign-comparison.json')
audit=load(BASE/'integrity-audit.json');prov=load(BASE/'source-and-build-provenance.json')
assert all(not x['hash_mismatches'] for x in audit['observations'])
assert all(x['matches_october_8_record'] for x in prov['source_checks'])
assert all(x['matches_october_8_tested_binary'] for x in prov['binary_checks'])
def table(headers,data):return '\n'.join(['| '+' | '.join(headers)+' |','| '+' | '.join(['---']*len(headers))+' |']+['| '+' | '.join(map(str,r))+' |' for r in data])
headline=[]
for (mode,n),r in R.items():
 s=r['successful_solution_seconds'];headline.append([mode,n,r['completed_tests'],r['successes'],f"{s['mean']:.5f}",f"{s['median']:.2f}",f"{s['p95']:.3f}",f"{r['successful_generations']['mean']:.5f}"])
ratio1=R['EvolveGPU',1]['successful_solution_seconds']['mean']/R['EvolveNew',1]['successful_solution_seconds']['mean']
ratio2=R['EvolveGPU',2]['successful_solution_seconds']['mean']/R['EvolveNew',2]['successful_solution_seconds']['mean']
intro=f'''# FireStarter timing results with compilation caching disabled

Benchmark date: October 9, 2026, Pacific Daylight Time. Two complete user-launched batches for each mode. This report is the primary timing dataset for the revised Evolutionary Computational Discovery white paper.

All 1,152 configured tests met the logged 15-sample fitness criterion. Run means differ by +0.1656% for EvolveNew, -0.4133% for EvolveGPU, and -0.1177% for EvolveCPU (Run 2 relative to Run 1). These repeated seed-0 batches check timing repeatability; they are not independent random-seed replications.

{table(['Mode','Run','Tests','Fitness successes','Mean seconds','Median seconds','P95 seconds','Mean generations'],headline)}

EvolveNew has {ratio1:.3f} and {ratio2:.3f} times shorter mean time to solution than EvolveGPU in Runs 1 and 2. This compares the configured modes: New is supplied with a successful fixed register topology and uses one optimization unit; GPU searches register assignments and uses four. It does not isolate identical kernels or include the earlier cost of discovering New's register topology. CPU uses a different search strategy and includes CUDA optimization, so it is not a CPU-only hardware comparison.

## Purpose and cache conditions

The purpose is to measure current FireStarter time to first acceptable sampled-fitness solution without reuse from NVIDIA's compilation caches. The user set CUDA_CACHE_DISABLE=1 before testing and ran through a directly connected monitor, keyboard, and mouse, checked that the GPU was unused before the runs, and closed as many applications as practicable. The analysis process also inherited CUDA_CACHE_DISABLE=1, corroborating the current environment, although the native benchmark logs do not independently capture each executable's inherited environment or cache hits. Close paired timings support repeatability, not independent proof of the flag.

NVIDIA documents that CUDA_CACHE_DISABLE disables the driver PTX compilation cache and NVRTC's compilation cache. Loaded modules can still be reused within a process; disabling disk compilation caching does not force recompilation for each kernel launch. The source loads the evolution module once per execution unit and specializes selected candidate code into optimizer source. Compilation and GPU execution can overlap. This is an end-to-end search measurement, not a separate compiler or kernel microbenchmark.

References: [NVRTC compilation caching](https://docs.nvidia.com/cuda/nvrtc/index.html#caching-cuda-12-9); [CUDA cache controls](https://docs.nvidia.com/cuda/cuda-programming-guide/05-appendices/environment-variables.html#jit-compilation).

## Source and environment provenance

Tested source anchor: 13461b1733a03019eded0745a557ab021613fa17 (ECD-Timing-2026-10-08-Source). Current repository HEAD: ecc41e66c220a7b89dd766054a152981c96bb431, the October 8 report commit. All 55 source files recorded in the prior provenance and all three launch binaries match the October 8 hashes, as do each binary's launch and linker copies. All six settings snapshots match the current settings source. These are post-run checks; there is no embedded commit or in-run executable hash capture.

The established hardware/build record is one RTX 5090, Ryzen 9 7950X, stock GPU settings with automatic tuning off, integrated Radeon display, Release x64 builds from Visual Studio 2026, NVIDIA Studio Driver 617.42, and CUDA Toolkit 13.4.2 (compiler/NVRTC components 13.4.92). This record is inherited from the October 8 provenance; installation versions and device state are not continuously instrumented in the October 9 logs. Every native status header identifies the RTX 5090. Reboot is not asserted for October 9. No clock, temperature, process-load, cache-hit, or standalone compilation trace was captured.

## Settings

All runs use one sinf target variation on [0, 2*pi], 32 instructions, at most 30 registers, weighted opcode entries multiply/multiply/add, fitness target 1e-6, 15 fitness samples, 256 dense validation samples, 64 data iterations, evolution and optimization seed 0, start test 0, and no generation cap. CPU's separate multi-variation capability is outside this dataset.

{table(['Setting','CPU evolution','GPU evolution','New evolution','GPU and New optimization'],[['Units / states','16 / 16','1 / 1','1 / 1','1 / 1 setting'],['Population','348160','32768','32768','65536'],['Passes','512','256','256','384'],['Tests per batch','64','256','256','256']])}

GPU orchestrates four asynchronous optimization units on the single device; New orchestrates one. Settings remain mode specific. NVRTC options select compute_120, -default-device, -ftz=false, -prec-div=true, and -prec-sqrt=true.

## Timing stability and startup

All paired outer generation counts match exactly. New's logged evolution and completion fitness also match on every test. GPU has 14 differing completion-fitness tests; CPU has 14 differing candidate/fitness/validation tests. Those winner differences are consistent with asynchronous first-qualifying selection, but the logs do not identify every candidate's full code. They are preserved in each mode's comparison.json, not treated as identical outcomes.

Startup test 0 remains included in every headline statistic. Its solution durations are 3.70 / 3.46 seconds for New, 7.0 / 7.0 seconds for GPU, and 11.2 / 11.1 seconds for CPU. Compilation is not separately timed, so the startup increase cannot be assigned exclusively to a specific compilation stage.

As a clearly secondary sensitivity check, removing only test 0 gives New means 0.48290 / 0.48467 seconds and GPU means 1.49059 / 1.48431 seconds. This demonstrates that New's higher overall time is not explained by startup alone; these adjusted means do not replace the full-batch statistics.

New's mean logged GenTime over tests 1-255 and chronological quarters is reported in its mode analysis. The native GenTime is a whole-test solution duration divided by evolution generations, not a trace of individual generations. Later-quarter changes reflect both varying search/optimization work and timing; no monotonic persistent step slowdown is established. CPU duration versus generation count has descriptive R-squared above 0.99996 in each batch. Its changing solution-time averages track search effort rather than demonstrating a progressive execution slowdown.

## Precision and result validity

Success means satisfying maximum absolute error on 15 fitness samples. It is not a guarantee across the continuous interval. CPU records dense-grid error on all 64 tests: 59/64 in Run 1 and 60/64 in Run 2 exceed the printed 1e-6 threshold; means are 4.09406e-6 and 4.67781e-6, and maxima are 2.104e-5 and 2.217e-5.

GPU and New record dense precision only for final test 255: New is 6.9e-7 and GPU 2.718e-5 in both batches. These snapshots do not support a per-test dense-validation success rate. GPU test 188 prints completion fitness exactly as 1e-6 despite the underlying strict threshold check and success marker; unrounded fitness cannot be recovered. Validation is CPU evaluation over a denser sample grid, not a direct CPU/GPU arithmetic comparison.

## Context from the October 8 campaign

The October 8 observations used normal caching with an unknown initial cache state. They remain historical context and are not combined with October 9 measurements.

{table(['Mode','Run','October 8 mean s','October 9 mean s','New divided by earlier'],[[x['mode'],x['run'],f"{x['old_mean']:.5f}",f"{x['new_mean']:.5f}",f"{x['new_over_old']:.4f}"] for x in P])}

New is approximately three times slower with compilation caching disabled despite matching evolution generations and fitness on every test. GPU is close to the earlier first batch and 9.05% slower than the earlier second batch. CPU's means differ from the corresponding earlier means by +0.59% and +0.01%. These observations support mode-dependent sensitivity to the cache condition. They do not measure cache occupancy, prove cache eviction, establish that disabling the cache speeds a mode up, or isolate cache cost from separate-day environment variation.

## Raw output and integrity

{table(['Mode','Run','Summary prefix','Status and snapshot prefix'],[[a,b,c,d] for a,b,c,d,_ in [('EvolveNew',1,'2026-10-09_09-14-46','2026-10-09_09-14-46',256),('EvolveNew',2,'2026-10-09_09-17-02','2026-10-09_09-17-02',256),('EvolveGPU',1,'2026-10-09_09-19-20','2026-10-09_09-19-21',256),('EvolveGPU',2,'2026-10-09_09-28-05','2026-10-09_09-28-05',256),('EvolveCPU',1,'2026-10-09_09-34-40','2026-10-09_09-34-42',64),('EvolveCPU',2,'2026-10-09_10-09-18','2026-10-09_10-09-19',64)]])}

Each run retains the summary, every per-test status log, settings-source snapshot, and final saved state in its raw directory. Integrity audit: {audit['total_raw_files']} raw files and {audit['original_and_copy_checks']} original/copy SHA-256 checks, with zero mismatches. The native originals in C:/Work/FireStarter/FireStarter/Logs are unchanged. No logged failure, missing test, settings mismatch, summary/status fitness mismatch, or cumulative-generation inconsistency was found. Numeric OS exit codes and debug output were not collected.

## Statistical method and files

Headline timings are native successful summary Duration values, with test 0 included. CPU/GPU log Duration to 0.1 seconds; New to 0.01 seconds. Sample standard deviation uses n-1; quantiles interpolate at (n-1)*p. Extra aggregate digits are arithmetic on rounded observations, not added timing resolution. Runs remain separate. Generation counts represent mode-specific work and are not identical units across modes. Failed tests would be counted separately; none are logged.

Final saved-state application Run durations are 127.264157 / 127.503211 seconds for New, 387.812855 / 386.246887 for GPU, and 1799.351328 / 1797.595244 for CPU. These are application timers, not independently captured process start-to-exit measurements. In particular, CPU records solution Duration before its separate final optimizer-code generation, so these durations exclude some post-solution work. Whole-application totals and sums of rounded solution durations should not be substituted for one another.

- Per-mode reports: [New](EvolveNew/analysis.md), [GPU](EvolveGPU/analysis.md), [CPU](EvolveCPU/analysis.md).
- Per-run tests.csv, analysis.json, terminal-status-rows.json, provenance.json, and raw-manifest.json contain every observation and available result.
- summary.csv, extended-analysis.json, and previous-campaign-comparison.json contain aggregate and comparative values.
- source-and-build-provenance.json records source and binary checks; integrity-audit.json records raw-file verification.
- analyze.py reproduces native-log parsing/statistics and raw integrity. Set FIRESTARTER_REPOSITORY if the repository moves. It never launches benchmarks or alters source/cache settings.
- Figures: [solution time distributions](solution-time-distributions.png), [generation averages](generation-averages.png), [CPU dense validation](cpu-dense-validation.png).
'''
(BASE/'README.md').write_text(intro,encoding='utf-8')
for mode in ('EvolveNew','EvolveGPU','EvolveCPU'):
 a,b=R[mode,1],R[mode,2];pair=E[mode+'_paired'];metrics=[]
 for label,key in [('Mean','mean'),('Median','median'),('Sample standard deviation','sample_stddev'),('Minimum','minimum'),('Maximum','maximum'),('P90','p90'),('P95','p95')]:metrics.append([label+' seconds',f"{a['successful_solution_seconds'][key]:.5f}",f"{b['successful_solution_seconds'][key]:.5f}"])
 metrics += [['Tests / successes',f"{a['completed_tests']} / {a['successes']}",f"{b['completed_tests']} / {b['successes']}"],['Mean generations',a['successful_generations']['mean'],b['successful_generations']['mean']],['Median generations',a['successful_generations']['median'],b['successful_generations']['median']],['Application Run seconds',a['final_snapshot']['application_run_seconds'],b['final_snapshot']['application_run_seconds']]]
 s=f"# {mode} timing results with compilation caching disabled\n\nOctober 9, 2026. One Sin target variation; Release x64; CUDA_CACHE_DISABLE=1 reported by the user. Source anchor 13461b1733a03019eded0745a557ab021613fa17. See the [campaign report](../README.md) for complete protocol and limitations.\n\n"+table(['Metric','Run 1','Run 2'],metrics)
 s+='\n\n## Repeatability\n\n'+f"Mean Run 2 relative to Run 1 changes by {(pair['comparison']['mean_time_run2_over_run1']-1)*100:+.4f}%. Of {pair['comparison']['paired_tests']} pairs, Run 2 is faster on {pair['run2_faster_tests']}, equal at logged resolution on {pair['same_rounded_duration_tests']}, and slower on {pair['run2_slower_tests']}. All paired outer generation counts and settings match. Result differences occur on tests {[x['test'] for x in pair['comparison']['result_difference_tests']]}; exact fields are preserved in comparison.json.\n"
 s+='\n## Generation count distribution\n\n'+table(['Generations','Run 1 tests','Run 2 tests'],[[g,a['generation_count_distribution'].get(g,0),b['generation_count_distribution'].get(g,0)] for g in sorted(set(a['generation_count_distribution'])|set(b['generation_count_distribution']),key=int)])
 s+='\n\n## Timing progression\n\n'+table(['Run','Test indices','Mean Duration seconds','Mean generations','Mean Duration divided by generations'],[[n,q['tests'],f"{q['mean_seconds']:.5f}",f"{q['mean_generations']:.5f}",f"{q['mean_duration_per_generation']:.5f}"] for n in (1,2) for q in E[f'{mode}_Run{n}']['quarter_means']])
 for n in (1,2):
  r=R[mode,n];rr=rows(mode,n);vals=[float(x['logged_generation_average_seconds']) for x in rr[1:] if x['logged_generation_average_seconds']]
  s+=f"\n\nRun {n}: startup solution Duration {r['first_test']['duration_seconds']} seconds, {r['first_test']['generations']} generations. Startup remains included. High-duration outlier tests (Q3 + 1.5 IQR): {r['high_duration_outlier_tests']}. Generation-average observations above median + 3 sample SD: {r['generation_average_three_sd_tests']}. Integrity/completion anomalies: {r['integrity_or_completion_anomalies']}."
  if vals:s+=f" Excluding startup only, mean logged GenTime is {statistics.mean(vals):.5f} seconds and median {statistics.median(vals):.2f} seconds."
 s+='\n\nGenTime and Duration/Generation are whole-test averages, not individual-generation or kernel timers. Every outlier remains in headline statistics. No perfectly flat timing claim is made. CPU regressions explain over 99.996% of duration variance; GPU and New search work varies between tests.\n'
 s+='\n## Fitness and validation\n\n'+table(['Completion fitness','Run 1','Run 2'],[[k,f"{a['completion_fitness'][k]:.8g}",f"{b['completion_fitness'][k]:.8g}"] for k in ('minimum','maximum','mean','median')])
 if mode=='EvolveCPU':
  s+='\n\n'+table(['Dense validation maximum absolute error','Run 1','Run 2'],[[k,f"{a['dense_precision_256_samples'][k]:.8g}",f"{b['dense_precision_256_samples'][k]:.8g}"] for k in ('minimum','maximum','mean','median')])
  s+=f"\n\nDense error exceeds printed 1e-6 on {len(a['precision_above_1e_minus_6_tests'])}/64 and {len(b['precision_above_1e_minus_6_tests'])}/64 tests. At-or-below threshold test indices: {[int(x['test']) for x in rows(mode,1) if float(x['dense_precision_256_samples'])<=1e-6]} / {[int(x['test']) for x in rows(mode,2) if float(x['dense_precision_256_samples'])<=1e-6]}. All logged sampled-fitness successes are retained."
 else:s+=f"\n\nOnly final test 255 records dense-grid precision: {a['final_snapshot']['precision_256_samples']:.8g} / {b['final_snapshot']['precision_256_samples']:.8g}. All other dense values are unavailable, not presumed passing. Boundary-fitness tests: {a['rounded_threshold_ambiguity_tests']} / {b['rounded_threshold_ambiguity_tests']}."
 s+='\n\nFitness uses 15 samples; validation uses 256 samples and does not guarantee accuracy over the continuous domain. GPU/CPU solution times are rounded to 0.1 seconds; New to 0.01 seconds. Run totals, startup-sensitive supplementary values, and summary means are distinct metrics.\n'
 (BASE/mode/'analysis.md').write_text(s,encoding='utf-8')
# Export figures sized for a 6.5 inch text area.
plt.rcParams.update({'font.family':'DejaVu Sans','font.size':10,'axes.spines.top':False,'axes.spines.right':False,'savefig.dpi':200})
fig,axes=plt.subplots(1,2,figsize=(9.6,3.8))
for ax,mode in zip(axes,('EvolveNew','EvolveGPU')):
 for n,color in ((1,'#244b73'),(2,'#b46b29')):
  v=sorted(float(x['duration_seconds']) for x in rows(mode,n));ax.step(v,np.arange(1,len(v)+1)/len(v),where='post',label=f'Run {n}',color=color)
 ax.set(title=mode,xlabel='Solution Duration (seconds)',ylabel='Fraction of tests');ax.grid(alpha=.18);ax.legend(loc='lower right');ax.set_ylim(0,1.03)
fig.suptitle('Solution time distributions with compilation caching disabled',fontsize=12);fig.tight_layout();fig.savefig(BASE/'solution-time-distributions.png');plt.close(fig)
fig,axes=plt.subplots(1,3,figsize=(11.4,3.8))
for ax,mode in zip(axes,('EvolveNew','EvolveGPU','EvolveCPU')):
 for n,color in ((1,'#244b73'),(2,'#b46b29')):
  rr=rows(mode,n);t=[int(x['test']) for x in rr];v=[float(x['duration_per_outer_generation_seconds']) for x in rr]
  ax.scatter(t,v,s=8,alpha=.4,color=color)
  windows=[(t[i:i+16],v[i:i+16]) for i in range(0,len(t),16)]
  ax.plot([statistics.mean(x) for x,y in windows],[statistics.mean(y) for x,y in windows],color=color,label=f'Run {n}')
 ax.set(title=mode,xlabel='Test index',ylabel='Duration / generations (s)');ax.grid(alpha=.18);ax.legend(fontsize=8)
fig.suptitle('Whole-test generation averages including startup',fontsize=12);fig.tight_layout();fig.savefig(BASE/'generation-averages.png');plt.close(fig)
fig,ax=plt.subplots(figsize=(8.5,3.8))
for n,color in ((1,'#244b73'),(2,'#b46b29')):
 rr=rows('EvolveCPU',n);ax.scatter([int(x['test']) for x in rr],[float(x['dense_precision_256_samples']) for x in rr],s=18,color=color,label=f'Run {n}')
ax.axhline(1e-6,color='black',ls='--',lw=1,label='1e-6 reference');ax.set_yscale('log');ax.set(xlabel='Test index',ylabel='Maximum absolute error on 256 samples',title='CPU dense validation after sampled-fitness success');ax.legend(ncol=3,loc='upper left',fontsize=9);ax.grid(alpha=.18);fig.tight_layout();fig.savefig(BASE/'cpu-dense-validation.png');plt.close(fig)
# Preserve this report builder with a location-relative base for reproducibility.
own=Path(__file__).read_text(encoding='utf-8').replace("BASE=Path(__file__).resolve().parent","BASE=Path(__file__).resolve().parent")
(BASE/'write-report.py').write_text(own,encoding='utf-8')
print(json.dumps({'gpu_new_ratios':[ratio1,ratio2],'raw_files':audit['total_raw_files'],'hash_checks':audit['original_and_copy_checks']}))
