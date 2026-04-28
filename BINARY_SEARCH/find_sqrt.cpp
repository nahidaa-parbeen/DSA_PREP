#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
int mysqrt(int x){
  if(x<2) return x;
  int s=1,e=x/2,ans=0;
  while(s<=e){
    long long mid=s+(e-s)/2;
    if(mid*mid<=x){
      ans=mid;
      s=mid+1;
    }
    else{
      e=mid-1;
    }
  }
return ans;
}
};
int main(){
  Solution s;
  cout<<s.mysqrt(8)<<endl;
  return 0;
}
