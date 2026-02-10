import matplotlib.pyplot as plt

hours = [1, 2, 3, 4, 5]
scores = [40, 50, 60, 70, 85]

plt.scatter(hours, scores)
plt.xlabel("Study Hours")
plt.ylabel("Scores")
plt.title("Study Hours vs Scores")
plt.show()
plt.savefig("bar_chart.png")