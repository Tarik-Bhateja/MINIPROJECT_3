import time
result=[]
li=["E:\SUMMERSCHOOL\PROJECTS\PERFORMANCE COMPARISON\TEXTFILES\p.txt","E:\SUMMERSCHOOL\PROJECTS\PERFORMANCE COMPARISON\TEXTFILES\pp.txt","E:\SUMMERSCHOOL\PROJECTS\PERFORMANCE COMPARISON\TEXTFILES\ppp.txt","E:\SUMMERSCHOOL\PROJECTS\PERFORMANCE COMPARISON\TEXTFILES\pppp.txt"]
for i in range(len(li)):
 begin = time.time()
 Readfp=open(li[i])		# Open the file in reading mode
 Writefp=open('E:\SUMMERSCHOOL\PROJECTS\PERFORMANCE COMPARISON\Programs\python.txt','w')	# Open the file in writing mode
 for line in Readfp: 
  Writefp.write(line.upper())	
 Writefp.close()
 Readfp.close()
 end = time.time()
 calc=end-begin
 result.append(calc)
print(result)
#final list result

