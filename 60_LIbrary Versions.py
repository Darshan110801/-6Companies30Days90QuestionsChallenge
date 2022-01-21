# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.
li = input().split()
l = len(li)
for i in range(l):
    a = li[i];
    a = a.split('.')
    for j in range(len(a)-1,-1,-1):
        if a[j] !='' and a[j] !='0':
            break
    a = a[:j+1]
    li[i]=a
li.sort()
for i in li:
    print('.'.join(i),end ='')
print()
