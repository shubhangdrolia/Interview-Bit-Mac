vector<int> Solution::primesum(int A) 
{
    // bool save from memory limit excedded
    bool hash[A];
    for(int i = 0; i < A; i++)
        hash[i] = 1;
    // sieve of erastosthenes
    // setting primenumber from 2 to n
    hash[0] = 0;
    hash[1] = 0;
    int x = sqrt(A);
    for(int i = 2; i <= x; i++)
    {
        if(hash[i] == 1)
        {
            for(int j = 2; i*j <= A; j++)
            {
                hash[i*j] = 0;
            }
        }
    }
    vector<int> v;
    int s = A/2;
    for(int i = 2; i <= s; i++)
    {
        if(hash[i] == 1 && hash[A-i] == 1)
        {
             v.push_back(i);
             v.push_back(A-i);
            break;
        }
    }
    return v;
}
