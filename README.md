Assumptions made: Using the Jonesboro tax rate of 8.5%, Only apply the buy one get one half price deal once

I split the shopping cart and flower classes between 4 files.
Most of the heavy processing is done in Cart.cpp. The file contains all the methods necessary for 
emulating a shopping cart.

The add method pushes back the passed flower into the shopping cart. The get_ methods for tax 
subtotal, shipping, and total calculate and return the values that make up the total cost. 
They are used in the print method to give more information in the form of a receipt.

To use the program enter 1, 2, or 3, to select which flower to add to the cart.
After picking the flowers input 0 and hit enter to get the contents of the cart and their prices.
