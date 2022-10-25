print ("sebuah baris berisi satu buah bilangan cacah dan batas maksimal 99. (a>=0<100)")
print ("sebuah baris berisi subuah bilangan cacah yang merupakan ejaan dari bilangan tersebut")
X= int (input ("masukkan angka :"))
if X < 10 and X > 0 :
    print ("Satuan")
elif X >= 10 and X < 20:
    print ("Belasan")
elif X>=10 and X <= 99:
    print ("Puluhan")
elif X == 0:
    print ("Nol")
elif X > 99:
    print ("Anda Menginput Melebihi Limit Bilangan")

