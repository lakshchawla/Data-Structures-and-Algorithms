ans = 1

def factorial(n):
    for x in range(1,n+1):
        ans = ans * x
    
    print(ans)

factorial(5)