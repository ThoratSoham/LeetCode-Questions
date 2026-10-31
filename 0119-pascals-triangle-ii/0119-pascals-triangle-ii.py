class Solution(object):
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        if (rowIndex == 0):
            return [1]
        triangle = []
        for i in range(rowIndex+1):
            row = [1] * (i + 1)

            for j in range(1,i):
                row[j] = triangle[i-1][j-1] + triangle[i-1][j]

            triangle.append(row)

        return triangle[rowIndex]

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna