class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        cleaned = "".join(c.lower() for c in s if c.isalnum())
        if cleaned.lower() == cleaned[::-1].lower():
            return True
        else:
            return False