#Printing numbers from 1 to n
'''
Sample Input - 10
Sample Output - 1 2 3 4 5 6 7 8 9 10
'''

def printnum(num):
  if num==1:
    print(1,end=" ")
    return
  printnum(num-1)
  print(num, end= " ")
  return

num = int(input("Enter a number: "))
printnum(num)