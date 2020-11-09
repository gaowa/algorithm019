class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            ListNode* tmp = new ListNode;
            tmp = slow->next;            
            slow->next = slow;            
            slow = tmp;           
            
            slow = fast;
        }
        return head;
        
    }
};
