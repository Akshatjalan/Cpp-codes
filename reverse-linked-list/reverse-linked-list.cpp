/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        stack<int> s;
        if(head == NULL){
            return head;
        }
        while(temp != NULL){
            s.push(temp->val);
            temp = temp->next;
        }
        ListNode* ans = head;
        while(!s.empty()){
            ans->val = s.top();
            s.pop();
            ans = ans->next;
        }
        return head;
        
        
    }
};