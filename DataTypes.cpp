# include <iostream>
 #include <limits>
 using namespace std;

 int main(){
    //int char float double void

    //Finfint Size of each
    cout<< sizeof(int)<<endl;
    cout<< sizeof(float)<<endl;
    cout<< sizeof(double)<<endl;
    cout<< sizeof(char)<<endl;
   

    //Finding Address

    float a;

    cout<<"Address of float a is : "<< &a <<endl;

    //Finding Limits
    cout<<" Limits are : ";

    cout << static_cast<int>(numeric_limits<char>::max());
    

 }