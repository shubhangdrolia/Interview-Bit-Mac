string Solution::convert(string A, int B) {

    
// creating array of vectors and filling it in zigzag order...
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



// appending array data in string row wise..
   string s;
   for (int i = 0; i < B; i++) 
   { 
        for (auto it = v[i].begin(); 
             it != v[i].end(); it++) 
             { 
            if(*it == ' ')
                continue;
            else
                s += *it; 
            } 
    }
    
    return s;
}
