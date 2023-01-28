#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int m=2;
    int k=5*(n-1)+2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=5*(n-1)+1;j++){
            if((i+j)==m ||(i+j)==k){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        m=m+6;
        k=k-4;
        cout<<endl;
    }
}
