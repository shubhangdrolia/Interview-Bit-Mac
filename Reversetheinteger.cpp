int Solution::reverse(int A) {
    if(A < -2147483647)
        return 0;
    int x  = A;
    int z;
    //it is taken as long int because in case of int it is crossing limit and it becomes difficult to compare with largest and smallest number
    long int rev = 0;
    while(x != 0)
    {
        z = x % 10;   
        rev = rev * 10 + z;
        if(rev < -2147483647 || rev > 2147483647)
            return 0;
        x = x / 10;
    }
    int reverse = rev;
    return reverse;
}
// 2147483647
