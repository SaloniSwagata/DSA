# Taking input level order wise using queue

# Creating a binary tree node
class BinaryTreeNode:
    def __init__(self,data):
        self.left = None
        self.data = data
        self.right = None

import queue

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

