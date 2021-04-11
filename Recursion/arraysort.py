#Sorting array using recursion
'''
Sample Input - 2 3 5 1 9 6 7
Sample Output - 1 2 3 5 6 7 9
'''

def sortarray(arr):
  if len(arr)==1:
    return
  val = arr[-1]
  arr.pop()
  sortarray(arr)
  insertarray(arr,val)
  return
def insertarray(arr,val):
  if len(arr)==0 or arr[-1]<=val:
    arr.append(val)
    return
  val1=arr[-1]
  arr.pop()
  insertarray(arr,val)
  arr.append(val1)
  return

A = [int(i) for i in input("Enter the elements of array: ").split()]
sortarray(A)
print("Sorted array: ", A)