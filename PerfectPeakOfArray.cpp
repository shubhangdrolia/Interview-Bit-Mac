// Ignore first and last element of the array ..
int Solution::perfectPeak(vector<int> &A) {
    
    int n = A.size();
    int max = A[0];
    int maxarr[n] = {0};
    int minarr[n] = {0};
    maxarr[0] = A[0];
    minarr[n-1] = A[n-1];
    for(int i = 1; i < n; i++)
    {
        if(maxarr[i-1] > A[i])
            maxarr[i] = maxarr[i-1];
        else
            maxarr[i] = A[i];
    }
    
    for(int i = n-2; i>=0; i--)
    {
        if(minarr[i+1] < A[i])
            minarr[i] = minarr[i+1];
        else
            minarr[i] = A[i];
    }
    int j;
    for(int i = 1; i < n-1; i++)
    {
        if(A[i] > maxarr[i-1] && A[i] < minarr[i+1])
            return 1;
    }
    return 0;
}

