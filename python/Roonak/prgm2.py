import string 
import random
import os.path
from pathlib import Path

N = 20

for i in range(1, 11):
    fileNum = str(i)
    fileName = "file" + fileNum + ".txt"

    os.path.isfile(fileName)

    myFile = Path(fileName)

    if myFile.is_file():
        myString = ''.join(random.choices(string.ascii_lowercase, k = N))
    
        writeToFile = open(fileName, "w")
        writeToFile.write(myString)
        writeToFile.close

    else:
        openFile = open(fileName, "x")
        openFile.close()

        myString = ''.join(random.choices(string.ascii_lowercase, k = N))
    
        writeToFile = open(fileName, "w")
        writeToFile.write(myString)
        writeToFile.close
