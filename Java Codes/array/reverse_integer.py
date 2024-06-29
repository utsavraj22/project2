def rev_num(x):
   rev=0 
   while(x>0):
      a=x%10
      rev=rev*10+a
      x=int(x/10)
   return rev
num=int(input("Enter the number:\n"))
num=abs(num)
print("Number after reversing : ",rev_num(num))