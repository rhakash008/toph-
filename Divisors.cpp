#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    for( i=1;i<=n;i++){
        if(n%i==0){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
    
}
