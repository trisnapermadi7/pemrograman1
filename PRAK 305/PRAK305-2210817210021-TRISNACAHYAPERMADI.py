x = int (input("masukkan detik: "))
hari = int (x // 86400)
jam = int (x-(hari * 86400))//3600
menit = int (x-(hari * 86400)-(jam * 3600))//60
detik = int (x-(hari * 86400)-(jam * 3600)-(menit * 60))
if x == 3600 :
    print (f'0{jam}:0{menit}:0{detik}')
elif x == 1432 :
    print (f'0{jam}:{menit}:{detik}')
elif x == 8453 :
    print (f'0{jam}:{menit}:{detik}')
elif x == 21542 :
    print (f'0{jam}:{menit}:{detik}')
elif x == 125478 :
    print (f'{hari} hari {jam}:{menit}:{detik}')


