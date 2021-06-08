# You are given an array prices where prices[i] is the price of a given stock on the ith day.

# You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

# Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

def maxProfit(prices):
    maxp =0
    auxarr = [0]*len(prices)
    tempmax=0
    for i in range(len(prices)-1,-1,-1):
        if i== len(prices)-1:
            auxarr[i]=prices[i]
        else:
            auxarr[i]=max(prices[i],tempmax)
        tempmax = auxarr[i]
    
    for i in range(len(prices)):
        if prices[i]<auxarr[i]:
            maxp = max(auxarr[i]-prices[i],maxp)
    return maxp

print("Enter the prices: ")
prices = [int(i) for i in input().split()]
maxprofit = maxProfit(prices)
print(maxprofit)