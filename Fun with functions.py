lst=[]
digit=0
n=int(input())
for i in range(n):
    num=int(input())
    while num!=0:
        num=num/10
        digit=digit+1
    lst.append(digit)
for i in range(n) :
    print(lst[i])    
    
