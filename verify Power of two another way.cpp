#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int ans=(a&(a-1));
        if(ans==0){
            cout<<a<<" "<<"is power of two"<<endl;
        }
        else{
            cout<<a<<" "<<"is not power of two"<<endl;
        }
    }
}
