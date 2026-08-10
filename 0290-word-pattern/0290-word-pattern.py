class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        words = s.split(" ")

        if len(words) != len(pattern):
            return False

        dct = {}

        for char, word in zip(pattern, words):
            if char in dct:
                if dct[char] != word:
                    return False
            else:
                if word in dct.values():
                    return False 
                dct[char] = word
        return True

                