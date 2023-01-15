#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int j=n;
    while(j>=1){
        cout<<(j%10)<<"\n";
        j=abs(j/10);
    }
}
