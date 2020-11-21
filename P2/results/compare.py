import os
from past.builtins import xrange
with open('C:/Flaky/sum.out') as f:
    Fline = f.read().splitlines()
with open('C:/Flaky/sum.lst') as f:
    Sline = f.read().splitlines()


if os.path.exists("C:/Flaky/Des.txt"):
  os.remove("C:/Flaky/Des.txt")


Des = open(r"C:/Flaky/Des.txt","w+") 
flag = 0
print(len(Fline))
for i in xrange(len(Fline)):
    for j in xrange(len(Sline)):
        #print (i,Fline[i])
        if (Fline[i].split(' ')[0] == Sline[j]):
            Des.writelines(', '.join(Fline[i].split(' ')[1:])+"Flaky"+"\n")
            flag = 1
            break
    if flag != 1:
        flag = 0
        Des.writelines(', '.join(Fline[i].split(' ')[1:])+"NFlaky"+"\n")


Des.close()