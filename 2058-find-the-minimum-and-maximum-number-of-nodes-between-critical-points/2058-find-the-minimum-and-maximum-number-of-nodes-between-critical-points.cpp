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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        int f = -1;
        int l = -1;
        int mn = INT_MAX;
        ListNode* prev = head;
        ListNode* curr = head->next;
        int pos = 1;
        while (curr && curr->next) {
            bool isCritical =
                (curr->val > prev->val && curr->val > curr->next->val) ||
                (curr->val < prev->val && curr->val < curr->next->val);
                if (isCritical) {
                if (f == -1) {
                    f = pos;
                } else {
                    mn = min(mn, pos - l);
                }
                l = pos;
            }
            prev = curr;
            curr = curr->next;
            pos++;
        }
        if (f == -1 || f == l)
            return {-1, -1};
            return {mn, l - f};
    }
};