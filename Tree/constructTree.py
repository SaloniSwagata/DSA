# Creating Binary Tree using PreOrder/PostOrder and InOrder

# Creating a binary tree node
class BinaryTreeNode:
    def __init__(self,data):
        self.left = None
        self.data = data
        self.right = None

# Creating Binary Tree using PreOrder and InOrder

def buildTree(preorder, inorder):
    if len(preorder)==0:
        return None
    rootdata = preorder[0]
    root = BinaryTreeNode(rootdata)
    rootindex = inorder.index(rootdata)
    leftinord = inorder[0:rootindex]
    rightinord = inorder[rootindex+1:]
        
    leftsublen = len(leftinord)
    leftpre = preorder[1:leftsublen+1]
    rightpre = preorder[leftsublen+1:]
    leftchild = buildTree(leftpre,leftinord)
    rightchild = buildTree(rightpre,rightinord)
        
    root.left = leftchild
    root.right = rightchild
        
    return root
