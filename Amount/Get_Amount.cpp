#include "Amount.hpp"
#include <iostream>

Amount::Amount(std::string name, double p, int q) {
    itemName = name;
    price = p;
    quantity = q;
}

void Amount::SetItem(std::string name, double p, int q) {
    itemName = name;
    price = p;
    quantity = q;
}

double Amount::Get_Amount() const {
    return price * quantity;
}

void Amount::DisplayItem() const {
    std::cout << "Item: " << itemName << "\n";
    std::cout << "Price: RM" << price << "\n";
    std::cout << "Quantity: " << quantity << "\n";
    std::cout << "Total Amount: RM" << Get_Amount() << "\n";
}
