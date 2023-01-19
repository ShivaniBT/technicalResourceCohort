#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int m=2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(((n-1)*5)+1);j++){
            if(i+j==m){
                cout<<"*";
                break;
            }
            else if(i+j<m){
                cout<<" ";
            }
            else{
                cout<<" ";
            }
        }
        m=m+6;
        cout<<endl;
    }
}
