# class Solution:
#     def duplicates(self, arr, n): 
for _ in range(int(input())):
    n=int(input())   
    arr = list(map(int, input().strip().split()))  
    arr.sort()
    # print(arr)
    a=[]
    for i in range(len(arr)-1):
        if arr[i] == arr[i+1] :
            a.append(arr[i])
        if i<n-2 and arr[i] == arr[i+1] and arr[i] == arr[i+2]:
            a.remove(arr[i])
            i=i+1
    if len(a)==0:
        print(-1)
    else:
        print(*a)
