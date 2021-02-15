ListNode* Solution::solve(ListNode* A) {
 ListNode* temp;
 temp = A;
 vector<int> list;
 while(temp != NULL)
 {
     list.push_back(temp -> val);
     temp = temp -> next;
 }
 int n = list.size();
 if(n < 4)  
    return A;
int low = 1;
int high;
if(n % 2 == 0)
    high = n-1;
else
    high = n-2;
while(low < high)
{
    swap(list[low],list[high]);
    low = low + 2;
    high = high - 2;
}

temp = A;
int i = 0;
while(temp != NULL)
{
    temp -> val = list[i++];
    temp = temp -> next;
}
return A;
}
