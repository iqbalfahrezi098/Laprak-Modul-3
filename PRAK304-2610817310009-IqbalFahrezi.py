a = int(input())

if a >= 100:
    print("Anda Menginput Melebihi Limit Bilangan")
elif a >= 20 or a == 10:
    print("Puluhan")
elif a >= 11:
    print("Belasan")
elif a >= 1:
    print("Satuan")
else:
    print("Nol")