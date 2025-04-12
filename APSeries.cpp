//nth term = a+n-1*d

#include <iostream>
using namespace std;

int main(){
    int n,a,d, result;
    cout<< "Enter the nth term";
    cin>> n;

    cout<< "Enter the first term term";
    cin>> a;

    cout<< "Enter the difference btween two term";
    cin>> d;

    result = a+(n-1)*d;
    cout<< result;

    
}