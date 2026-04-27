#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item
{
private:
    string name;
    double price;

public:
    Item();
    Item(string n, double p);

    string getName();
    double getPrice();
};

#endif