t=int(input())

for _ in range(t):
    n=int(input())
    ls=list(map(int,input().split()))
    m1=max(ls)
    ls.remove(m1)
    m2=max(ls)
    print(m1+m2)
