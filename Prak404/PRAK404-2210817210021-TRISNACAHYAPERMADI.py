from pickle import TRUE
while (TRUE) :
    print ("\nPilih Porgram")
    print ("1. Penjumlahan")
    print ("2. Pengurangan")
    print ("3. Perkalian")
    print ("4. Pembagian")
    print ("5. Exit")
    i = float ( input ("Masukkan pilihan : "))
    if i == 1 :
        x = float (input ("Masukkan Nilai Pertama : "))
        y = float (input ("Masukkan Nilai kedua : "))
        print ("Hasil Pertambahan antara ", format (x, '.2f'), " dengan ", format (y, '.2f'), "adalah",format (x + y, '.2f'))
    elif i == 2 :
        x = float (input ("Masukkan Nilai Pertama : "))
        y = float (input ("Masukkan Nilai kedua : "))
        print ("Hasil Pengurangan antara ", format (x, '.2f'), " dengan ", format (y, '.2f'), "adalah",format (x - y, '.2f'))
    elif i == 3 :
        x = float (input ("Masukkan Nilai Pertama :"))
        y = float (input ("Masukkan Nilai kedua :"))
        print ("Hasil Perkalian antara ", format (x, '.2f'), " dengan ", format (y, '.2f'), "adalah",format (x * y, '.2f'))
    elif i == 4 :
        x = float (input ("Masukkan Nilai Pertama :"))
        y = float (input ("Masukkan Nilai kedua :"))
        print ("Hasil Pembagian antara ", format (x, '.2f'), " dengan ", format (y, '.2f'), "adalah", format (x / y, '.2f'))
    elif i >= 6 :
        print ("Input anda salah, silahkan coba lagi")
    else :
        break 
print ("Terimakasih, telah menggunakan kalkulator Trisna Cahya Permadi")

