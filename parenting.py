#prac 3

A=int(input()



def getkey0(item):

    return item[0]

def getkey2(item):

    return item[2]



l1=[]

l2=[]

for i in range(A):

    num=int(input())

    l1.clear()
    for x in range(num):
        l2=[]
        l2=[int(a) for a in input().split(" ")]

        l2.append(x)

        l1.append(l2)

    l1.sort(key=getkey0)

    cs=-1

    js=-1

    flag=True

    for a in l1:

        ti=a[0]

        ts=a[1]

        if cs==-1:

            cs=ts

            a.append('C')

        elif ti>=cs:

            cs=ts

            a.append('C')

        elif ti<cs and ti>=js:

            js=ts

            a.append('J')

        elif ti<cs and ti<js:

            flag=False

            break

    if flag==False:

        str="IMPOSSIBLE"

    else:

        str=""

        l1.sort(key=getkey2)

        str=str.join([a[3] for a in l1])

    print("case #{}: {}".format(i+1,str))
