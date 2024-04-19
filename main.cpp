#include <iostream>
#include "ItemToPurchase.h"

int main() {
    // Prompting for item 1
    cout << "Item 1" << endl;
    ItemToPurchase item1;

    string name;
    int price, quantity;

    cout << "Enter the item name:" << endl;
    getline(cin, name);
    item1.SetName(name);

    cout << "Enter the item price:" << endl;
    cin >> price;
    item1.SetPrice(price);

    cout << "Enter the item quantity:" << endl;
    cin >> quantity;
    item1.SetQuantity(quantity);
    
    cin.ignore(); // Ignore newline character left in buffer

    // Prompting for item 2
    cout << "\nItem 2" << endl;
    ItemToPurchase item2;

    cout << "Enter the item name:" << endl;
    getline(cin, name);
    item2.SetName(name);

    cout << "Enter the item price:" << endl;
    cin >> price;
    item2.SetPrice(price);

    cout << "Enter the item quantity:" << endl;
    cin >> quantity;
    item2.SetQuantity(quantity);
    
    cin.ignore(); // Ignore newline character left in buffer

    // Calculating total cost
    int totalCost = (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity());

    // Outputting total cost
    cout << "\nTOTAL COST" << endl;
    cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << (item1.GetPrice() * item1.GetQuantity()) << endl;
    cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << (item2.GetPrice() * item2.GetQuantity()) << endl;
    cout << "\nTotal: $" << totalCost << endl;

    return 0;
}
