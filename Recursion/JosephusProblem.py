#Josephus Problem
'''
There are n people standing in a circle waiting to be executed. The counting out begins at some 
point in the circle and proceeds around the circle in a fixed direction. In each step, a certain 
number of people are skipped and the next person is executed. The elimination proceeds around the 
circle (which is becoming smaller and smaller as the executed people are removed), until only the 
last person remains, who is given freedom. 
Given the total number of persons n and a number k which indicates that k-1 persons are skipped and 
kth person is killed in circle.

Sample Input: 7 3
Sample Output: 4

'''
def josephus(n,k):
  if n==1:
    return 1
  return (josephus(n-1,k)+k-1)%n +1

n,k = [int(i) for i in input("Enter the values for n and k: ").split()]
pos = josephus(n,k)
print("Safest position: {}".format(pos))