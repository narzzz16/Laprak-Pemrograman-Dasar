#PROGRAM IDENTITAS MAHASISWA

Nama = "Nabila Azzahra"
NIM = "2610817120008"

for i in range(6):
    if i == 0 or i == 5:
        print("#" * 32)
    elif i == 2:
        print(f"#{Nama:^30}#")
    elif i == 3:
        print(f"#{NIM:^30}#")
    else:
        print(f"#{' ':^30}#")
