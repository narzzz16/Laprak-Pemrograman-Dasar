def hitung():
    data = []
    while len(data) < 6:
        data += list(map(float, input().split()))

    a, b, i, j, x, y = data[:6]
    hasil = ((a - b) * i / j) - (x + y)
    
    print(f"Output:")
    print(f"{hasil:.3f}")


hitung()
hitung()