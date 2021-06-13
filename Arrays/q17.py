# Merge two arrays without using extra space

def nextGap(gap):
 
        if (gap <= 1):
            return 0
        return (gap // 2) + (gap % 2)
 
    
def merge(arr1, arr2, n, m): 
    # code here
    gap = n + m
    gap = nextGap(gap)
    while gap > 0:
        
        i = 0
        while i + gap < n:
            if (arr1[i] > arr1[i + gap]):
                arr1[i], arr1[i + gap] = arr1[i + gap], arr1[i]
 
            i += 1

        j = gap - n if gap > n else 0
        while i < n and j < m:
            if (arr1[i] > arr2[j]):
                arr1[i], arr2[j] = arr2[j], arr1[i]
 
            i += 1
            j += 1
 
        if (j < m):

            j = 0
            while j + gap < m:
                if (arr2[j] > arr2[j + gap]):
                    arr2[j], arr2[j + gap] = arr2[j + gap], arr2[j]
 
                j += 1
 
        gap = nextGap(gap)

print("Enter the first array: ")
A = [int(i) for i in input().split()]
print("Enter the second array: ")
B = [int(i) for i in input().split()]

merge(A,B,len(A),len(B))
for i in A:
    print(i, end=" ")

for j in B:
    print(j, end=" ")