term1 = 0
term2 = 1
nextTerm = 0

n = int(input("Enter series"))

for num in range(0,n):
    print(term1)
    nextTerm = term1 + term2
    term1 = term2 
    term2 = nextTerm
