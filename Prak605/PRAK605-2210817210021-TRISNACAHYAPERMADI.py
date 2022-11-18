x = int(input())
matriks1 = []; matriks2 = []; matriksAB = []
print ("Matriks A")
for i in range (x):
    y = list(map(int, input().split()))
    matriks1.append(y)
print ("Matriks B")
for i in range (x):
    y = list(map(int, input().split()))
    matriks2.append(y)
print ("Matriks AXB")
for i in range (x):
    matriksAB.append([])
    for j in range (x):
        a = 0
        for y in range (x):
            a = a + matriks1[i][y] * matriks2[y][j]
        matriksAB[i].append(a)
for input in matriksAB:
    for y in input:
        print(y, end=" ")
    print()
