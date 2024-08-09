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
private:
    ListNode* getMid(ListNode* head){
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL and fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return slow;
    }
    ListNode* reverseLL(ListNode* head){
        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* ahead = NULL;

        while(cur != NULL){
            ahead = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = ahead;
        }
        return prev;
    }
    
    void merge(ListNode* &head1, ListNode* &head2){
        ListNode* h1next;
        ListNode* h2next;
    
        while(head1 != NULL and head2 != NULL){
            h1next = head1->next;
            h2next = head2->next;
        
            head1->next = head2;
            head2->next = h1next;
        
            head1 = h1next;
            head2 = h2next;
        }    
    }
public:
    void reorderList(ListNode* head) {
        if(!head) 
            return;
        

        // step 1 -> get middle 
        ListNode* middle = getMid(head);
        
        // step 2 -> reverse from the next of middle
        ListNode* temp = middle -> next;
        middle -> next = reverseLL(temp);

        // step 3 -> merge the two halves
        ListNode* firstHalf = head;
        ListNode* secondHalf = middle -> next;
        
        middle -> next = NULL;

        merge(firstHalf, secondHalf);
    }
};

> Even I am learning and trying to improve so lets grow together 