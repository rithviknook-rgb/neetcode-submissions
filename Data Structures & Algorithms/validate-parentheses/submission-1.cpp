class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for(char c:s){
            if(c=='(' || c=='[' || c=='{'){
                stk.push(c);
            }

            else if(c==')' || c==']' || c=='}'){
                if(stk.empty() || !isMatching(stk.top(),c)){
                    return false;
                }
                stk.pop();
            }
        }
        return stk.empty();
    }

private: 
    bool isMatching(char open, char close){
        return (open=='(' && close==')' ||
        open=='[' && close==']' ||
        open=='{' && close=='}'); 
    }
};
