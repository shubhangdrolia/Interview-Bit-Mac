int Solution::firstMissingPositive(vector<int> &A) {
    int total = 0;
    int max = 0;
    int min = 10000;
    int sum = 0;
    int i;
    
    int n = A.size();
    int hash[n+1] = {0};
    
    for(i = 0; i < n+1; i++)
    {
        if(A[i] > n)
            continue;
        else    
            hash[A[i]]++;
    }
    
    for(i = 0; i  < n; i++)
        {
            if(A[i] < 0)
                continue;
            else
                break;
        }
    if(i == n)
        return 1;
        
    for(i = 1; i < n + 1; i++)
        if(hash[i] == 0)
            return i;
    if(i == n + 1)
        return i;
        
}