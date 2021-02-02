vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(), A.end());
    int n = A.size();
    for(int i = 0; i < n-1; i++)
    {
        if(i%2 == 0)
        {
            if(A[i] < A[i+1])
                swap(A[i],A[i+1]);
        }
        else
        {
            if(A[i] > A[i+1])
                swap(A[i],A[i+1]);
        }
    }
    return A;
}
