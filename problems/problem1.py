import numpy as np
from sklearn.linear_model import LinearRegression

X = np.array([500, 750, 1000, 1250, 1500]).reshape(-1, 1)

y = np.array([150000, 200000, 250000, 300000, 350000])

model = LinearRegression()
model.fit(X, y)

area = np.array([[1100]])
predicted_price = model.predict(area)

print("Predicted house price:", predicted_price[0])
