# Trapping Rainwater Problem

def trappingWater(arr,n):
        left=0
        right=n-1
        maxleft=arr[left]
        maxright=arr[right]
        water=0
        while left < right:
            if arr[left]<=arr[right]:
                left+=1
                maxleft = max(maxleft,arr[left])
                water+=maxleft-arr[left]
            else:
                right-=1
                maxright = max(maxright,arr[right])
                water+=maxright-arr[right]
        return water

print("Enter the heights of the tower: ")
arr = [int(i) for i in input().split()]
n = len(arr)
water = trappingWater(arr,n)
print("Water stored: {}".format(water))