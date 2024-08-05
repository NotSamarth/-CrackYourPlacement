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
    bool isPalindrome(ListNode* head) {
        vector<int> pal;
        while (head) {
            pal.push_back(head->val);
            head = head->next;
        }
        if (pal.size()) {
            int l = 0;
            int r = pal.size() - 1;
            while (l < r) {
                if (pal[l] == pal[r]) {
                    l++;
                    r--;
                } else
                    return false;
            }
        }
        return true;
    }
};