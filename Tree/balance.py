# Calculate the height of a binary tree. Assuming root is at height 1

def heightTree(root):
    if root is None:
        return 0
    
    leftH = heightTree(root.left)
    rightH = heightTree(root.right)

    H = max(leftH,rightH) # height of the tree will be the maximum of the heights of left subtree and right subtree

    return H+1 # +1 for the contribution of root

# Check if tree is balanced or not

def BalanceTree(root):
    if root is None:
        return True
    leftH = heightTree(root.left)
    rightH = heightTree(root.right)

    if abs(leftH-rightH)>1:
        return False
    
    isLeftBalance = BalanceTree(root.left)
    isRightBalance = BalanceTree(root.right)

    if isLeftBalance and isRightBalance:
        return True
    else:
        return False