# E
# D E
# C D E
# B C D E
# A B C D E
for i in range (1,6):
    for j in range (1,i+1):
        print (chr (68+j-i+1),end = " ")
    print ()