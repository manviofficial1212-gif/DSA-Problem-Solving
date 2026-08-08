# 1
# 0 1
# 1 0 1
# 0 1 0 1
# 1 0 1 0 1
for i in range (1,6):
    for j in range (0,i):
        if (i+j)%2==1:
            print ("1",end = " ")
        else :
            print ("0",end = " ")
    print () 