#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class Account {
    double balance = 0;
    double addMoney(double b, double n){
        b = b + n;
        return b;
    }

    double restMoney(double b, double n){
        b = b - n;
        return b;
    }
};

class Savings_account {
    double interest = 0;
    double addInterest(double b, double i){
        b = b * (1+i);
    }
};

int main(){
    return 0;
}
