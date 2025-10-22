#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int> st;

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    bool found = false;
                    for (int k = j + 1; k < nums2.size(); k++) {
                        if (nums2[k] > nums2[j]) {
                            st.push(nums2[k]);
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                        st.push(-1);
                    break;
                }
            }
        }

        vector<int> result;
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
