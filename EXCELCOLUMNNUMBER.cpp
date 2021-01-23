int Solution::titleToNumber(string A) {
    int n = A.length();
    int value = 0;
    int x;
    for(int i = 0; i < n; i++)
    {
        x = pow(26,i);
        value += x * (A[n-i-1] - 'A' + 1);
    }
    return value;
}