# Count the number of nodes in the BST that lie in the given range.

def getCount(root,low,high):
    ##Your code here
    if root is None:
        return 0
    
    if root.data<=low:
        if root.data==low:
            return 1+getCount(root.right,low,high)
        
        return getCount(root.right,low,high)
            
    elif root.data>=high:
        if root.data==high:
            return 1+getCount(root.left,low,high)
        
        return getCount(root.left,low,high)
    
    else:
        return 1+getCount(root.left,low,high)+getCount(root.right,low,high)