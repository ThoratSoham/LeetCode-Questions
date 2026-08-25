#include<unordered_map>
#include<string>
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> char_map1;
        unordered_map<char,int> char_map2;
        for (char c : s){
            if (char_map1.contains(c)){
                char_map1[c]++;
            }
            char_map1.insert(make_pair(c, 1));
        }
        for (char d : t){
            if (char_map2.contains(d)){
                char_map2[d]++;
            }
            char_map2.insert(make_pair(d, 1));
        }
        return char_map1 == char_map2;
    }
};