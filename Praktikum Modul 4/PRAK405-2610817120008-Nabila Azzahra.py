n, kelipatan = map(int, input().split())

total = 0

for i in range(1, n + 1):
    jumlah = 0

    for j in range(i, 0, -1):
        print(f"({j} * {kelipatan})", end="")

        jumlah += j * kelipatan

        if j > 1:
            print(" + ", end="")

    print(f" = {jumlah}")
    total += jumlah

print(total)