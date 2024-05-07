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
        ListNode* prev = NULL;
        ListNode* current = head;
        while (current != NULL) {
            ListNode* nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        return prev;
    }
    
    ListNode* doubleIt(ListNode* head) {
            if (!head)
            return head;

        head = reverseList(head);

        ListNode* current = head;
        ListNode* newHead = NULL;
        int carry = 0;

        while (current != NULL) {
            int newVal = current->val * 2 + carry;
            carry = newVal / 10;
            newVal %= 10;

            if (newHead == NULL) {
                newHead = new ListNode(newVal);
            } else {
                ListNode* newNode = new ListNode(newVal);
                newNode->next = newHead;
                newHead = newNode;
            }

            current = current->next;
        }

        if (carry > 0) {
            ListNode* newNode = new ListNode(carry);
            newNode->next = newHead;
            newHead = newNode;
        }

        return newHead;
    }
};