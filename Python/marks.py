# import matplotlib.pyplot as plt
# X=["physics","chemistry","Maths"]
# y1=[70,50,60]
# y2=[31,41,53]
# y3=[64,70,51]
# y4=[34,50,99]
# y5=[30,25,67]
# plt.plot(X,y1,label="student1")
# plt.plot(X,y2)
# plt.plot(X,y3)
# plt.plot(X,y4)
# plt.plot(X,y5)
# plt.show()
import matplotlib.pyplot as plt

X = ["Physics", "Chemistry", "Maths"]
y1 = [70, 50, 60]
y2 = [31, 41, 53]
y3 = [64, 70, 51]
y4 = [34, 50, 99]
y5 = [30, 25, 67]

# Set the width of each bar
width = 0.15

# Create x-axis positions for each group of bars
x = range(len(X))

# Plot the grouped bars
plt.bar(x, y1, width=width, label='Student 1')
plt.bar([i + width for i in x], y2, width=width, label='Aditya')
plt.bar([i + 2 * width for i in x], y3, width=width, label='Vivek')
plt.bar([i + 3 * width for i in x], y4, width=width, label='Ritvik')
plt.bar([i + 4 * width for i in x], y5, width=width, label='Plindrome')

# Label the x-axis
plt.xlabel('Subjects')

# Label the y-axis
plt.ylabel('Scores')

# Set the x-axis ticks and labels
plt.xticks([i + 2 * width for i in x], X)

# Add a legend
plt.legend()

# Show the chart
plt.show()