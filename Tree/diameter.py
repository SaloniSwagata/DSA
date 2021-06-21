# Calculating the diameter using height in one function
# The diameter of a tree is the number of nodes on the longest path between two end nodes in the tree.

def DiameterTree(root):
    if root is None:
        return 0,0
        
    lefth, leftdia = DiameterTree(root.left)
    righth, rightdia = DiameterTree(root.right)
    
    h = max(lefth,righth)+1 #Height of the tree
    diameter = lefth+righth+1
        
    return h,max(diameter,leftdia,rightdia)