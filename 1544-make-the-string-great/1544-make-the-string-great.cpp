class Solution {
public:
    string makeGood(string s) {
        string result = "";

        for (int i = 0; i < s.length(); i++) {
            char current = s[i];

            if (!result.empty()) {
                char last = result.back();

                if ((islower(last) && toupper(last) == current) ||
                    (isupper(last) && tolower(last) == current)) {
                    result.pop_back();
                    continue;
                }
            }

            result += current;
        }

        return result;
    }
};
