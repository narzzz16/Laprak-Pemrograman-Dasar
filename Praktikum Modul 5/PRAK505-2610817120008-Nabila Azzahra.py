def Biodata(tahunLahir, nama, asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahunLahir

    print("Perkenalkan Nama Saya :", nama)
    print("Umur Saya :", umur)
    print("Saya Adalah Angkatan :", tahun_sekarang)
    print("Asal Saya dari :", asal)


for i in range(2):
    tahunLahir = int(input())
    Namaku = input()
    Asal = input()

    Biodata(tahunLahir, Namaku, Asal)
    print()