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
    int GCD (int a, int b) {
        if (a % b == 0) return b;
        if (b % a == 0) return a;
        if (a > b) return GCD(a%b, b);
        return GCD(a, b%a);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* bruh = head;
        while (bruh -> next) {
            ListNode* aux = new ListNode(GCD(bruh->val, bruh->next->val));
            aux->next = bruh->next;
            bruh->next = aux;
            bruh = bruh->next->next;
        }
        return head;
    }
};