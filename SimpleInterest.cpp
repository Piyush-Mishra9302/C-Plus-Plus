#include <iostream>
using namespace std;

int main(){
    int p, r, t,si;
    cout<< "Enter interest,p,r,t,si respectivelly : ";
    cin>> p>>r>>t;

    si = (p*r*t)/100;
    cout<< "Simple Interest is : "<< si;
}