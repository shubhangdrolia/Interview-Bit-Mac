int binarySearch(vector<int> &A,int l,int r,int B)
{
    int x;
    while(l <= r)
    {
    int mid = l + (r-l)/2;
    if(A[mid] == B)
    {
        if(A[mid + 1] > B) // tackling case in which we get value equal to b and consecutive values are equal..
            return mid;
        else
            l = mid + 1;
    }
    
    else if(A[mid] < B)
    {
        x = mid;  // this is to remember the last position where a[mid] < b;
        l = mid + 1;
    }
    else    
        r = mid - 1;
    }
    return x;
}
int Solution::solve(vector<int> &A, int B) {
    int l = 0;
    int n = A.size();
    if(n == 1)   // this is for the case where there is only one element;
        if(A[0] < B)
            return 1;
        else 
            return 0;
    int r = n-1;  
    if(A[r] <= B)   // this is for the case when all elements are equal to b in array..
        return n;
    int result = binarySearch(A,l,r,B);
    result++;  // as index starts from zero so we have to increment our answer by one..
    return result;
}
