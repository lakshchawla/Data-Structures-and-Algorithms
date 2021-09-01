import pandas as pd

# with open('markSheet.csv', mode = 'r')as file:
#     csvFile = list(csv.reader(file))

    
# print(csvFile)

data = pd.read_csv('markSheet.csv', usecols='grade')
print(data)