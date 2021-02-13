int Solution::lPalin(ListNode* A) {
    ListNode* p;
    ListNode* q;
    ListNode* r;
    ListNode* temp;
    temp = A;
    int n = 0 , s;
    p = A;
    while(temp != NULL)
    {
        n++;
        temp = temp -> next;
    }
    
    if(n == 1)
        return 1;
    s = n/2;

    while(s)
    {
        p = p -> next;
        s--;
    }
    
    temp = A;
    
    if(n == 2)
    {
        if(temp -> val == p -> val)
            return 1;
        else
            return 0;
    }
    q = p -> next;
    r = p -> next -> next;
    
    while(q != NULL)
    {
        q -> next = p;
        p = q;
        q = r;
        if(r)   // if r is currently pointing to null it shows an runtime error..
            r = r -> next;
    }
    
   // 
    for(int i = 0; i < n/2; i++)
    {
        if(temp -> val == p -> val)
        {
            temp = temp -> next;
            p = p ->next;
        }
        
        else
            return 0;
    }
    return 1;
}

