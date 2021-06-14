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

btn1 = BinaryTreeNode(2)
btn2 = BinaryTreeNode(3)
btn3 = BinaryTreeNode(4)

btn1.left = btn2
btn1.right = btn3