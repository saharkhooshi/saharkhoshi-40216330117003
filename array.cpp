#include <iostream>
using namespace std;

int main(){
    int ar[100] p, t;
    for(t = 1 ; t < 100; t++){
        cin>>ar[t];
        cin>>p;
     }
    for(t = 1 ; t < 100; t++){
       if(ar[t]== p)
        cout<<t;
     }

    return 0;

}