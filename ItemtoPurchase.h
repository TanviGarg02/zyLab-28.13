#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

/* Type your code here */
class ItemToPurchase{
private: 
string itemName;
int itemPrice;
int itemQuantity;

public:
ItemToPurchase();
void SetName(string name);
void SetPrice(int price);
void SetQuantity(int qty);

string GetName(string name);
int SetPrice(int price);
int SetQuantity(int qty);

void Print();

#endif
