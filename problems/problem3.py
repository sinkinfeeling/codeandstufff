import numpy as np
from sklearn.linear_model import LogisticRegression

X = np.array([1, 2, 3, 4, 5, 6]).reshape(-1, 1)


y = np.array([0, 0, 0, 1, 1, 1])

model = LogisticRegression()
model.fit(X, y)

study_hours = np.array([[3.5]])
prediction = model.predict(study_hours)

if prediction[0] == 1:
    print("Student will PASS")
else:
    print("Student will FAIL")
