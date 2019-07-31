#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==0) cout<<"0";
        else if(a==1||b==0){
            cout<<"1";
        }
        else {
            a=a%10;
            b=b%4;
            switch (b){
                case 1:
                    cout<<a; break;
                case 2:
                    cout<<(a*a)%10; break;
                case 3:
                    cout<<(a*a*a)%10; break;
                case 0:
                    cout<<(a*a*a*a)%10; break;
            }
        }
        cout<<"\n";
    }
    return 0;
}
