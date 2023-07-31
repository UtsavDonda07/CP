import math

k = int(input())
l = int(input())
m = int(input())
n = int(input())
d = int(input())
a=math.lcm(k,l,m,n)
b=math.lcm(m,n)
print(a)
print(b)
# ls=[]
# sum=k+l+m+n
# if(sum>d):
#     print(0)
# else:
#     for i in range(d):
#         ls.append(i)
#     for i in range(d):
#         if(i%k==0 or i%l==0 or i%m==0 or i%n==0):
#             ls.remove(i)
#     print(d-len(ls))
