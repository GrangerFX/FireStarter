"""Create scientific figures from derived CSVs; raw timing files stay untouched."""
import csv
from pathlib import Path
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt

BASE=Path(__file__).resolve().parent
COLORS={1:'#1769aa',2:'#c76718'}
plt.rcParams.update({'font.size':10,'axes.titlesize':12,'axes.labelsize':10,'legend.fontsize':9,'pdf.fonttype':42})
def read(target,run):
 with (BASE/target/f'Run{run}/tests.csv').open(encoding='utf-8') as file:return list(csv.DictReader(file))
def finish(fig,name):
 fig.savefig(BASE/(name+'.png'),dpi=180)
 fig.savefig(BASE/(name+'.pdf'))
 plt.close(fig)
def style(ax):
 ax.grid(alpha=.18);ax.set_axisbelow(True)

fig,axes=plt.subplots(2,1,figsize=(9,7),layout='constrained')
for index,target in enumerate(['EvolveNew','EvolveGPU']):
 ax=axes[index]
 for run in [1,2]:
  rows=read(target,run)
  x=[int(r['test']) for r in rows]
  field='logged_generation_average_seconds' if target=='EvolveNew' else 'duration_per_outer_generation_seconds'
  y=[float(r[field]) for r in rows]
  ax.plot(x,y,'o',markersize=2.6,alpha=.28,color=COLORS[run],label=f'Run {run}')
  centers=[sum(x[i:i+32])/len(x[i:i+32]) for i in range(0,256,32)]
  means=[sum(y[i:i+32])/len(y[i:i+32]) for i in range(0,256,32)]
  ax.plot(centers,means,'-',linewidth=1.8,color=COLORS[run])
 ax.set(title=f'{target}: per-test generation averages',xlabel='Test index',ylabel='Seconds')
 ax.set_ylim((0,.11) if target=='EvolveNew' else (0,.60))
 ax.legend(loc='upper right');style(ax)
 axes[index].text(.02,.94,'Points: test averages; lines: 32-test means.\nWhole-test Duration includes solution search and optimization.',transform=ax.transAxes,va='top',fontsize=8)
fig.suptitle('FireStarter — second timing campaign, October 8, 2026',fontsize=13)
finish(fig,'generation-timing')

fig,axes=plt.subplots(1,2,figsize=(10,4),layout='constrained')
for ax,target in zip(axes,['EvolveNew','EvolveGPU']):
 for run in [1,2]:
  values=sorted(float(r['duration_seconds']) for r in read(target,run))
  fractions=[(i+1)/len(values) for i in range(len(values))]
  ax.step(values,fractions,where='post',color=COLORS[run],linewidth=1.6,label=f'Run {run}')
 ax.set(title=target,xlabel='Successful-solution Duration (s)',ylabel='Fraction of 256 solutions',ylim=(0,1.02),xlim=(0,None))
 ax.legend(loc='lower right');style(ax)
fig.suptitle('Successful-solution time distributions — startup and outliers retained',fontsize=12)
finish(fig,'solution-time-distribution')

fig,ax=plt.subplots(figsize=(9,4.6),layout='constrained')
for run,marker in [(1,'o'),(2,'x')]:
 rows=read('EvolveCPU',run)
 ax.plot([int(r['test']) for r in rows],[float(r['dense_precision_256_samples']) for r in rows],
  marker,markersize=4.5,alpha=.7,color=COLORS[run],label=f'Run {run}: 64 tests')
ax.axhline(1e-6,color='#424242',linestyle='--',linewidth=1,label='1e−6 reference')
ax.set_yscale('log')
ax.set(title='EvolveCPU: dense-grid precision after fitness success',xlabel='Test index',ylabel='Maximum absolute error on 256 points',ylim=(4e-7,3e-5))
fig.legend(loc='outside upper center',ncol=3);style(ax)
ax.text(.01,.02,'All 64 tests per run met 15-point fitness. 60/64 exceed 1e−6 on the dense grid in each run.\nFinite-grid precision does not establish a continuous-domain error bound.',transform=ax.transAxes,fontsize=8,va='bottom')
finish(fig,'cpu-precision')
print('Saved three figures as PNG and PDF.')
