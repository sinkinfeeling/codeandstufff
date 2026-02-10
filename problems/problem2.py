import pandas as pd

data = {
    'Age': [25, 30, None, 22],
    'Salary': [50000, None, 45000, 40000],
    'City': ['Delhi', 'Mumbai', 'Delhi', 'Chennai']
}

df = pd.DataFrame(data)

print("Original DataFrame:")
print(df)

df['Age'].fillna(df['Age'].mean(), inplace=True)
df['Salary'].fillna(df['Salary'].mean(), inplace=True)

df_encoded = pd.get_dummies(df, columns=['City'])

print("\nPreprocessed DataFrame:")
print(df_encoded)
