import numpy as np
import matplotlib.pyplot as mplot

values = np.linspace(0,2*np.pi,127)

x = np.cos(values) * 120
y = np.sin(values) * 120

k = list(zip(x,y))

#print(f"this are your x values: {x}")
#print(f"this are your y values: {y}")
#print(k)
for xv, yv in k:
    print(f"{{{xv:.0f}, {yv:.0f}}},")


mplot.plot(x,y)
mplot.show()