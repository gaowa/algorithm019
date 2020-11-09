class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;

        ListNode* fast = head;
        if(fast == NULL || fast->next == NULL) return NULL;
        while(true)
        {
            fast=fast->next->next;
            if(fast == NULL || fast->next == NULL) return NULL;
            slow = slow->next;
            if(slow == fast) break;
        }
        fast = head;
        while(fast!= slow)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return fast;
        
    }
};
