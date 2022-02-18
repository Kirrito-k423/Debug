from termcolor import colored
import os
import time
import random
import plotille
import pprint


def errorPrint(message):
    os.system('color')
    print(colored(message, 'red'))
    return message


def colorPrint(message, color):
    os.system('color')
    print(colored(message, color))
    return message


def pPrint(message):
    print("\n")
    pprint.pprint(message)
    print("\n")


def yellowPrint(message):
    os.system('color')
    print(colored(message, "yellow"))
    return message


def passPrint(message):
    os.system('color')
    print(colored(message, 'green'))
    return message


def completePrint(message):
    os.system('color')
    print("--------------------------------{}--------------------------------".format(colored(message, 'green')))
    return message


def splitLine(string, color="white"):
    print("\n")
    colorPrint(
        "--------------------------------{}--------------------------------".format(string), color)
    print("\n")
    return string


def histogramsPrint(data, type="vertical"):
    if type == "vertical":
        print(plotille.histogram(data))
    else:
        print(plotille.hist(data))


def sleepRandom(seconds):
    time.sleep(round(random.uniform(0.15, seconds+0.15), 2))


def Random(num):
    return round(random.uniform(0, num), 2)


def textBelong(small, big):
    for i in small:
        if i in big:
            return 1
    return 0


def isArround(listA, listB, delta):
    if len(listA) != len(listB):
        errorPrint("isArround inputLength not equal!!!")
        return 0
    for i in range(0, len(listA)):
        a = listA[i]
        b = listB[i]
        if a < b-delta or a > b+delta:
            errorPrint("not Arround")
            return 0
    passPrint("isArround")
    return 1


def testTime(whileTimes, function):
    histogramsData = []
    begin = time.time()
    while whileTimes:
        beforeFunction = time.time()
        function()
        afterFunction = time.time()
        deltatime = afterFunction - beforeFunction
        colorPrint("delta time ONECE {}".format(
            deltatime), "yellow")
        histogramsData.append(deltatime)
        whileTimes -= 1
    end = time.time()
    colorPrint("ALL {}".format(end-begin), "red")
    histogramsPrint(histogramsData, "horizontal")