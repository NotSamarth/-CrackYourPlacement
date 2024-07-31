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
    int getDecimalValue(ListNode* head) {
        vector<int> nums;
        while (head != NULL) {
            nums.push_back(head->val);
            head = head->next;
        }
        int n = nums.size() ;
        int sum = 0;
        for( int i = 0 ; i < n ; i++){
            cout<<nums[i]<<pow(2,(n-i-1))<<endl;
            sum += nums[i] * pow(2,(n-i-1));
        }
        return sum;
    }
};