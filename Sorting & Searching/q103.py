# Search in a sorted rotated array

def search(arr,k,n):
    low = 0
    high = n-1
    while low<=high:
        mid = (low+high)//2
        if arr[mid]==k:
            return mid
        elif arr[low]<=arr[mid]:
            if k>=arr[low] and k<arr[mid]:
                high = mid-1
            else:
                low = mid+1
        else:
            if k>arr[mid] and k<=arr[high]:
                low = mid+1
            else:
                high = mid -1
    return -1

print("Enter a sorted rotated array: ")
arr = [int(i) for i in input().split()]
target = int(input("Enter the number to be searched: "))
result = search(arr,target,len(arr))

if result==-1:
    print("Not found")
else:
    print("Number found at position",result+1)