nilai_pertama, nilai_kedua = input().split()
nilai_pertama = int (nilai_pertama)
nilai_kedua = int (nilai_kedua)
x = nilai_pertama
y = nilai_kedua
print (f"{nilai_pertama} {nilai_kedua}", end= " - ")
if nilai_pertama > nilai_kedua :
    jarak = nilai_pertama - nilai_kedua
    for i in range (jarak - 1) :
        nilai_pertama -=1
        nilai_kedua +=1
        print (f" {nilai_pertama} {nilai_kedua}", end= " - ")
elif nilai_pertama < nilai_kedua :
    jarak = nilai_kedua - nilai_pertama
    for i in range (jarak - 1) :
        nilai_pertama +=1
        nilai_kedua -=1
        print (f"{nilai_pertama} {nilai_kedua}", end= " - ")
print (f"{y} {x}")
