/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode* temp;
    temp = A;
    int n1 = 0, n2 = 0;
    while(temp != NULL)
    {
        if(temp -> val == 0)
            n1++;
        else
            n2++;
        temp = temp -> next;
    }
    
  // cout << n1 << " ";
    temp = A;
    while(n1)
    {
        temp -> val = 0;
        temp = temp -> next;
        n1--;
    }
    
    while(n2)
    {
        temp -> val = 1;
        temp = temp -> next;
        n2--;
    }
    return A;
}
