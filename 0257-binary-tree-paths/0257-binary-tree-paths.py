# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def binaryTreePaths(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[str]
        """
        result = []
        def collect(node,path):
            if not node:
                return

            current_path = path + str(node.val)

            if not node.left and not node.right:
                result.append(current_path)
                return
            
            if node.left:
                collect(node.left, current_path + "->")
            if node.right:
                collect(node.right, current_path + "->")

        collect(root,"")
        return result