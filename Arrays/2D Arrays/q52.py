# Given a N x N matrix, where every row and column is sorted in non-decreasing order.
# Find the kth smallest element in the matrix.

def kthSmallest(mat, n, k): 
    # Your code goes here
    temp = []
    for i in range(n):
        temp.extend(mat[i])
    
    temp.sort()
    return temp[k-1]

n = int(input("Enter the length of square matrix: "))
mat=[]
print("Enter the nxn matrix")
for i in range(n):
    temp = [int(j) for j in input().split()]
    mat.append(temp)

k = int(input("Enter the kth smallest position to be found: "))
print(kthSmallest(mat,n,k))