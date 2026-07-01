n=int(input())
a= list(range(n))
for i in range(n):
    a[i]=(i+1)*n
print(a)
print(a[n-1])
