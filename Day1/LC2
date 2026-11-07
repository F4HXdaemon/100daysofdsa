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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        int count = 0;
        ListNode *newnode = new ListNode(0);
        ListNode *temp = newnode;

        while (l1 != NULL || l2 != NULL || count != 0)
        {
            if (l1 != NULL)
            {
                count = count + l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL)
            {
                count = count + l2->val;
                l2 = l2->next;
            }

            temp->next = new ListNode(count % 10);
            temp = temp->next;

            count = count / 10;
        }

        return newnode->next;
    }
};