#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Smoothie
{
public:
    string flavor;
    double price;
    int qty;
    double profit;
    int calories;

    Smoothie()
    {
        flavor = "";
        price = 0;
        qty = 0;
        profit = 0;
        calories = 0;
    }

    Smoothie(string f, double p, int q, double prof, int c)
    {
        flavor = f;
        price = p;
        qty = q;
        profit = prof;
        calories = c;
    }

    void setFlavor(string value) { flavor = value; }
    void setPrice(double value) { price = value; }
    void setQty(int value) { qty = value; }
    void setProfit(double value) { profit = value; }
    void setCalories(int value) { calories = value; }

    string getFlavor() { return flavor; }
    double getPrice() { return price; }
    int getQty() { return qty; }
    double getProfit() { return profit; }
    int getCalories() { return calories; }

    double maxSales() { return price * qty; }
    double maxProfit() { return profit * qty; }
};

void printStoreHeader();
void displayMenu(Smoothie drinksToday[], int size);
void printDailyMax(Smoothie drinksToday[], int size);

int main()
{
    Smoothie drinksToday[4] = {
        Smoothie("Banana", 7.99, 25, 4.35, 275),
        Smoothie("Vanilla", 5.59, 100, 3.10, 320),
        Smoothie("Protein", 8.99, 25, 5.55, 280),
        Smoothie("Berry", 7.59, 45, 4.50, 390)
    };

    displayMenu(drinksToday, 4);
    cout << "\n";
    printDailyMax(drinksToday, 4);

    return 0;
}

void printStoreHeader()
{
    cout << "========================================\n";
    cout << "         CIS 150 Smoothie Shop          \n";
    cout << "========================================\n";
}

void displayMenu(Smoothie drinksToday[], int size)
{
    printStoreHeader();
    cout << "Drinks Available Today:\n";

    for (int i = 0; i < size; i++)
    {
        cout << "- " << drinksToday[i].flavor
             << " (" << drinksToday[i].calories << " calories)\n";
    }
}

void printDailyMax(Smoothie drinksToday[], int size)
{
    double totalMaxSales = 0;
    double totalMaxProfit = 0;

    cout << fixed << setprecision(2);
    cout << "Daily Maximums:\n";

    for (int i = 0; i < size; i++)
    {
        double itemMaxSales = drinksToday[i].maxSales();
        double itemMaxProfit = drinksToday[i].maxProfit();

        cout << drinksToday[i].flavor
             << " | Calories: " << drinksToday[i].calories
             << " | Qty: " << drinksToday[i].qty
             << " | Max Sales: $" << itemMaxSales
             << " | Max Profit: $" << itemMaxProfit << "\n";

        totalMaxSales += itemMaxSales;
        totalMaxProfit += itemMaxProfit;
    }

    cout << "Total Maximum Sales for the Day: $" << totalMaxSales << "\n";
    cout << "Total Maximum Profit for the Day: $" << totalMaxProfit << "\n";
}
