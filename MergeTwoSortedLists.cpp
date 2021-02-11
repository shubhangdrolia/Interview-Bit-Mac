void Solution::merge(vector<int> &A, vector<int> &B) {
    int n1 = A.size();
    int n2 = B.size();
    
    int l = 0, p = 0;
    vector<int> c;
    while(l < n1 && p < n2)
    {
        if(A[l] < B[p])
        {
            c.push_back(A[l]);
            l++;
        }
        
        else
        {
            c.push_back(B[p]);
            p++;
        }
    }
    
    if(l < n1)
        while(l < n1)
        {
            c.push_back(A[l]);
            l++;
        }
    else
        {
            while(p < n2)
            {
            c.push_back(B[p]);
            p++;
            }
        }
    while(A.empty() == 0)
        A.pop_back();
    for(int i = 0; i < c.size(); i++)
        A.push_back(c[i]);
}
