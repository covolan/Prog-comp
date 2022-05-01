primes = []
k = 2
cont = 0


n, req, reqc = int(input()), list(), list()

for i in range(0, n):
    req.append(int(input()))

reqc = req.copy()
reqc.sort(reverse=True)

while(cont < reqc[0]):
    nprime = 0
    for j in range(2, int(k ** 0.5) + 1):
        if k % j == 0:
            nprime = 1
    if nprime == 0:
        primes.append(k)
        cont += 1
    k += 1

for i in range(0, n):
    print(primes[req[i] - 1])

