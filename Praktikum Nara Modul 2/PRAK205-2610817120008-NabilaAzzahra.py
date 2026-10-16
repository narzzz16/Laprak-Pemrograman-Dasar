import math

def hitung():
    data = []
    while len(data) < 2:
        data += list(map(float, input().split()))

    A, B = data[:2]

    alas = math.sqrt(B ** 2 - A ** 2)
    tinggi = A

    keliling = alas + tinggi + B
    luas = alas * tinggi / 2

    print("Output:")
    print(f"Alas = {alas:.0f} cm")
    print(f"Tinggi = {tinggi:.0f} cm")
    print(f"Keliling = {keliling:.0f} cm")
    print(f"Luas = {luas:.0f} cm^2")


hitung()
hitung()