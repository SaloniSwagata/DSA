# Check if a tree is Binary Search Tree or not

def isBST(self, root,l=None,r=None):
    #code here
    if root is None:
        return True
       
    rootdata = root.data
    
    if l!=None and l.data>=rootdata:
        return False
        
    if r!=None and r.data<=rootdata:
        return False
        
    return self.isBST(root.left,l,root) and self.isBST(root.right,root,r)