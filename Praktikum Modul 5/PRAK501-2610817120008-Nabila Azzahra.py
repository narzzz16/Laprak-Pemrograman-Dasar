def MaxBilangan(a, b, c, d):
    return max(a, b, c, d)


for i in range(3):
    a, b, c, d = map(int, input().split())
    hasil = MaxBilangan(a, b, c, d)
    print(hasil)
    print()