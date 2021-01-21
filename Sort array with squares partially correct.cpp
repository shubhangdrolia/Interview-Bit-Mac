/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cstdlib>
#include<vector>

using namespace std;

int main()
{
    vector<int> A{-963, -894, -810, -712, -684, -630, -352, -277, -271, -243, -222, -141, -58, 35, 40, 264, 446, 529, 741, 805, 842, 890};
    int n =A.size();
    vector<int> output(n);
    int max = 0;
    
     for(int i =0; i < n ; i++)
    {
        A[i] = abs(A[i]);
    }
    
        for(int i = 0; i < n; i++)
    {
        if(A[i] > max)
        {
            max = A[i];
        }
    }
    max++;
    vector<int> count(max,0);
    
    for(int i = 0; i < n; i++)
    {
        count[A[i]]++;
    }

    for(int i = 1; i < max; i++)
    {
        count[i] += count[i-1];
    }
    
     for (int i = 0; i < n; ++i) 
    { 
        output[count[A[i]] - 1] = A[i]; 
        --count[A[i]]; 
    }
    
     for (int i = 0; i < n; ++i) 
        A[i] = output[i]; 
        
     for (int i = 0; i < n; ++i) 
        A[i] = A[i] * A[i]; 
        
        
     for(int i =0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
