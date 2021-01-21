vector Solution::solve(vector &A) {
int n=A.size();
vector ans(n,0);
int i=0,j=n-1;
int k=n-1;
while(i<=j){
if(abs(A[i])>abs(A[j])){
ans[k–]=A[i]*A[i];
i++;
}else{
ans[k–]=A[j]*A[j];
j–;
}
}
return ans;
}