def entrada():
    j = list()
    j = input().split()
    for i, k in enumerate(j):
        j[i] = int(k)
    return j

while (True):
    ab = entrada()
    soma = ab[0] + ab[1]
    contador = 1

    while (soma >= 10):
        soma /= 10
        contador += 1

    print(contador)