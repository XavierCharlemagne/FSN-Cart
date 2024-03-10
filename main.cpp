#include "Cart.h"

#include <iostream>
    using std::cout;
    using std::cin;
#include<iomanip>
    using std::setprecision;

int main(){
    Flower RedFlower("RF1", 32.95, 1);
    Flower BlueFlower("BF1", 7.95, 1);
    Flower GreenFlower("GF1", 24.95, 1); 

    Cart ShoppingCart;

/*
    ShoppingCart.add(RedFlower);
    ShoppingCart.add(BlueFlower);
    ShoppingCart.add(BlueFlower);
    ShoppingCart.add(GreenFlower);
    ShoppingCart.add(RedFlower);
    ShoppingCart.add(RedFlower);
    ShoppingCart.add(RedFlower);
*/
    string input;
    cout << "What flowers would you like to buy?" << '\n';
    cout << "[1] Red Flower: " << RedFlower.get_price() << '\n';
    cout << "[2] Blue Flower: " << BlueFlower.get_price() << '\n';
    cout << "[3] Green Flower: " << GreenFlower.get_price() << '\n';

    while(input != "0"){
        cin >> input;
        if(input == "0"){
            cout << "Goodbye, here is your cart: " << '\n';
        }
        else if(input == "1"){
            ShoppingCart.add(RedFlower);
            cout << "Red Flower added to cart" << '\n';
        }
        else if(input == "2"){
            ShoppingCart.add(BlueFlower);
            cout << "Blue Flower added to cart" << '\n';
        }
        else if(input == "3"){
            ShoppingCart.add(GreenFlower);
            cout << "Green Flower added to cart" << '\n';
        }
    };

    ShoppingCart.print();
    
    return 0;
}