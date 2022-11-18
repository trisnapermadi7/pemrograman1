k  =int (input ())
bil = list (map (int, input().split()))
matriks = []
x = 0
for i in range (0, k):
    matriks.append(bil [x : x + k])
for i in range (0, k):
    print (matriks[0][i] * (i + 1), end= " ")