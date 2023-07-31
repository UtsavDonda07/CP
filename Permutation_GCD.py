from pickle import TRUE


t=int(input())
for _ in range(t):
    n,x=map(int,input().split())
    if n>x :
        print(-1)
    else:
        f1=x-1*(n-1)
        if(f1<=0):
            f1=1
        f4=n
        ls=[]
        ls.insert(0,f1)
        for i in range(1,n-1):
            ls.insert(i,i)
        for j in range(1,n+1):
            if j not in ls:
                ls.append(j)
        for k in range(n):
            print(ls[k],end=' ')
        print()