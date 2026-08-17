class Solution(object):

    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        phone_map = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",
            "8": "tuv",
            "9": "wxyz",
        }

        if not digits:
            return []

        res = []

        def dfs(index, path):
            # 1. Base case requires a return to stop execution
            if len(path) == len(digits):
                res.append(path)
                return  # <--- Added return here

            current_digit = digits[index]
            letters = phone_map[current_digit]

            for letter in letters:
                dfs(index + 1, path + letter)

        dfs(0, "")
        return res