# Reverse an array of sring characters in place

def reverseString(s):
        """
        Do not return anything, modify s in-place instead.
        """
        for i in range(len(s)//2):
            t = s[i]
            s[i] = s[len(s)-i-1]
            s[len(s)-i-1] = t


s = [i for i in input().split()]
reverseString(s)
print(s)