# **********
# ****  ****
# ***    ***
# **      **
# *        *
# *        *
# **      **
# ***    ***
# ****  ****
# **********

for i in range (1,11):
    if i<=5:
        for j in range (1,7-i):
            print ("*",end = "")
    else:
        for j in range (0,i-5):
            print ("*",end = "")
    if i<=5:

        for j in range (0,(2*i)-2):
            print (" ", end = "")
    else :
        for j in range (0, (10-i)*2):
            print (" ",end="")
    if i<=5:
        for j in range (1,7-i):
            print ("*",end = "")
    else:
        for j in range (0,i-5):
            print ("*",end = "")
    print ()
                 
    
