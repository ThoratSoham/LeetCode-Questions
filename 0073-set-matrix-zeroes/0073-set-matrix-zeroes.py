class Solution(object):
    def setZeroes(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        rows = len(matrix)
        cols = len(matrix[0])
        zero_r = set()
        zero_c = set()

        for r in range(rows):
            for c in range(cols):
                if matrix[r][c] == 0:
                    zero_r.add(r)
                    zero_c.add(c)

        for r in range(rows):
            for c in range(cols):
                if r in zero_r or c in zero_c:
                    matrix[r][c] = 0 

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna