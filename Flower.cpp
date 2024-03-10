#include "Flower.h"

#include<string>
    using std::string;

#include<iomanip>
    using std::fixed;
    using std::setprecision;

#include <iostream>
    using std::cout;
    using std::cin;

Flower::Flower(string code, double price, int amount){
    this -> code = code;
    this -> price = price;
    this -> amount = amount;
}

string Flower::get_code(){
    return code;
}
double Flower::get_price(){
    return price;
}

int Flower::get_amount(){
    return amount;
}

void Flower::set_price(float new_price){
    price = new_price;
}

void Flower::set_amount(int new_amount){
    amount = new_amount;
}

void Flower::print(){
    cout << code << ": " << setprecision(2) << price << '\n'; 
}
