batas = int(input("Masukkan batas maksimal: "))

print("Bilangan ganjil:")
for i in range(1, batas + 1, 2):
    print(i, end=" ")

print()

print("Bilangan genap:")
if batas % 2 == 0:
    mulai = batas
else:
    mulai = batas - 1

for i in range(mulai, 1, -2):
    print(i, end=" ")