//Coder= Al-Amin Bhuiyan
// from DUET
#include<bits/stdc++.h>
using namespace std;
#define nl endl;
#define lli long long int;
void slove(){
    int a,b,c,d,e;
    cin>>a;
    for(;;){
            a++;
    b=a/1000;
    c=(a/100)%10;
    d=(a/10)%10;
    e=a%10;
    if(b!=c && b!=d && b!=e && c!=d &&c!=e &&d!=e){break;}
             }

   cout<<a<<endl;

}
int main(){
            slove();

}




