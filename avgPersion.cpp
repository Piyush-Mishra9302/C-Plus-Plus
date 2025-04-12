#include <iostream>
using namespace std;

int main(){
    int avgWeightOf10 = 50;
    int totalWeightOf10 = 10*50;
    cout<< totalWeightOf10<<endl;

    //As 1 persion removed from the group then

    int avgWeightOf9 = 45;
    int totalWeightOf9 = 9*45;
    cout<< totalWeightOf9<<endl;
    // Resultent weight of removed persion

    int ResultentWeight = totalWeightOf10 - totalWeightOf9;
    cout<< ResultentWeight;
}