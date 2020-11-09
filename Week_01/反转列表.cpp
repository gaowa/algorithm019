class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* l = new ListNode; l = NULL;
        ListNode* cur = new ListNode; cur = head;
        while(cur != NULL)
        {
            ListNode* tmp = new ListNode; tmp = cur->next;
            cur->next = l;
            l = cur;
            cur = tmp;
        }
        return l;
    }
};
