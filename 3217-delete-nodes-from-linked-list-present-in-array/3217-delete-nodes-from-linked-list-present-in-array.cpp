class Solution {
public:
    ListNode* modifiedList(std::vector<int>& nums, ListNode* head) {
        std::unordered_set<int> values(nums.begin(), nums.end());

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;

        while (prev->next != nullptr) {
            if (values.count(prev->next->val)) {
                // Just unlink; don't delete
                prev->next = prev->next->next;
            } else {
                prev = prev->next;
            }
        }

        return dummy.next;
    }
};
