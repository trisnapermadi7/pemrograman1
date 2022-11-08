def maksimal (x, y) :
    if x > y :
        return x
    else :
        return y
def minimal (x, y) :
    if x < y :
        return x
    else :
        return y
batas = 0; maks = -100000; minim = 100000
bilangan = int (input())
while batas < bilangan :
    nilai = map(int, input().split())
    for item in nilai :
        maks = maksimal(maks, item)
        minim = minimal(minim, item)
        batas += 1
print (maks, minim)
    