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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 && list2){
            return NULL;
        }
        ListNode* nxt = new listNode();
        ListNode* one = list1;
        ListNode* two = list2;
        if(one -> val <= two -> val){
            ListNode(one -> val , one);
        }
        else{
            ListNode(two -> val , two);
        }
        while(one || two){
            if(one -> val <= two -> val){
                nxt = one -> next;
            }

        }
        return nxt;
    }
};