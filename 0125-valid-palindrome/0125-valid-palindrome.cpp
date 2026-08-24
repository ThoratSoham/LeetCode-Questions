#include<string>
class Solution {
public:
    bool isPalindrome(string s) {
        string result = "";
        int i, j;
        for (char char1 : s){
            if (isalnum(char1)){
                result += tolower(char1);
            }
            
        }
        for (i = 0, j = result.size() - 1 ; i < j, j > 0; i++, j-- ){
            if (result[i]!=result[j]){
                return false;
            }
        }
    return true;
    }
};