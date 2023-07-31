from typing import Tuple


t=int(input())
for _ in range(t):
    n=int(input())
    ls=list(map(int,input().split()))
    ans=[]
    count=0
    for i in range(len(ls)):
        for j in range(i,len(ls)):
            if ls[i]-ls[j] == 0 :
                count=count+1
        ans.append(count)
        count = 0
    ans.sort(reverse=True)
    if(ans[0]!=ans[1]):
        print("YES")
    else:
        print("NO")