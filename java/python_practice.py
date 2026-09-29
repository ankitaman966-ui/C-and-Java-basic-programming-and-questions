# Palindrome number checking

'''n= int(input("enter the number to check it is palindrome or not=="))
m=n
c=0
while n:
    rem=n%10
    c=c*10+rem
    n=n//10
if c==m:
    print("the given no.=",m ,"is palindrome number")
else:
    print("the given no. is not palindrome no,")'''


# Armstrong number verify or checking

'''n= int(input("enter a number to check that it is armstrong or not =="))
sum=0
m= n
while n:
    rem = n % 10
    sum=sum+rem**3
    n=n//10
print(sum)
if sum==m:
    print("it is armstrong no.")
else:
    print("it is not amrstrong no.")'''

# Calendar 

'''week= ["monday","tuesday","wednesday","thursday","friday","saturday","sunday"]
today= input("enter the current day==")
n=week.index(today)
time= int(input("enter the number to which find the day=="))
n= n+(time%7)
day= week[n]
print(" today is ", today,"after the",time,"days the day is",day)'''



