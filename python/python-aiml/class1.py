num1 = input("Enter number 1: ")
oper = input("Enter operation: ")
num2 = input("Enter number 2: ")

if(oper == '+'):
    result = int(num1) + int(num2)

elif (oper == '-'):
    result = int(num1) - int(num2)

elif (oper == '*'):
    result = int(num1) * int(num2)

elif (oper == '/'):
    result = int(num1) / int(num2)


print("\n\nThe result is: ", result)
