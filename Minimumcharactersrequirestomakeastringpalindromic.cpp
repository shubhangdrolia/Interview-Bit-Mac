int Solution::solve(string A) {
    int length = A.length();
    int low = 0;
    int count = 0;
    int high = length - 1;
    while(low < high)
    {
        if(A[low] == A[high])
        {
            low++;
            high--;
        }
        
        else
        {
            if(low ==0)
            {
            count++;
            high--;
            }
            else
            {
                count += low;
                low = 0;
            }
        }
    }
    return count;
}
