data = []

for i in range(3):
    a, b = map(int, input().split())
    data.append((a, b))

print()

for a, b in data:
    if a <= b:
        print(a, b)
    else:
        print(b, a)