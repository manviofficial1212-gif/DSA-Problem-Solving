# * * * * * * * * *
#   * * * * * * *
#     * * * * *
#       * * *
#         *
for i in range(1,6):
    for j in range (0,i):
        print (" ", end = " ")
    for j in range (1,2*(6-i)):
        print ("*", end = " ")
    print()