from copy import copy

x=9
m=[]
n=[]

#getting the initial list to work on 
for i in range (x,0,-1):
    n.append(i)
for i in range (2,x+1):
    n.append(i)
m=copy(n)

#making chnages to n and estending to the list
for i in range(1,x):
    if i==1:
        n[x-1]=i+1
        m.extend(n)
    else:
        n[x-1]=i+1
        for j in range(1,i):
            n[x-1-j]=i+1
            n[-(x-j)]=i+1
        m.extend(n)

y=x*((2*x)-1)
#printing from the list reverse
for i in range(0,y):
    if (i+1)%((2*x)-1)==0:
        print(m[-(i+1)],end="\n")
    else:
        print(m[-(i+1)],end=" ")

#printing from the list
for i in range((2*x)-1,y):
    if (i+1)%((2*x)-1)==0:
        print(m[i],end="\n")
    else:
        print(m[i],end=" ")

