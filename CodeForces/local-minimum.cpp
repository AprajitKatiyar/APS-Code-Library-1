#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    io;
    int t=1;
    //cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int>v(n+2,0);
       v[0]=n+1;
       v[n+1]=n+1;
       int l=1,r=n;
       int res;
       while(l<=r){
           int mid=l+(r-l)/2;
           int left,right,middle;
           if(v[mid]!=0)
           middle=v[mid];
           else{
               cout<<"? "<<mid<<endl;
               cin>>v[mid];
               middle=v[mid];
           }
           if(v[mid+1]!=0)
           right=v[mid+1];
           else{
               cout<<"? "<<mid+1<<endl;
               cin>>v[mid+1];
               right=v[mid+1];
           }
           if(v[mid-1]!=0)
           left=v[mid-1];
           else{
               cout<<"? "<<mid-1<<endl;
               cin>>v[mid-1];
               left=v[mid-1];
           }
           if(middle<left and middle<right){
               res=mid;
               break;
           }
           
           if(middle>left)
           r=mid-1;
           else
           l=mid+1;
       }
       cout<<"! "<<res<<endl;
        
    }
      
}
