#ifndef AMOUNT_HPP
#define AMOUNT_HPP

#include <string>

class Amount {
private:
    std::string itemName;
    double price;
    int quantity;

public:
    
    Amount(std::string name = "", double p = 0.0, int q = 0);

    
    void SetItem(std::string name, double p, int q);

    
    double Get_Amount() const;

    
    void DisplayItem() const;
};

#endif
