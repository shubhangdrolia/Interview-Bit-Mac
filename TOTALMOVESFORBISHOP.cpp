int Solution::solve(int A, int B) {
    int i , j;
    i = A; j = B;
    int count = 0;
    while(i > 1 && j > 1)
    {
        count++;
        i--;
        j--;
    }
    i = A; j = B;
        while(i < 8 && j < 8)
    {
        count++;
        i++;
        j++;;
    }
    
       i = A; j = B;
        while(i > 1 && j < 8)
    {
        count++;
        i--;;
        j++;;
    }
    
       i = A; j = B;
        while(i < 8 && j > 1)
    {
        count++;
        i++;
        j--;
    }
    
    return count;
        
}
