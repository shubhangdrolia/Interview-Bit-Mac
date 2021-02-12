int Solution::numSetBits(unsigned int A) {
   int count = 0;
   if(A == 0) return 0;
   while(A != 1) 
   {
       if(A % 2 == 1)
        count++;
        A = A/2;
    }
    count++;
    return count;
}
