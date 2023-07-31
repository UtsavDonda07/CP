t=int(input())
for _ in range(t):
    n=int(input())
    ls=list(map(int,input().split()))
    result = [] 
    for i in ls:
        if i not in result:
           result.append(i)
    for i in range(len(result)):