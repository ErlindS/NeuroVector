import numpy as np
import matplotlib.pyplot as mplot

lowvalue = -120
highvalue = 120

values = np.linspace(lowvalue,highvalue,64)
values1 = np.linspace(highvalue, lowvalue,64)
values6 = np.linspace(lowvalue,highvalue,64)
values7= np.linspace(highvalue, lowvalue,64)

for xv in values:
    print(f"{{0, {xv:.0f}}},")
print("---------------------------------------")
for xv in values:
    print(f"{{{xv:.0f}, -96}},")
print("---------------------------------------")
for xv in values:
    print(f"{{{xv:.0f}, 0}},")
print("---------------------------------------")
for xv in values:
    print(f"{{{xv:.0f}, 94}},")
