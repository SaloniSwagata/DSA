# Creating and printing a binary tree

# Creating a binary tree node
class BinaryTreeNode:
    def __init__(self,data):
        self.left = None
        self.data = data
        self.right = None

# Printing tree simple way
def printTree(root):
    if root==None:
        return
    print(root.data)
    printTree(root.left)
    printTree(root.right)

btn1 = BinaryTreeNode(2)
btn2 = BinaryTreeNode(3)
btn3 = BinaryTreeNode(4)

btn1.left = btn2
btn1.right = btn3