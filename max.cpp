#include <iostream>
using namespace std;

int main(){
    int a,i,max;
    cin>>a;
    max=a;
    for(i =1 ; i<100 ; i++){
        cin>>a;
        if(a > max){
        max=a;
        }
    }

    cout<<max;
    return 0;

}