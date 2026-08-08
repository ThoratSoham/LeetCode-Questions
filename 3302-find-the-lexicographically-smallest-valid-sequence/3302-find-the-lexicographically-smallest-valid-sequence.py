class Solution(object):

    def validSequence(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: List[int]
        """
        n,m = len(word1), len(word2)

        last = [-1] * (m+1)
        last[m] = n

        l = n - 1

        for k in range(m-1,-1,-1):
            while l>= 0 and word1[l] != word2[k]:
                l -= 1
            last[k] = l
            if l>= 0:
                l-=1

        result = []
        Free_pass = 1
        curr_j = 0

        for i in range(m):
            matched = False
            while curr_j < n:
                if word1[curr_j] == word2[i]:
                    if Free_pass == 1 or (curr_j + 1 <= last[i+1]):
                        result.append(curr_j)
                        curr_j += 1
                        matched = True
                        break
                else:
                    if Free_pass == 1 and (curr_j + 1 <= last[i+1]):
                        Free_pass = 0
                        result.append(curr_j)
                        curr_j += 1
                        matched = True
                        break

                curr_j += 1
            
            if not matched:
                return []
        
        return result