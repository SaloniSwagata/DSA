#Tower Of Hanoi
'''
1. Only 1 disc can be moved at a time
2. No larger disc can be placed above the smaller disc
3. There are 3 poles given, source, destination and helper

Printing the steps to move n discs from source to destination
'''

def toh(n,S, D, H):
  if n==1:
    print("Move disc {} from {} to {}".format(n,S,D))
    return
  toh(n-1,S,H,D) # Moving n-1 discs from source to helper
  print("Move disc {} from {} to {}".format(n,S,D)) # Moving the nth disc from source to destination
  toh(n-1,H,D,S) # Moving n-1 discs from helper to destination

n = int(input("Enter the number of discs: "))
toh(n,"source","destination","helper")