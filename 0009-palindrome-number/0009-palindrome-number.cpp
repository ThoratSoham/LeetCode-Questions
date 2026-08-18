class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
        return false;

        long long rev = 0;
        int x1 = x;
        int d = 0;
        while (x1 != 0)
        {
            d = x1%10;
            x1 = x1/10;
            rev = rev*10+d;
        }
        return rev == x;
    }
};