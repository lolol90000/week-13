#include <iostream>
#include "Item.h"
#include "Cart.h"
using namespace std;

int main()
{
    Cart cart(101);

    Item item1("Apple", 0.99);
    Item item2("Milk", 3.50);
    Item item3("Bread", 2.99);

    cart.addItem(item1);
    cart.addItem(item2);
    cart.addItem(item3);

    cart.printReceipt();

    return 0;
}