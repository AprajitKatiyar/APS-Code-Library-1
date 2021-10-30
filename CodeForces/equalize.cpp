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
       int x;
       map<int,int>mp;
       for(int i=0;i<n;i++){
           cin>>x;
           mp[x]++;
       }
       map<int,int>mp2;
       set<int>s;
       for(auto it:mp){
       s.insert(it.second);
       mp2[it.second]++;
       }
       int minimum=LLONG_MAX;
       int sum=0;
       for(auto &it:s){
           int curr=it;
           sum=0;
           for(auto &it1:mp2){
               if(it1.first>curr)
               sum+=(it1.second*(it1.first-curr));
               else if(it1.first<curr)
               sum+=(it1.second*it1.first);
           }
          minimum=min(minimum,sum);
       }
       cout<<minimum<<endl;
        
    }
      
}
