def calculateGrade(marks):
    if(marks >= 91):
        return 'A+'

    elif(marks >= 81 and marks < 91):
        return 'A'

    elif(marks >= 71 and marks < 81):
        return 'B+'

    elif(marks >= 61 and marks < 71):
        return 'B'

    elif(marks >= 51 and marks < 61):
        return 'C'

    elif(marks >= 41 and marks < 51):
        return 'D'

    elif(marks >= 35 and marks < 41):
        return 'E'

    elif(marks < 35):
        return 'F'

marks = int(input("Enter marks: "))

print("You got {} grade".format(calculateGrade(marks)))
