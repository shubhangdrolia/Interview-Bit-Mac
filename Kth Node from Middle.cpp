int Solution::solve(ListNode* A, int B) {
    ListNode* temp;
    temp = A;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp -> next;
    }
    
    int position = (count/2) - B;
    if(position < 0)
        return -1;
    int i = 0;
    temp = A;
    while(i < position)
    {
        temp = temp -> next;
        i++;
    }
    return temp -> val;
}