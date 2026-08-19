class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        int d = 0;
        int x1 = x;

        if (x<0) return false;

        while (x1 > 0)
        {
            d = x1%10;
            rev = rev*10+d;
            x1 = x1/10;
        }

        return rev == x;
    }
};