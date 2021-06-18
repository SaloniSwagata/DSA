# InOrder Traversal in a Tree (Left - Root - Right)

def InOrder(self,root):
        # code here
        if root==None:
            return []

        left_list = self.InOrder(root.left)
        right_list = self.InOrder(root.right)
        return left_list + [root.data] + right_list

# PreOrder Traversal in a Tree (Root - Left - Right)

def InOrder(self,root):
        # code here
        if root==None:
            return []

        left_list = self.InOrder(root.left)
        right_list = self.InOrder(root.right)
        return [root.data] + left_list + right_list

# PostOrder Traversal in a Tree (Left - Right - Root)

def InOrder(self,root):
        # code here
        if root==None:
            return []

        left_list = self.InOrder(root.left)
        right_list = self.InOrder(root.right)
        return left_list + right_list + [root.data]