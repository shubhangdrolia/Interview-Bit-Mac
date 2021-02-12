int Solution::removeDuplicates(vector<int> &A) {
    int count = 1;
    int max = A[0];
    vector<int> c;
    c.push_back(A[0]);
    for(int i = 1; i < A.size(); i++)
    {
        if(max == A[i])
            continue;
        else
        {
            count++;
            max = A[i];
            c.push_back(A[i]);
        }
    }
    for(int i = 0; i < A.size(); i++)
        A.pop_back();
    for(int i = 0; i < c.size(); i++)
        A.push_back(c[i]);
        
        return count;
}
