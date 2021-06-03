# Sort all the elements of the matrix (row and column wise)
def sortedMatrix(N, Mat):
    # code here
    temp = []
    for i in range(N):
        for j in range(N):
            temp.append(Mat[i][j])
    temp.sort()
    k = 0
    for i in range(N):
        for j in range(N):
            Mat[i][j] = temp[k]
            k += 1
    return Mat


Matrix = []
N = int(input("Enter the size of the matrix: "))
print("Enter the elements of the matrix")
for i in range(N):
    temp = [int(i) for i in input().split()]
    Matrix.append(temp)

SortedMatrix = sortedMatrix(N, Matrix)
for i in range(N):
    for j in range(N):
        print(SortedMatrix[i][j], end=" ")
    print()
