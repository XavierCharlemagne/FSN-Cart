#ifndef CART_H
#define CART_H

#include<string>
using std::string;

#include<vector>
    using std::vector;

#include "Flower.h"

class Cart{
    public:
        int get_size();

        double get_subtotal();
        double get_shipping();
        double get_tax();
        double get_total();
        double get_discount();

        void add(Flower flower);
        void remove(string code);
        void print();

    private :
        vector<Flower> shopping_cart;

};

#endif