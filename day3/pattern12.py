# 1       1
# 12     21
# 123   321
# 12344321
for i in range (1,5):
    for j in range (1,i+1):
        print (j, end = "")
    
    for j in range (1,9-(2*i)):
        print (" ",end ="")
    
    for j in range (0,i):
        print (i-j,end = "")
    print()
