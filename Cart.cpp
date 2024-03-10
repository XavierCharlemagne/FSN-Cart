#include "Cart.h"
#include<iostream>
    using std::cout;
    using std::endl;

#include<iomanip>
    using std::setw;
    using std::setprecision;
    using std::fixed;
    using std::right;

#include<vector>
    using std::count;

int Cart::get_size(){
    int size = shopping_cart.size();
    return size;
}

void Cart::remove(string code){
    for(int i = 0; i < static_cast<int>(shopping_cart.size()); i++){
        if(code == shopping_cart.at(i).get_code()){
            shopping_cart.erase(shopping_cart.begin() + i);
        }
    }
}

void Cart::add(Flower flower){
    int size = shopping_cart.size();
    int quantity = flower.get_amount();

    if(size == 0 && quantity > 0){
        shopping_cart.push_back(flower);
    }
    else if(quantity > 0){
       shopping_cart.push_back(flower);
    }
}

double Cart::get_subtotal(){
    double sum = 0;
    float tp = 0;
    float tq = 0;
    float subtotal = 0;

    for(int i = 0; i < static_cast<int>(shopping_cart.size()); i++){
        tp = shopping_cart.at(i).get_price();
        tq = shopping_cart.at(i).get_amount();
        sum = tp * tq;
        subtotal = subtotal + sum;
    }

    return subtotal;
}

double Cart::get_shipping(){
    double fee = 0;
    if(get_subtotal() < 50.00){
        fee = 4.95;
    }
    else if(get_subtotal() < 90.00){
        fee = 2.95;
    }
    else if(get_subtotal() >= 90.00){
        fee = 0;
    }

    return fee;
}

double Cart::get_tax(){
    float tax = get_subtotal() * 0.085; 
    return tax;
}

double Cart::get_discount(){
    double discount = 0;
    int counter = 0;

    for(int i = 0; i < static_cast<int>(shopping_cart.size()); i++){
        if(shopping_cart.at(i).get_code() == "RF1"){
            counter += 1;
        }
        if(counter >= 2){
            discount = 32.95 / 2;
        }
    }

    return discount;
}

double Cart::get_total(){
    double cart_total = 0;
    double shipping = get_shipping();
    double subtotal = get_subtotal();
    double tax = get_tax();
    double discount = get_discount();

    cart_total = (shipping + subtotal + tax) - discount;

    return cart_total;
}

void Cart::print(){
    int size = shopping_cart.size();
    
    for(int i = 0; i < size; i++){
        double tp = shopping_cart.at(i).get_price();
        double tq = shopping_cart.at(i).get_amount();
        double product = tp * tq;
        cout << shopping_cart.at(i).get_code() << ": " << shopping_cart.at(i).get_amount() 
             << setw(10) << fixed << setprecision(2) << product << '\n';
    }

    cout << "-----------------" << '\n';
    cout << "Subtotal: " << right << setw(10) << fixed << setprecision(2) << get_subtotal() << '\n';
    cout << "Shipping: " << right << setw(10) << fixed << setprecision(2) << get_shipping() << '\n';
    cout << "Discount: " << right << setw(10) << fixed << setprecision(2) << get_discount() << '\n';
    cout << "Sales Tax: " << setw(9) << fixed << setprecision(2)  << right << get_tax() << '\n';
    cout << "-----------------" << '\n';
    cout << "Total: " << setw(10) << fixed << setprecision(2) << get_total() << '\n';
}
