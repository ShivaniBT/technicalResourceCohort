#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    int a=0;
    int b=1;
    int c=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==1 && j==1){
                cout<<a;
            }
            else if(i==2 && j==1){
                cout<<"1 ";
            }
            else{
                c=a+b;
                cout<<c<<" ";
                a=b;
                b=c;
            }
        }
        cout<<endl;
    }
}
