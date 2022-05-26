'''l=["1","2","3","4","5"]
count=1
def xyz():
    global count
    if count==5:
        print ("end of the loop",count)
        count=1
    else:
        print ("loops going well",count)
        count=count+1
x=True
while x:
    y=input("type")
    if y=="q":
        x=False
    else:
        print(xyz())'''

from time import sleep
x=int(input("secs:"))
y=True
while y:
    print(x) ; sleep(1)
    x=x-1
    if x==-1:
        y=False
    else:
        continue