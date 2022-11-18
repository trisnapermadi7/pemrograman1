k, b =map (int, input().split())
bil = list (map (int, input().split()))
matriks = []
x = 0
for i in range (0, k):
    matriks.append(bil[x : x + b])
    x = x + b
for i in range (0, k) :
    for j in range (0, b):
        print (matriks[i][j], end= " ")
    print ()