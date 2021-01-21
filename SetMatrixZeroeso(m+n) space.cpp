void Solution::setZeroes(vector<vector<int> > &A) {
  int row = A.size();
  int column = A[0].size();
  int count = 0;
  int i,j;
  
  
  vector<int> x(row,0);
  vector<int> y(column,0);
  
  for(i = 0; i < row; i++)
  {
      for(j = 0; j < column; j++)
      {
          if(A[i][j] == 0)
          {
              x[i] = 1;
              y[j] = 1;
          }
      }
  }

  for(i = 0; i < row; i++)
  {
      if(x[i] == 1)
      {
          for(j = 0; j < column; j++)
                A[i][j] = 0;
      }
  }
  
    for(j = 0; j < column; j++)
    {
      if(y[j] == 1)
      {
          for(i = 0; i < row; i++)
                A[i][j] = 0;
      }
    }
  
}
