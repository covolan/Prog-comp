employees = list()
tmp = 0

for i in range(0, int(input())):
    employees = input().split()
    for j, k in enumerate(employees):
        employees[j] = int(k)
    tmp = employees.index(min(employees))
    employees[tmp] = 0
    tmp = employees.index(max(employees))
    employees[tmp] = 0
    for j in employees:
        if j != 0:
            print(f"Case {i}: {j}")