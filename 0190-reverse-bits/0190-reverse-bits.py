class Solution(object):
    def reverseBits(self, n):
        """
        :type n: int
        :rtype: int
        """
        a = "{:032b}".format(n)
        return int(a[::-1],2)
        