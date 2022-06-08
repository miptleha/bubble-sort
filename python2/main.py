import time

def getMaxSubSum(a):
    s = 0
    s1 = s
    for i in range(0, n):
        s += a[i]
        s1 = max(s1, s)
        if (s < 0):
            s = 0;
    
    return s1

n = 10000
a = []
for i in range(0, n):
    a.append(pow(-1, i) * i)
#for i in range(0, n):
#    print(a[i], " ")
#print();
start = time.perf_counter()
res = 0;
for i in range(0, n):
    a[0] += 1
    res += getMaxSubSum(a)
#    print(res, " ")
end = time.perf_counter()

print("{:.5f}".format(end - start), "seconds")