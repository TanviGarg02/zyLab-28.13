#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase(){
  itemName = "none";
  itemPrice = 0;
  itemQuantity = 0;
}
void ItemToPurchase::SetName(string name){
  itemPrice = price;}

void ItemToPurchase::SetPrice(int price){
  itemName = name;}

void ItemToPurchase::SetQuantity(int quantity){
  itemQuantity = quantity;}

string ItemToPurchase::GetName(){
  return itemName;}  

int ItemToPurchase::GetPrice(){
  return itemPrice;}  

string ItemToPurchase::GetQuantity(){
  return itemQuantity;}  


/* Type your code here */
