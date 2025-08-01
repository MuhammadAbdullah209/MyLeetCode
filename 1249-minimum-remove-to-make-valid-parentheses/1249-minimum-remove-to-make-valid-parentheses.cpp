class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string temp = "";
        int open = 0;

    
        for (char c : s) {
            if (c == '(') {
                open++;
                temp += c;
            } else if (c == ')') {
                if (open > 0) {
                    open--;
                    temp += c;
                }
               
            } else {
                temp += c;
            }
        }

       
        string result = "";
        int close = 0;
        for (int i = temp.size() - 1; i >= 0; i--) {
            if (temp[i] == ')') {
                close++;
                result += temp[i];
            } else if (temp[i] == '(') {
                if (close > 0) {
                    close--;
                    result += temp[i];
                }
            
            } else {
                result += temp[i];
            }
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

