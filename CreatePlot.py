import matplotlib.pyplot as plt
x  = [500,1000,1500,2000]
y1 = [21,59,99,664] #python
y2 = [44,125,126,185] #c++
y3 = [61,184,187,262]  #c


plt.plot(x, y1, 'g', label='Python', linewidth=3)
plt.plot(x, y2, 'r', label='C++', linewidth=3)
plt.plot(x, y3, 'c', label='C', linewidth=3)


plt.title('Performance of Different Programming Languages')
plt.ylabel('Time Taken (sec)')
plt.xlabel('File Size (MB)')

plt.legend()           #Adding Legends

plt.show()