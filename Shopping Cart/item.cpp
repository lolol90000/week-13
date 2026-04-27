#include "Item.h"

Item::Item()
{
    name = "";
    price = 0.0;
}

Item::Item(string n, double p)
{
    name = n;
    price = p;
}

string Item::getName()
{
    return name;
}

double Item::getPrice()
{
    return price;
}