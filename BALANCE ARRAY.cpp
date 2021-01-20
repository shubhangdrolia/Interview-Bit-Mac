int Solution::solve(vector<int> &A)
{
   int lefteven = 0, rightodd = 0;
   int leftodd = 0, righteven = 0;
   int n = A.size();
   int count = 0;
   
   for(int i = 0; i < n; i++)
   {
       if(i % 2  == 0)
            righteven += A[i];
        else    
            rightodd += A[i];
   }
   
   for(int i = 0; i < n; i++)
   {
       if(i % 2 == 0)
            righteven -= A[i];
       else
            rightodd -= A[i];
        
        if(lefteven + rightodd == leftodd + righteven)
            count++;
            
        if(i % 2 == 0)
            lefteven += A[i];
        else
            leftodd += A[i];
   }
   return count;
}
    
