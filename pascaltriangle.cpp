vector<vector<int> > Solution::solve(int A) {
    vector<vector<int> > v;
    if(A==0)
        return v;
    v.push_back({1});
    if(A==1)
    return v;

    for(int i = 1;i< A;i++)
    {
    vector<int>t(i+1);
    //1st element of row
    t[0]=1;
    int j;
    //filling the vector excluding 1st and last element (i.e 1)
    for(j = 1 ; j<i;j++)
        t[j] = v[i-1][j-1]+v[i-1][j];
    // last element of row
    t[j] = 1;
    v.push_back(t);
    }
    return v;
    }