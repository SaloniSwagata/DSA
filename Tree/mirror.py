# Create the mirror of a tree

def mirror(self,root):
    # Code here
    if root is None:
        return
    root.left, root.right = root.right, root.left
    self.mirror(root.left)
    self.mirror(root.right)