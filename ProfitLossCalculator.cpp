#include <iostream>
using namespace std;

int main (){
    int costPrice, sellingPrice, markPrice, profit, discount;

    cout<< "Enter costPrice : ";
    cin >>  costPrice;

    cout<< "Enter sellingPrice : ";
    cin >>  sellingPrice;

    cout<< "Enter markPrice : ";
    cin >>  markPrice;

    cout<< "Enter profit : ";
    cin >>  profit;

    cout<< "Enter discount : ";
    cin >>  discount;

    //Finding the actual amount of profit

    int profitAmount = sellingPrice - costPrice;
    cout<< "Total profit :  " << profitAmount << " Rupees" ;
}