class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        roman_map = [(1000, "M"), (900, "CM"), (500, "D"), (400, "CD"),
        (100, "C"), (90, "XC"), (50, "L"), (40, "XL"),
        (10, "X"), (9, "IX"), (5, "V"), (4, "IV"), (1, "I")]

        lst = []
        result = []
        dnum = num
        cnum = 0
        for i in range(len(str(num))):
            cnum = (dnum%10)*(10**i)
            lst.append(cnum)
            dnum = dnum/10
        
        result = ""

        for val in reversed(lst):
            if val == 0:
                continue
            
            for r_val, r_sym in roman_map:
                while val >= r_val:
                    result += r_sym
                    val -= r_val
        return result

    
 