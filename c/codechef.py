# n=int(input())
# maxlead1=0
# maxlead2=0
# n1=0
# n2=0
# for i in range(n):
#     a=input().split()
#     n1=n1+int(a[0])
#     n2=n2+int(a[1])
#     if n1>n2:
#         if (n1-n2)>maxlead1:
#             maxlead1=n1-n2
#     if n2>n1:
#         if (n2-n1)>maxlead2:
#             maxlead2=n2-n1

# if n1>n2:
#     print("1",maxlead1)
# if n2>n1:
#     print("2",maxlead2)




# n=int(input())
# maxlead=0
# n1=0
# n2=0
# for i in range(n):
#     a=input().split()
#     n1=n1+int(a[0])
#     n2=n2+int(a[1])
#     if abs(n1-n2)>maxlead:
#         maxlead=abs(n1-n2)

# if n1>n2:
#     print(1,maxlead)
# elif if n2>n1:
#     print(2,maxlead)




# n=int(input())
# maxm=0
# sum1=0
# sum2=0
# for i in range(n):
#     x,y= map(int,input().split())
#     sum1=sum1+x
#     sum2=sum2+y
#     if sum1-sum2>0:
#         l=sum1-sum2
#         w=1
#     elif sum1-sum2<0:
#         l=sum2-sum1
#         w=2
#     if l>maxm:
#         maxm=l
#         v=w
# print(v,maxm)

# p=int(input())
# for i in range(5):
#     print(i,end='')
i=0
l=[]
for i in range(8):
    l.append(i)
    print(i,end=',')
print(",".join(l))