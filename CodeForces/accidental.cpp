#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    io;
    int t=1;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<pair<int,int>>v(n);
      vector<int>prefix(n);
      for(int i=0;i<n;i++){
          cin>>v[i].first;
          v[i].second=i+1;
      }
      sort(v.begin(),v.end());
      prefix[0]=v[0].first;
      for(int i=1;i<n;i++){
          prefix[i]=prefix[i-1]+v[i].first;
      }
      
      int l=0,r=n-1,res;
      while(l<=r){
          int mid=l+(r-l)/2;
          bool ok=true;
          int sum=0;
          sum+=prefix[mid];
          for(int i=mid+1;i<n;i++){
              if(sum<v[i].first){
                  ok=false;
                  break;
              }
              else
              sum+=v[i].first;
          }
          if(ok==false)
          l=mid+1;
          else{
              res=mid;
              r=mid-1;
          }
      }
      set<int>s;
      for(int i=res;i<n;i++)
      s.insert(v[i].second);
      cout<<s.size()<<endl;
      for(auto it:s)
      cout<<it<<" ";
      cout<<endl;
    }
      
}
