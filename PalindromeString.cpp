bool ispal(string s){
    // int low = 0;
    // int high = s.length()-1;
    // while(low<high){
    //     if(s[low]!=s[high]){
    //         return 0;
    //     }
    //     low++;
    //     high--;
    // }
    // return 1;
    int i = 0;
    int x = s.length();
    int length = x - 1;
    int len = x/2;
    for(i,length;i<len;i++,length--)
    {
        if(s[i] != s[length])
            return 0;
    }
    return 1;
}


int Solution::isPalindrome(string A) {
    string s;
    int l  = A.length();
    for(int i = 0; i < l; i++)
    {
        if(isalnum(A[i])){  // alphabet or digit ..
            s += A[i];
        }
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    return ispal(s);
}
