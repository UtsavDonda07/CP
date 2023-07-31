for _ in range(int(input())):
    n=int(input())
    arr = list(map(int, input().strip().split()))
    for i in range(n):
        if(arr[i] in arr):
            arr.remove(arr[i]) 
    print(arr)

