int Solution::pow(int x, int n, int p) {
    // long long po = power(x,n);
    // if(po<0){
    //     return (po+p)%p;
    // }
    // return (po%p);
 
    if (n == 0) 
        return 1 % p;
 
    long long ans = 1, base = x;
    while (n > 0) 
    {
        if (n % 2 == 1)
        {
            ans = (ans * base) % p;
            n--;
        } 
        else
        {
            base = (base * base) % p;
            n /= 2;
        }
    }
    if (ans < 0) 
        ans = (ans + p) % p;
    return ans;
}   
