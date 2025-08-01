class Solution {
public:
    string removeDuplicates(string s) {
        string stack = "";

        for (int i = 0; i < s.length(); i++) {

            if (!stack.empty() && s[i] == stack.back()) {

                stack.pop_back();
            } else {
                stack.push_back(s[i]);
            }
        }

        return stack;
    }
};
