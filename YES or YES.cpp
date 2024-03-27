//Author= Al-Amin Bhuiyan
// from DUET
#include<bits/stdc++.h>
using namespace std;
 int n,m;
int main(){
    int test;
    cin>>test;
    while(test--){
            string s,s2;
    cin>>s;
    int con=0;
    for(int i=0;i<3;i++){
        s2[i]=toupper(s[i]);

    }
     if(s2[0]=='Y')con++;
        if(s2[1]=='E')con++;
        if(s2[2]=='S')con++;
    if(con==3)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;




    }
}

