#ifndef FLOWER_H
#define FLOWER_H

#include<iostream>
using std::string;

class Flower{
    public:
        Flower(string code, double price, int amount);

        string get_code();
        double get_price();
        int get_amount();

        void set_price(float new_price);
        void set_amount(int new_amount);
        void print(); 

    private:
        string code;
        double price;
        int amount;
};

#endif