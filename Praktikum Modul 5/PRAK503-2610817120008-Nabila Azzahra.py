def maksimal(a, b):
    if a > b:
        return a
    return b


def minimal(a, b):
    if a < b:
        return a
    return b


for i in range(3):
    n = int(input())
    bilangan = list(map(int, input().split()))

    maks = -100000
    minim = 100000

    for j in range(n):
        nilai = bilangan[j]
        maks = maksimal(maks, nilai)
        minim = minimal(minim, nilai)

    print(maks, minim)
    print()