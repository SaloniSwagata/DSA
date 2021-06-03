#Rotate a matrix by 90 degrees in anticlockwise direction

def rotateMatrix(arr, n):
    # code here
    for i in range(n):
        for j in range(i, n):
            t = arr[i][j]
            arr[i][j] = arr[j][i]
            arr[j][i] = t

    for i in range(n):
        j = 0
        k = n - 1
        while j < k:
            t = arr[j][i]
            arr[j][i] = arr[k][i]
            arr[k][i] = t
            j += 1
            k -= 1
    return arr


N = int(input("Enter the size of the matrix: "))
Matrix = []
for i in range(N):
    temp = [int(i) for i in input().split()]
    Matrix.append(temp)

print("Original Matrix:")
for i in range(N):
    for j in range(N):
        print(Matrix[i][j], end=" ")
    print()

Matrix = rotateMatrix(Matrix, N)

print("Matrix after rotation:")
for i in range(N):
    for j in range(N):
        print(Matrix[i][j], end=" ")
    print()