#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int m=5*((n-1)/2)+2;
    int l=5*((n-1)/2)+2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=5*(n-1)+1;j++){
                if((i+j)==m ||(i+j)==l){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
        }
        if((i<(n/2)+1)){
            m=m-4;
            l=l+6;
        }
        else{
            m=m+6;
            l=l-4;
        }
        cout<<endl;
    }
}
