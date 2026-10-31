angka = list(map(int, input().split()))

if len(angka) == 2:
    a, b = angka
    if a > b:
        a, b = b, a
    print(a, b)
else:
    a, b, c = angka
    if a > b:
        a, b = b, a
    if b > c:
        b, c = c, b
    if a > b:
        a, b = b, a
    print(a, b, c)