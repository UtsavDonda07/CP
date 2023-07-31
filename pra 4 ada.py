# python


# list

#create list
ls = [1,2,3,4,5]
ls2 = [6,7,8]
#print data type
print(type(ls))
print(ls)
#reverse list
ls.reverse()
print(ls)
#index base access element
print(ls[-2])
ls[0]=123
print(ls[2:])
#list append element
ls.append(232)
print(ls)
#join or merge two list
ls=ls+ls2
print(ls)


#tuples


#create tuple
tp = (5,4,3,2,1)
tp2 = (6,7,8)

#print data type
print(type(tp))
print(tp)

# #index base access element
print(tp[-2])
print(tp[2:])

#tuple append element
print(tp)

#join or merge two tuple
tp=tp+tp2
print(tp)

#delete tuple
del tp2
# print(tp2)


#set

#create set

set={1,2,3,2,1}
set2={1,4,5}
# print set and remove duplicates
print(set)

#join or merge two set
set=set+set2
print(set)

# Dictionary
dict = {
  "fname": "abc",
  "lname": "def",
  "age": 19
}
