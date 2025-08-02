/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode*curr = node;
        ListNode*nextnode = node->next;
        curr->val = nextnode->val;
        curr->next = nextnode->next;
        delete nextnode;
        
    }
};