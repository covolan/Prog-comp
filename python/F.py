
from time import sleep

s1, s2 = 0, 0
cont = cont1 = 0
lucky = 0

for i in range(0, 100):
    s1 = 0
    if i % 10 == 0:
        cont1 = 0
    if i >= 10:
        s1 = (i // 10) + cont1
        cont1 += 1
    # elif i >= 100:
    else:
        s1 = i
        cont += 1
    for j in range(0, 100):
        # print(i, j)
        if s1 == s2:
            lucky += 1
        s2 = 0
        if j % 10 == 0:
            cont = 0
        if j >= 10:
            s2 = (j // 10) + cont
            cont += 1
        else:
            s2 = j
            cont += 1
        # print(i, j, s1, s2)
        # sleep(0.5)

print (lucky)

