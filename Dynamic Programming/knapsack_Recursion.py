#0-1 Knapsack Using Recursion

def knapsack(wt,val,w,n):
    if (w==0 or n==0):
        return 0
    else:
        if wt[n]>w:
            return knapsack(wt,val,w,n-1)
        else:
            return max(knapsack(wt,val,w,n-1),val[n]+knapsack(wt,val,w-wt[n],n-1))

wt=[]
val=[]
w=int(input("Enter the weight of knapsack: "))
print("Enter the weights available")
wt=[int(i) for i in input().split()]
print("Enter the corresponding profits")
val=[int(i) for i in input().split()]
p = knapsack(wt,val,w,len(wt)-1)
print("Maximum Profit: ",p)