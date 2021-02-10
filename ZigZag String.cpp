string Solution::convert(string A, int B) {

if(B == 1)
    return A;
vector<char> v[B];
int i = 0 , j = 0, k = 0;
int len = A.length();

for(i; i < B; i++)
{
    if(k == len) break;
    v[i].push_back(A[k]);
    k++;
    if(i == B-1)
    {
        if(k == len) break;
        i--;
        for(i; i>0; i--)
        {
            v[i].push_back(A[k]);
            k++;
            if(k == len) break;
        }
        i--;
    }
}


// creating new string 


   string s;
   for (int i = 0; i < B; i++) 
   { 
        for (auto it = v[i].begin(); 
             it != v[i].end(); it++) 
             { 

            s += *it; 
            } 
    }
    
    string withoutspace;
    int len2 = s.length();
    for(int i = 0; i < len2; i++)
    {
       if(s[i] == ' ')
            continue;
       else
            withoutspace += s[i];
            
    }
    return withoutspace;

}
