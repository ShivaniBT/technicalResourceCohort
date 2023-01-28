#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 ||i==n){
                cout<<"* ";
            }
            else if(i<=(n/2)+1){
                if(j==i || j==(n-i+1)){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            else{
                if((i+j)>n && j<=i){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
