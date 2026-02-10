import pandas as pd
data = {
    'Marks': [70, 75, 80, 85, 90, 85]
}

df = pd.DataFrame(data)

print("Mean:", df['Marks'].mean())
print("Median:", df['Marks'].median())
print("Mode:", df['Marks'].mode()[0])
print("Standard Deviation:", df['Marks'].std())
