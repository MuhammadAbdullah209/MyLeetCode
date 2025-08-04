#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        std::vector<int> values;

        
        ListNode* temp1 = list1;
        while (temp1 != nullptr) {
            values.push_back(temp1->val);
            temp1 = temp1->next;
        }

        
        ListNode* temp2 = list2;
        while (temp2 != nullptr) {
            values.push_back(temp2->val);
            temp2 = temp2->next;
        }

     
        std::sort(values.begin(), values.end());

        
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;

        for (int val : values) {
            curr->next = new ListNode(val);
            curr = curr->next;
        }

        return dummy->next;
    }
};
