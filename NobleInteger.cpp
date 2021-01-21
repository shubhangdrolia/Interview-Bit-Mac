int Solution::solve(vector<int> &A) {
    int n = A.size();
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        arr[i] = A[i];
    }
    
    sort(arr,arr+n);

    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == n-i-1)
        {
            // To check rest elements are greater not equal
            //test case : 5 5 5 5 5 5 
            // for this test case we have to use this condition..
            if(arr[i+1] > arr[i])
                return 1;
        }
    }
    
    return -1;
}
