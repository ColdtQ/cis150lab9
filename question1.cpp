/*
Name: Trevor Romano
Lab: CIS 150 Lab 9
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void printStoreHeader();
double customizeItem(string& currentDrinkDescription, string& customizationName);
double customizeItem(string& currentDrinkDescription, string& customizationName, double customizationCost);
double customizeItem(string& currentDrinkDescription, string& customizationName, double unitCost, int quantity);

int main()
{
    // print the shop header first
    printStoreHeader();

    // starting drink price and customization total
    double basePrice = 7.99;
    double totalCustomizationCost = 0;
    string drinkSpec = "Large Vanilla Frappe";

    string halfIce = "Half Ice";
    string snickersBar = "Snickers bar";
    string sprinkles = "Sprinkles";

    totalCustomizationCost += customizeItem(drinkSpec, halfIce);
    totalCustomizationCost += customizeItem(drinkSpec, snickersBar, 1.99);
    totalCustomizationCost += customizeItem(drinkSpec, sprinkles, 0.49, 3);

    double subtotal = basePrice + totalCustomizationCost;
    double stateTax = subtotal * 0.06;
    double cityTax = subtotal * 0.02;
    double total = subtotal + stateTax + cityTax;

    cout << fixed << setprecision(2);
    cout << "\nDrink Information:\n";
    cout << drinkSpec << "\n\n";
    cout << "Base Price: $" << basePrice << "\n";
    cout << "Total Customization Cost: $" << totalCustomizationCost << "\n";
    cout << "Subtotal: $" << subtotal << "\n";
    cout << "State Tax (6%): $" << stateTax << "\n";
    cout << "City Tax (2%): $" << cityTax << "\n";
    cout << "Total: $" << total << "\n";

    return 0;
}

void printStoreHeader()
{
    // simple banner for the output
    cout << "========================================\n";
    cout << "      CIS 150 Smoothie Shop - Lab 9     \n";
    cout << "========================================\n";
}

double customizeItem(string& currentDrinkDescription, string& customizationName)
{
    currentDrinkDescription += "\n" + customizationName;
    return 0;
}

double customizeItem(string& currentDrinkDescription, string& customizationName, double customizationCost)
{
    currentDrinkDescription += "\n" + customizationName + " (+$" + to_string(customizationCost) + ")";
    return customizationCost;
}

double customizeItem(string& currentDrinkDescription, string& customizationName, double unitCost, int quantity)
{
    double totalCost = unitCost * quantity;
    currentDrinkDescription += "\n" + customizationName + " x" + to_string(quantity) + " (+$" + to_string(totalCost) + ")";
    return totalCost;
}
