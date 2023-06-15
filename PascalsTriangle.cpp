#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans;
  ans.push_back({1});
  for(int i=1;i<n;i++){
    vector<long long int> vb={1};
    for(int j=1;j<i;j++){
      vb.push_back(ans[i-1][j-1]+ans[i-1][j]);
    }
    vb.push_back(1);
    ans.push_back(vb);
  }
  return ans;
}
