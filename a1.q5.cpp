#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int j=n;
    int count=0;
    while(j>=1){
        count+=1;
        j=j/10;
    }
    cout<<count;
}
