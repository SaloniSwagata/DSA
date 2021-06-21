# Creating Binary Tree using PreOrder/PostOrder and InOrder

# Creating a binary tree node
class BinaryTreeNode:
    def __init__(self,data):
        self.left = None
        self.data = data
        self.right = None

# Creating Binary Tree using PreOrder and InOrder

def buildTreePre(preorder, inorder):
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
    leftchild = buildTreePre(leftpre,leftinord)
    rightchild = buildTreePre(rightpre,rightinord)
        
    root.left = leftchild
    root.right = rightchild
        
    return root

# Creating Binary Tree using PostOrder and InOrder

def buildTree(postorder, inorder):
    if len(postorder)==0:
        return None
    rootdata = postorder[-1]
    root = BinaryTreeNode(rootdata)
    rootindex = inorder.index(rootdata)
    leftinord = inorder[0:rootindex]
    rightinord = inorder[rootindex+1:]
        
    leftsublen = len(leftinord)
    leftpost = postorder[0:leftsublen]
    rightpost = postorder[leftsublen:len(postorder)-1]
    leftchild = buildTree(leftpost,leftinord)
    rightchild = buildTree(rightpost,rightinord)
        
    root.left = leftchild
    root.right = rightchild
        
    return root