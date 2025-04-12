#include <iostream>

using namespace std;

int main(){
    int hindi, english, cpp;
    int toatalMarks = 300;

    cout << "Enter the Hindi marks: ";
    cin >> hindi;

    cout << "Enter the English marks: ";
    cin >> english;

    cout << "Enter the C++ marks: ";
    cin >> cpp;

    int persentage =  (hindi + english + cpp)/ 3;

    cout <<"Persentage = " << persentage<<"%";
}