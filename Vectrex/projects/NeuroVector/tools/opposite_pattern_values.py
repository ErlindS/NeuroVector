import numpy as np
import matplotlib.pyplot as mplot

lowvalue = -120
highvalue = 120

values = np.linspace(lowvalue,highvalue,32)
values1 = np.linspace(highvalue, lowvalue,32)
values6 = np.linspace(lowvalue,highvalue,32)
values7= np.linspace(highvalue, lowvalue,32)

for xv in values:
    print(f"{{120, {xv:.0f}}},")
for xv in values1:
    print(f"{{{xv:.0f}, 120}},")
for xv in values7:
    print(f"{{-120, {xv:.0f}}},")
for xv in values6:
    print(f"{{{xv:.0f}, -120}},")

values2 = np.linspace(0, highvalue,32)
values3 = np.linspace(lowvalue, 0,32)
values4 = np.linspace(highvalue, 0,32)
values5 = np.linspace(0, lowvalue,32)

k1 = list(zip(values4,values5))

k2 = list(zip(values5,values3))

k3 = list(zip(values3,values2))

k4 = list(zip(values2,values4))

#print(f"this are your x values: {x}")
#print(f"this are your y values: {y}")
print("-------------------------- Here is the cut ---------------------")

for xv, yv in k1:
    print(f"{{{xv:.0f}, {yv:.0f}}},")
for xv, yv in k2:
    print(f"{{{xv:.0f}, {yv:.0f}}},")
for xv, yv in k3:
    print(f"{{{xv:.0f}, {yv:.0f}}},")
for xv, yv in k4:
    print(f"{{{xv:.0f}, {yv:.0f}}},")