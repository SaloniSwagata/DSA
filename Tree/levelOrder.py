# Taking input level order wise using queue

# Creating a binary tree node
class BinaryTreeNode:
    def __init__(self,data):
        self.left = None
        self.data = data
        self.right = None

import queue

# Taking Level Order Input
def levelInput():
    rootData = int(input("Enter the root node data: "))
    if rootData ==-1:
        return None
    root = BinaryTreeNode(rootData)

    q = queue.Queue()

    q.put(root)

    while not(q.empty()):
        current_node = q.get()

        leftdata = int(input("Enter the left node data: "))
        if leftdata!=-1:
            leftnode = BinaryTreeNode(leftdata)
            current_node.left = leftnode
            q.put(leftnode)
        rightdata = int(input("Enter the right node data: "))
        if rightdata!=-1:
            rightnode = BinaryTreeNode(rightdata)
            current_node.right = rightnode
            q.put(rightnode)
    
    return root

# Level Order Output
def levelInput(root):
    if root is None:
        print("Empty tree")
    else:
        q = queue.Queue()

        q.put(root)

        while not(q.empty()):
            current_node = q.get()

            if current_node is not None:
                print(current_node.data,end=" ")
            q.put(current_node.left)
            q.put(current_node.right)