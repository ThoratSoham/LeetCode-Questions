#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> char_stack;
        for (char c : s){
            if (c == '(' || c == '{' || c == '['){
                char_stack.push(c);
            } else {
                if (char_stack.empty()){
                    return false;
                }

                char top_char = char_stack.top();

                if (c == ')' && top_char == '(' ||
                    c == '}' && top_char == '{' ||
                    c == ']' && top_char == '['){
                        char_stack.pop();
                    }
                else {
                    return false;
                }
            }
        }
        return char_stack.empty();
    }
};