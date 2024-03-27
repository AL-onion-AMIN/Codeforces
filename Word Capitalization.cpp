#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int z=(int)s[0];

    if(z>96){
      z=z-32;
        s[0]=(char)z;
    }
    cout<<s<<endl;

}
