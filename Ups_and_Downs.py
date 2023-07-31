t=int(input())
for _ in range(t):
    n=int(input())
    ls=list(map(int,input().split()))
    ls.sort()
    if(n%2==0):
        j=ls[n//2]
        for i in range(n):
            if(i%2==0):
                print(ls[i])
            else:
                print(ls[j])
                j=j+1
