int Solution::isPalindrome(int A) {
    vector<int> x;
    int n = A;
    int i;
    while(n != 0)
    {
        int y = n % 10;
        x.push_back(y);
        n = n/10;
    }
    
    int len = x.size();
    
    int length = len/2;
    
    for(i = 0; i < length; i++)
    {
        if(x[i] == x[len-i-1])
        {
            continue;
        }
        else
            break;
    }
    if(i == length)
        return 1;
    else 
        return 0;
}
