X = 0
Y = 0
huruf1 = list(input (""))
huruf2 = list(input (""))
pjg1 = len(huruf1)
pjg2 = len(huruf2)
if pjg1 != pjg2:
    print ("Panjang kalimat berbeda, pesan palsu")
else :
    for i in range (pjg1):
        if " " in huruf1[i] and " " in huruf2[i]:
            continue
        elif huruf1 [i] == huruf2[i]:
            print("*", end="")
            X += 1
        else:
            print("#", end="")
            Y += 1
    print("\n* = ", X)
    print("# = ", Y)
    if X >= Y:
        print("Pesan Asli")
    else: 
        print("Pesan Palsu")     
