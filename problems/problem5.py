import matplotlib.pyplot as plt

subjects = ['Maths', 'Physics', 'Chemistry']
marks = [85, 78, 90]

plt.bar(subjects, marks)
plt.xlabel("Subjects")
plt.ylabel("Marks")
plt.title("Student Marks")
plt.show()
plt.savefig("bar_chart-2.png")