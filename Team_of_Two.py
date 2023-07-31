# t=int(input())
n=int(input())

rows, cols = (n, 6)
arr = [[0]*cols]*rows
for i in range(n):
    temp=int(input())
    arr[i][0]=temp
    for j in range(1,temp):
        arr[i][j]=int(input().split(''))
for i in range(n):
    temp=arr[i][0]
    for j in range(temp):
        print(arr[i][j])

print(arr)
