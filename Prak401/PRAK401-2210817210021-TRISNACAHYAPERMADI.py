a, s = input().split()
a= int (a)
s= (s)
for i in range (1, 51) :
    if i % a == 0 :
        print (s , end=" ")
    else :
        print (i , end=" ")
