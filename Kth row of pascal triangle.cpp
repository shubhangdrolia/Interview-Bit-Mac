vector<int> Solution::getRow(int A) {
    vector<vector<int> > v;
    v.push_back({1});
    vector<int> z;
    z.push_back(1);
    if(A == 0)
        return z;
    for(int i = 1; i <= A; i++)
    {
        int j;
        vector<int> t(i+1);
        t[0] = 1;
        for(j = 1; j < i; j++)
        {
            t[j] = v[i-1][j-1] + v[i-1][j];
        }
        t[j] = 1;
        v.push_back(t);
        if(i == A)
            return t;
    }
    
}