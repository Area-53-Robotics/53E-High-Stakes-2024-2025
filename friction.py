import pandas as pd 
import matplotlib.pyplot as plt
headers = [
 "left_0_draw",
 "left_1_draw",
 "left_2_draw",
 "right_0_draw",
 "right_1_draw",
 "right_2_draw",
 "left_0_temp",
 "left_1_temp",
 "left_2_temp",
 "right_0_temp",
 "right_1_temp",
 "right_2_temp",
]
file = pd.read_csv("log.csv", delimiter=",", names=headers)
y = []
index = 0
for line in file.left_0_draw:
 y.append(index)
 index += 1
# Repeat for right draw, left temp, and right temp
plt.plot(
 y, file["left_0_draw"], "y", file["left_1_draw"], "r", file["left_2_draw"], "g"
)
plt.show()
