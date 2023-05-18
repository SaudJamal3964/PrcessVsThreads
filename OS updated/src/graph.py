import matplotlib.pyplot as plt
from matplotlib.ticker import FormatStrFormatter
import pandas as pd
plt.style.use('bmh')
df = pd.read_csv('file.csv')

x = df['NOE']
y = df['SST']
a = df['SSP']
b = df['QST']
c = df['QSP']
d = df['MST']
e = df['MSP']
f = df['FIBS']
g = df['FIBT']
h = df['FIBPT']
fig, ax = plt.subplots()
#ss
plt.xlabel('NO. OF ELEMENTS',fontsize=9)
plt.ylabel('TIME TAKEN',fontsize=9)
plt.title("Selection sort")
plt.plot(x,y,label='using thread')
plt.plot(x,a,label='using process')
plt.legend()

ax.yaxis.set_major_formatter(FormatStrFormatter('%.6f'))
plt.show()
fig, ax = plt.subplots()
#ms
plt.xlabel('NO. OF ELEMENTS',fontsize=9)
plt.ylabel('TIME TAKEN',fontsize=9)
plt.title("merge sort")
plt.plot(x,d,label='using thread')
plt.plot(x,e,label='using process')
plt.legend()
ax.yaxis.set_major_formatter(FormatStrFormatter('%.6f'))
plt.show()
fig, ax = plt.subplots()
#qs
plt.xlabel('NO. OF ELEMENTS',fontsize=9)
plt.ylabel('TIME TAKEN',fontsize=9)
plt.title("QUICK SORT")
plt.plot(x,b,label='using thread')
plt.plot(x,c,label='using process')
plt.legend()
ax.yaxis.set_major_formatter(FormatStrFormatter('%.6f'))
plt.show()
fig, ax = plt.subplots()
#fib
plt.xlabel('SERIES NUMBER',fontsize=9)
plt.ylabel('TIME TAKEN',fontsize=9)
plt.title("FIBONACCI SERIES")
plt.plot(f,g,label='using thread')
plt.plot(f,h,label='using process')
plt.legend()
ax.yaxis.set_major_formatter(FormatStrFormatter('%.6f'))
plt.show()
