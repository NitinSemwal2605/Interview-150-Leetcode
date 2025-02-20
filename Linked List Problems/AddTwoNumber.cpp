#include <bits/stdc++.h>
using namespace std;

class ListNode {
    public:
        int val;
        ListNode* next;
        ListNode(int val){
            this->val = val;
            this->next = nullptr;
        }
};


class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode*dummy = new ListNode(-1);
            ListNode*curr = dummy;
            ListNode*temp1 = l1;
            ListNode*temp2 = l2;
            int carry = 0;
    
            while(temp1 != nullptr || temp2 != nullptr){
                int sum = carry;
                if(temp1) sum += temp1->val;
                if(temp2) sum += temp2->val;
    
                curr->next = new ListNode(sum%10);
                carry = sum/10;
    
                curr = curr->next;
                if(temp1) temp1=temp1->next;
                if(temp2) temp2=temp2->next;
    
                if(carry>0){
                    curr->next = new ListNode(carry);
                }
            }
            return dummy->next;
        }
    };

int main() {
    // Create a linked list
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    Solution obj;
    ListNode* result = obj.addTwoNumbers(l1, l2);

    while(result != nullptr){
        cout << result->val << " ";
        result = result->next;
    }
    return 0;
}