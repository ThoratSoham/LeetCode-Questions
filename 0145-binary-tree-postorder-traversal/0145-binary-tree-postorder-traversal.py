# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def postorderTraversal(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[int]
        """

        lst = []

        def preTrans(node):
            if not node:
                return

            preTrans(node.left)
            preTrans(node.right)
            lst.append(node.val)


        preTrans(root)
        return lst
        