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
void slove(){
    lli a,b;
    cin>>a>>b;
    lli n,m;
    cin>>n>>m;
   if(n<=m){
    cout<<n*min(a,b)<<nl;
    return;
   }
   if(m*a<=(m+1)*b){
    lli temp1=n%(m+1);
    lli temp2=n/(m+1);
    cout<<temp2*m*a+(temp1*min(a,b))<<nl;
   }
   else {
        cout<<n*b<<nl;

   }

}
int main(){
 int test;
   cin>>test;
   while(test--){
    slove();
   }
}




