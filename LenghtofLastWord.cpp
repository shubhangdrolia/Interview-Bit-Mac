int Solution::lengthOfLastWord(const string A)
{
    int n = A.length();
    int k = 0;
    int i = n-1;
    while(i >= 0)
    {
        if(A[i] == ' ')
            i--;
        else
            break;
    }
    for(i; i >=0; i--)
    {
           if(A[i] >= 'a' && A[i] <= 'z' || A[i] >= 'A' && A[i] <= 'Z')
                k++;
            if(A[i] == ' ')
                break;
    }
    return k;
}
