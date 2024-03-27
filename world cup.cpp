
#include<bits/stdc++.h>
using namespace std;
#define  lli     long long int
#define  PI      3.1416
#define  nl      "\n"
#define  ce      cout<<"\n"
#define  mod     1000000007
#define  pb      push_back
#define  yes     cout<<"YES"<<"\n"
#define  no      cout<<"NO"<<"\n"
#define S        size()
#define L        length()
#define B        begin()
#define E        end()
#define F        first
#define se       second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void slove(){
    lli n;
    cin>>n;
    lli flag=0;
    vector<lli>vec(n);
    lli ans=0;
    lli mini=INT_MAX;
    for(lli i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]<i+1 && flag==0){
           ans=i+1;
           flag=1;

        }
        mini=min(mini,vec[i]);
    }
    if(flag==1){cout<<ans<<nl;return;}
  //   lli mini=*min_element(vec.begin(),vec.end());
    //cout<<mini<<nl;
     vector<lli>::iterator it;
     for(lli i=0;i<n;i++){

        lli x=vec[i];

    it = vec.begin()+i;
    vec.erase(it);
      vec.insert(it,(x%mini));
     }
 // for(lli i=0;i<vec.size();i++){
   //   cout<<vec[i]<<" ";
   //}
  // cout<<nl;
       for(lli i=0;i<n;i++){
        if(vec[i]==0){
           ans=i+1;
           cout<<ans<<nl;
           return;
        }
       }


 // cout<<ans<<nl;

      }

int main(){
     fast_cin();
 //int test;
  //// cin>>test;
  // while(test--){
    slove();
  // }
}



