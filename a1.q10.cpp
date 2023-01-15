#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n;
    cin >> n;
    //prime factorisation of number
    while(n!=1){
        for(int i=2;i<=n;){
            if(n%i==0){
                cout<<i<<" ";
                n=n/i;
                continue;
            }
            else{
                i++;
                continue;
            }
        }
    }
}
