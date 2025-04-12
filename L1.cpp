# include <iostream>
using namespace std;
int main(){
    
    int a, b;
    float pie = 3.14;

    cout<< "Enter the value of a : ";
    cin>> a;

    cout<< "Enter the value of b : ";
    cin>> b;
    // performing the calculations
    int sum = a + b;
    int minus = a - b;
    int multiple = a * b;
    int div = a / b;

    //Printing the calculations
    cout<< "Sum of a and b is : " << sum << endl;
    cout<< "minus of a and b is : " << minus << endl;
    cout<< "multiple of a and b is : " << multiple << endl;
    cout<< "Division of a and b is : " << div << endl;

    //Area of circle
    int r;
    cout<< "Enter the length of redius : ";
    cin>> r;

    cout<< pie*r*r << endl;

    // Area od rectangle

    int l, w;

    cout<< "Enter the length of reactangle : ";
    cin>> l;
    cout<< "Enter the bredth of reactangle :  ";
    cin>> w;
    cout<< "Area of reactangle is : ";
    int areaOfReactangle = l*w;
    cout<< areaOfReactangle;





    
    
}