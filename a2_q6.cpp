#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if (i<=(n/2)+1){
                if((j<(n-i))||(j>(n+i+1))){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            else{
                if(j<(i-1)||(j+i>=(2*n)+3)){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<"\n";
    }
}
