for i in range(5):
    a = int(input())

    if a >= 100:
        print("Anda Menginput Melebihi Limit Bilangan")
    elif a == 0:
        print("Nol")
    elif a < 10:
        print("Satuan")
    elif a < 20:
        print("Belasan")
    else:
        print("Puluhan")
        
    print()