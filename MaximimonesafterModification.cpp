int Solution::solve(vector<int> &A, int B) {
    int S = B;
    int sum = 0;
    int maxsum = 0;
    int n = A.size();
    int l = 0, p = 0;
    while(p < n)
    {
        if(S == 0 && A[p] == 0)
        {
            l++;
            p = l;
            S = B;
            if(sum > maxsum)
                maxsum = sum;
            sum = 0;
        }
        
        if(A[p] == 0)
            S--;
        sum++;
        p++;
    }
    if(sum > maxsum)
        maxsum = sum;
    return maxsum;
}
