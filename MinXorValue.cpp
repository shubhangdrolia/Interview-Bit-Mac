int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int size = A.size();
    int x;
    int min = A[0] ^ A[1];
    for(int i = 1; i < size-1; i++)
    {
        x = A[i] ^ A[i+1];
        if(x < min)
            min = x;
    }
    return min;
}

