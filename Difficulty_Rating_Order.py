import math

for _ in range(int(input())):
    n = int(input())
    ls=list(map(int,input().split()))
    new=sorted(ls)
    if(ls==new):
        print('Yes')
    else:
        print('No')