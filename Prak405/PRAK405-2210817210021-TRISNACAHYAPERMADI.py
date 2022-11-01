input_pertama,input_kedua = input ().split()
input_pertama = int (input_pertama)
input_kedua = int (input_kedua)
list_input = range (1, input_pertama +1)
data_list = list (list_input)
hasil_akhir = 0
for i in data_list :
    hasil = 0 
    hasil1 = 0
    for n in reversed ( range (i)) :
        if n == 0 :
            print (f"({n+1} * {input_kedua})", end="")
            hasil1 = (n+1) * input_kedua
            hasil += hasil1
        else :
            print (f"({n+1} * {input_kedua}) + ", end="")
            hasil1 = (n+1) * input_kedua
            hasil += hasil1
    print (f" = {hasil}")
    hasil_akhir += hasil
print (hasil_akhir)
    