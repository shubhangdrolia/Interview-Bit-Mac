int Solution::compareVersion(string A, string B) {
string s;
vector<string> vect1;
vector<string> vect2;

int len1 = A.length();
int len2 = B.length();

int i;

for(i = 0; i < len1; i++)
{
    if(A[i] != '.')
    {
        s+=A[i];
    }
    else
    {
        vect1.push_back(s);
        s = "";
    }
}
vect1.push_back(s);
s = "";

for(i = 0; i < len2; i++)
{
    if(B[i] != '.')
    {
       s+=B[i];
    }
    else
    {
        vect2.push_back(s);
        s = "";
    }
}
vect2.push_back(s);
s = "";

int x = vect1.size();
int y = vect2.size();
int len3;

if(x > y)
{
    len3 = x - y;
    for(i = 0; i < len3; i++)
        vect2.push_back("0");
}

else if(x < y)
{
    len3 = y - x;
    for(i = 0; i < len3; i++)
        vect1.push_back("0");
}
len3 = vect1.size();
for(i = 0; i < len3; i++)
{
    if(stod(vect1[i]) > stod(vect2[i]))
        return 1;
    else if(stod(vect1[i]) < stod(vect2[i]))
        return -1;
}
return 0;
}
