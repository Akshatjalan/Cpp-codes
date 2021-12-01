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
    ListNode* removeElements(ListNode* head, int a) {
        ListNode* temp = head;
        if(head == NULL){
            return NULL;
        }
        queue<int> q;
        
        while(temp!= NULL){
            if(temp->val != a){
                q.push(temp->val);
                temp = temp->next;
            }
            else{
                temp = temp->next;
            }
        }  
        ListNode* ans = NULL;
        ListNode* ans2 = ans;
           while(!q.empty()){
               if(ans == NULL){
                   ans = new ListNode(q.front());
                   ans2 = ans;
                   q.pop();
               }else{
                   ans->next = new ListNode(q.front());
                   ans = ans->next;
                   q.pop();
               }
            
           }
        
        return ans2;
    }
};