for _ in range(int(input())):
    n=int(input())   
    arr = list(map(int, input().split()))  
    k=int(input())   
    arr2 = list(map(int, input().split()))
    ls=arr+arr2
    ls=list(dict.fromkeys(ls))
    print(*ls)
 
    