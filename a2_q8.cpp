#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int m=5*(n-1)+2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=5*(n-1)+1;j++){
            if((i+j==m)&&(m>n)){
                cout<<"*";
                break;
            }
            else{
                cout<<" ";
            }
        }
        m=m-4;
        cout<<endl;
    }
}
