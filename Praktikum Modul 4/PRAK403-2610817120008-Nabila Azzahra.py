a, b = map(int, input("Masukkan dua angka: ").split())

if a < b:
    langkah = 1
else:
    langkah = -1

for i in range(abs(b - a) + 1):
    angka1 = a + (i * langkah)
    angka2 = b - (i * langkah)

    if i > 0:
        print("-", end=" ")

    print(angka1, angka2, end=" ")