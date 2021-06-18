# Remove all the leaf nodes from the tree

def removeLeaf(root):
    if root is None:
        return None
    if root.left==None and root.right==None:
        return None
    
    root.left = removeLeaf(root.left)
    root.right = removeLeaf(root.right)
    return root
    