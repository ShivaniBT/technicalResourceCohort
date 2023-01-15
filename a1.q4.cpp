#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;
    while(low<=high){
        int count=0;
        for(int i=2;i<=(low/2);i++){
            if(low%i==0){
                count+=1;
                break;
            }
            else{
                continue;
            }
        }
        if(count==0){
            cout<<low<<"\n";
        }
        low++;
    }
    return 0;
}
