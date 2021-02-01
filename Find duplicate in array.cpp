int Solution::repeatedNumber(const vector<int> &A) {
    int x = A.size();
    int n = x--;
    int arr[n] = {0};
    for(int i = 0; i < n; i++)
    {
        arr[A[i]]++;
    }
    for(int i = 0; i < x; i++)
    {
        if(arr[i] > 1)
        {
            return i;
        }
    }
}
