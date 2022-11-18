b1, b2 = map(int, input().split())
if b1 != b2 :
    print ("jumlah tidak sama")
else :
    bil1 = list(map (int, input().split()))
    bil2 = list(map (int, input().split()))
    m1 = []
    m2 = []
    x = 0
    m1.append(bil1 [x : x + b1])
    m2.append(bil2 [x : x + b2])
    for i in range (0, b1):
        print(m1[0][i] * m2[0][i], end=" ")
