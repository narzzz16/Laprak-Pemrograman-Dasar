def hitung():
    data = []
    while len(data) < 2:
        data += list(map(float, input().split()))

    r, t = data[:2]

    pi = 22 / 7
    volume = pi * r * r * t
    luas = 2 * pi * r * (r + t)
    keliling = 2 * pi * r

    print("Output:")
    print(f"Volume = {volume:.2f}")
    print(f"Luas = {luas:.2f}")
    print(f"Keliling = {keliling:.2f}")


hitung()
hitung()