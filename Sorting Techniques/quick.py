def quickSort(arr,low,high):
    while low<high:
        partindx = partition(arr,low,high)
        quickSort(arr,low,partindx-1)
        quickSort(arr,partindx+1,high)

def partition(arr,low,high):
    pivot = arr[low]
    i = low
    j = high
    while i<j:
        while arr[i]<=pivot and i<len(arr):
            i+=1
        
        while arr[j]>pivot:
            j-=1
        
        if i<j:
            t = arr[i]
            arr[i] = arr[j]
            arr[j] = t
    t = arr[low]
    arr[low] = arr[j]
    arr[j] = t

    return j

print("Enter an unsorted array: ")
arr = [int(i) for i in input().split()]
quickSort(arr,0,len(arr)-1)
print("Sorted array: ")
for i in range(len(arr)):
    print(arr[i], end=" ")