# Creating and printing a binary tree

# Creating a binary tree node
class BinaryTreeNode:
    def __init__(self,data):
        self.left = None
        self.data = data
        self.right = None

# Creating a tree by taking input tree wise (i.e, root - left subtree - right subtree)
# For None, the user enters -1

def FullTreeInput():
    rootdata = int(input())
    if rootdata==-1:
        return None
    root = BinaryTreeNode(rootdata)
    leftChild = FullTreeInput()
    rightChild = FullTreeInput()
    root.left = leftChild
    root.right = rightChild

    return root
    

# Printing tree simple way
def printTree(root):
    if root==None:
        return
    print(root.data)
    printTree(root.left)
    printTree(root.right)

# Detailed printing of tree

def printDetailedTree(root):
    if root == None:
        return
    
    print(root.data, end=":")
    if root.left != None:
        print("L ",root.left.data, end=" ,")
    if root.right!=None:
        print("R ",root.right.data)
    print()
    printDetailedTree(root.left)
    printDetailedTree(root.right)


# Counting the number of nodes in tree
def numnodes(root):
    if root == None:
        return 0
    left = numnodes(root.left)
    right= numnodes(root.right)

    return 1+left+right

btn1 = BinaryTreeNode(2)
btn2 = BinaryTreeNode(3)
btn3 = BinaryTreeNode(4)

btn1.left = btn2
btn1.right = btn3