k, l = int(input()), int(input())
contador = 1
maxl = 1

for n in range(k, l):
    while n != 1:
        if n == 0:
            break
        if n % 2 == 1:
            n = 3 * n + 1
        else:
            n /= 2
        contador += 1
    if contador > maxl:
        maxl = contador
    contador = 1

print(k, l, maxl)