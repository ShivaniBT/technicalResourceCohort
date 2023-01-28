#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n/2);j++){
            if(i==(n/2)+1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for(int m=1;m<=(n/2)+1;m++){
            if(i<=(n/2)+1){
                if(m<=i){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            else{
                if(m<=(n-i+1)){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}
