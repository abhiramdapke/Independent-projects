/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit.
Add the two numbers and return it as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
*/

#include <iostream>
using namespace std;

struct ListNode 
{
   int val;
   ListNode *next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
 
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode* result = NULL;
    ListNode* temp = NULL;
    ListNode* prev  = NULL;
    int sum, carry = 0;
    while (l1 || l2)
    {
        sum = carry + (l1 == NULL?0:l1->val) + (l2 == NULL?0:l2->val);
        carry = (sum>9)?1:0;
        sum = sum%10;
        temp = new ListNode(sum);
        
        if (result == NULL)
            result = temp;
        else
            prev->next = temp;
        prev = temp;
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
        
    }
    if (carry == 1)
    {
        temp->next = new ListNode(carry);
    }
    return result;
}
    
int main()
{
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    
    ListNode* l3 = addTwoNumbers(l1, l2);
    while (l3)
    {
        cout << l3->val << " ";
        l3 = l3->next;
    }

    return 0;
}
