class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        i = 0
        n = len(s)

        while i < n and s[i] == " ": 
            i+=1
        if i == n:
            return 0
        sign = 1
        if s[i] == "-":
            sign = -1
            i += 1
        elif s[i] == "+": 
            i += 1

        int_max = 2**31 - 1
        int_min = -2**31
 
        result = 0
        while i < n and s[i].isdigit():
            digit = int(s[i])

            if result > (int_max - digit) // 10:
                return int_max if sign == 1 else int_min

            result = result * 10 + digit
            i += 1

        return sign*result