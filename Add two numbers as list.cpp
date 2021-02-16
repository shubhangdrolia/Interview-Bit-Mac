ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode* temp1;
    ListNode* temp2;
    ListNode* temp;
    ListNode* prev;
    temp1 = A;
    temp2 = B;
    int i = 0;
    vector<int> list1;
    vector<int> list2;
    vector<int> list3;
    int sum;
    int carry = 0;
    int count1 = 0,count2 = 0;
    while(temp1 != NULL || temp2 != NULL)
    {
        if(temp1 != NULL)
        {
            list1.push_back(temp1 -> val);
            temp1 = temp1 -> next;
            count1++;
        }
        
        else
            list1.push_back(0);
            
        if(temp2 != NULL)
        {
            list2.push_back(temp2 -> val);
            temp2 = temp2 -> next;
            count2++;
        }
        
        else
            list2.push_back(0);
    }
    
    int size = list1.size();
    
    for(i=0; i < size; i++)
    {
        sum = list1[i] + list2[i] + carry;
        if(sum < 10)
            carry = 0;
        else
        {
            carry = sum / 10;
            sum = sum % 10;
        }
        list3.push_back(sum);
    }
    if(count1 > count2)
    {
        temp1 = A;
        temp = A;
    }
    else
    {
        temp1 = B;
        temp = B;
    }
    i = 0;
    while(temp1 != NULL)
    {
        prev = temp1;
        temp1 -> val = list3[i++];
        temp1 = temp1 -> next;
    }
    
    if(carry!=0)
    {
    struct ListNode* new_node =(struct ListNode*) malloc(sizeof(struct ListNode));
    new_node->val = carry;
    new_node->next = NULL;
    
    prev->next = new_node;
    }
    
    return temp;
}
