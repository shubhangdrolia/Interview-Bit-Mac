int Solution::singleNumber(const vector<int> &A) {
    int size = A.size();
    int unique = A[0] ^ A[1];
    for(int i = 2; i < size; i++)
        unique = unique ^ A[i];
    return unique;
}
