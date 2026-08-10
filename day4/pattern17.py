#    A
#   ABA
#  ABCBA
# ABCDCBA

for i in range (0,5):
    for j in range (0,5-i):
        print (" ",end = "")
    for j in range (0,i):
        print (chr (65+j),end = "")
    for j in range (1,i):
        print (chr (65-j+i-1),end = "")
    print ()
