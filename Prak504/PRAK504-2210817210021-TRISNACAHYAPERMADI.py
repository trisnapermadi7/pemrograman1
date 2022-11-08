def reversed (reverse):
    n = 0
    while (reverse) :
        n = n*10 
        n = n + reverse%10
        reverse //=10
    return n
A, B = input().split()
A = reversed (int (A))
B = reversed (int (B))
C = A + B
print (reversed(C))
