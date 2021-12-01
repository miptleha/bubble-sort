import time

n = 10000
a = []
for i in range(0, n):
    a.append(n - i)
#for i in range(0, n):
#    print(a[i], " ")
#print();
start = time.perf_counter()
for i in range(0, n - 1):
    for j in range(i + 1, n):
        if  a[i] > a[j]:
            (a[i], a[j]) = (a[j], a[i])
end = time.perf_counter()
#for i in range(0, n):
#    print(a[i], " ")

print("{:.5f}".format(end - start), "seconds")