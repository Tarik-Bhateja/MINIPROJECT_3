import string as s
import random as r
Writefp=open('E:\SUMMERSCHOOL\PROJECTS\PERFORMANCE COMPARISON\TEXT FILES\dogb.txt','w')
for i in range(81632652):
   Writefp.write(str(r.sample(s.ascii_letters,5)))
Writefp.close()
