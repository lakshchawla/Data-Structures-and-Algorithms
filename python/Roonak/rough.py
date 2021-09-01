from csv import writer
from os import write
import string
import random
import os.path
from pathlib import Path
import datetime

dirFiles = os.listdir()

n = 0

iniTime = datetime.datetime.now().time()
strIntTime = str((iniTime.hour*3600) + (iniTime.minute*60) +
                 (iniTime.second)) + "." + str(iniTime.microsecond)

for i in dirFiles:
    FileName = str(i)

    if(FileName[-4] == "." and FileName[-3] == "t" and FileName[-2] == "x" and FileName[-1] == "t"):
        fileOpen = open(FileName, "r")
        stringExt = str(fileOpen.read())
        fileOpen.close()

        writeToFile = open(FileName, "w")
        writeToFile.write(stringExt.upper())
        n += 1

    else:
        continue

finTime = datetime.datetime.now().time()
strFinTime = str((finTime.hour*3600) + (finTime.minute*60) +
                 (finTime.second)) + "." + str(finTime.microsecond)

diffTime = float(strFinTime) - float(strIntTime)


myDb = [n, diffTime]

with open('timeData.csv', 'a') as dbFile:
    newObj = writer(dbFile)
    newObj.writerow(myDb)
    dbFile.close()
