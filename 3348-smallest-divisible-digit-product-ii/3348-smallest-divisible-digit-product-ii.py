def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

class Solution(object):
    def smallestNumber(self, num, t):
        # Step 1: Check if t can be formed using digits 1-9
        temp = t
        for i in range(2, 10):
            while temp % i == 0:
                temp //= i
        if temp > 1:
            return "-1"
        
        n = len(num)
        rem = [0] * (n + 1)
        rem[0] = t
        pos = n - 1
        num_list = list(num)
        
        # Step 2: Compute remaining t needed for each prefix
        for i in range(n):
            if num_list[i] == '0':
                pos = i
                break
            rem[i + 1] = rem[i] // gcd(rem[i], int(num_list[i]))
            
        # Step 3: Check if num itself is valid and zero-free
        if rem[n] == 1 and '0' not in num:
            return num

        # Helper: Returns minimal non-1 digits needed for target in O(log t) time
        def get_needed_digits(target):
            digits = []
            curr = target
            for v in (9, 8, 7, 6, 5, 4, 3, 2):
                while curr % v == 0:
                    digits.append(str(v))
                    curr //= v
            return digits

        # Step 4: Backtrack from longest valid prefix
        for i in range(pos, -1, -1):
            start_digit = int(num_list[i]) + 1
            for d in range(start_digit, 10):
                tNow = rem[i] // gcd(rem[i], d)
                needed = get_needed_digits(tNow)
                avail_slots = n - 1 - i
                
                # Check if required digits fit into available remaining slots
                if len(needed) <= avail_slots:
                    ones_count = avail_slots - len(needed)
                    suffix = "1" * ones_count + "".join(sorted(needed))
                    return "".join(num_list[:i]) + str(d) + suffix
                    
        # Step 5: If no same-length answer exists, expand to a longer length
        digits = get_needed_digits(t)
        req_len = max(n + 1, len(digits))
        return "1" * (req_len - len(digits)) + "".join(sorted(digits))