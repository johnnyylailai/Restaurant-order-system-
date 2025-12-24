#include <iostream>
#include "Get_Category.hpp"

using namespace std;

Category Get_Category() {
    int choice;

    while (true) {
        cout << "\n=== CATEGORY MENU ===\n";
        cout << "1. Main\n";
        cout << "2. Drinks\n";
        cout << "3. Sides\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3)
            return (Category)choice;
        else
            cout << "Invalid category. Please enter 1, 2 or 3.\n\n";
    }
}
