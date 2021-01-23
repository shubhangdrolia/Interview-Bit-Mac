int Solution::gcd(int A, int B) {
   while(1)
   {
       int x = B % A;
       if(x == 0)
            break;
        B = A;
        A = x;
    }

    return A;
}