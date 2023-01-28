#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*n)-1;j++){
            if(j<=n){
                if(i<j){
                    cout<<"  ";
                }
                else{
                    cout<<j<<" ";
                }
            }
            else{
                if((i+j)<=(2*n)-1){
                    cout<<"  ";
                }
                else{
                    cout<<(2*n)-j<<" ";
                }
            }
        }
        cout<<endl;
    }
}
