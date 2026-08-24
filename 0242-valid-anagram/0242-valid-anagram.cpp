#include<unordered_map>
#include<string>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> charCount1, charCount2;
        for (char c1 : s){
            charCount1[c1]++;
        }
        for (char c2 : t){
            charCount2[c2]++;
        }
        return charCount1 == charCount2;
    }
};