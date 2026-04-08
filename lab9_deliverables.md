Question 1
```cpp
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

void printStoreInfo();
double customizeItem(string& currentDescription, string& customizationName);
double customizeItem(string& currentDescription, string& customizationName, double cost);
double customizeItem(string& currentDescription, string& customizationName, double cost, int quantity);

int main() {
    printStoreInfo();

    double basePrice = 7.99;
    string drinkSpec = "Large Vanilla Frappe";

    double customTotal = 0.0;

    string c1 = "Half Ice";
    string c2 = "Snickers bar";
    string c3 = "Sprinkles";

    customTotal += customizeItem(drinkSpec, c1);
    customTotal += customizeItem(drinkSpec, c2, 1.99);
    customTotal += customizeItem(drinkSpec, c3, 0.49, 3);

    double stateTax = (basePrice + customTotal) * 0.06;
    double cityTax = (basePrice + customTotal) * 0.02;
    double subtotal = basePrice + customTotal;
    double total = subtotal + stateTax + cityTax;

    cout << "\nDrink Information:\n";
    cout << drinkSpec << "\n\n";

    cout << fixed << setprecision(2);
    cout << "Base Price: $" << basePrice << "\n";
    cout << "Customization Charges: $" << customTotal << "\n";
    cout << "Subtotal: $" << subtotal << "\n";
    cout << "State Tax (6%): $" << stateTax << "\n";
    cout << "City Tax (2%): $" << cityTax << "\n";
    cout << "Total: $" << total << "\n";

    return 0;
}

void printStoreInfo() {
    cout << "Welcome to CIS Smoothie Shop\n";
    cout << "123 Blend Ave, Your City\n";
    cout << "Phone: (555) 123-4567\n";
}

double customizeItem(string& currentDescription, string& customizationName) {
    currentDescription += "\n- " + customizationName + " (No Charge)";
    return 0.0;
}

double customizeItem(string& currentDescription, string& customizationName, double cost) {
    ostringstream out;
    out << fixed << setprecision(2) << cost;
    currentDescription += "\n- " + customizationName + " ($" + out.str() + ")";
    return cost;
}

double customizeItem(string& currentDescription, string& customizationName, double cost, int quantity) {
    double totalCost = cost * quantity;
    ostringstream out1, out2;
    out1 << fixed << setprecision(2) << cost;
    out2 << fixed << setprecision(2) << totalCost;
    currentDescription += "\n- " + customizationName + " x" + to_string(quantity) + " ($" + out1.str() + " each, $" + out2.str() + " total)";
    return totalCost;
}
```

Sample Output
```text
Welcome to CIS Smoothie Shop
123 Blend Ave, Your City
Phone: (555) 123-4567

Drink Information:
Large Vanilla Frappe
- Half Ice (No Charge)
- Snickers bar ($1.99)
- Sprinkles x3 ($0.49 each, $1.47 total)

Base Price: $7.99
Customization Charges: $3.46
Subtotal: $11.45
State Tax (6%): $0.69
City Tax (2%): $0.23
Total: $12.37
```

Question 2
```cpp
#include <iostream>
#include <string>
using namespace std;

class StoreInfo {
public:
    int storeNumber;
    string name;
    string address;
    string city;
    string phone;
    string managerName;

    void printHeader() {
        cout << "Store #" << storeNumber << " - " << name << "\n";
        cout << address << ", " << city << "\n";
        cout << "Phone: " << phone << "\n";
        cout << "Manager: " << managerName << "\n";
    }
};

int main() {
    StoreInfo myStoreInfo;

    myStoreInfo.storeNumber = 150;
    myStoreInfo.name = "CIS Smoothie Shop";
    myStoreInfo.address = "123 Blend Ave";
    myStoreInfo.city = "Springfield";
    myStoreInfo.phone = "(555) 123-4567";
    myStoreInfo.managerName = "Your Name";

    myStoreInfo.printHeader();

    return 0;
}
```

Sample Output
```text
Store #150 - CIS Smoothie Shop
123 Blend Ave, Springfield
Phone: (555) 123-4567
Manager: Your Name
```

Question 3
```cpp
#include <iostream>
#include <string>
using namespace std;

class StoreInfo {
private:
    int storeNumber;
    string name;
    string address;
    string city;
    string phone;
    string managerName;

public:
    void setStoreNumber(int value) { storeNumber = value; }
    void setName(string value) { name = value; }
    void setAddress(string value) { address = value; }
    void setCity(string value) { city = value; }
    void setPhone(string value) { phone = value; }
    void setManagerName(string value) { managerName = value; }

    int getStoreNumber() { return storeNumber; }
    string getName() { return name; }
    string getAddress() { return address; }
    string getCity() { return city; }
    string getPhone() { return phone; }
    string getManagerName() { return managerName; }

    void printHeader() {
        cout << "Store #" << storeNumber << " - " << name << "\n";
        cout << address << ", " << city << "\n";
        cout << "Phone: " << phone << "\n";
        cout << "Manager: " << managerName << "\n";
    }
};

int main() {
    StoreInfo myStoreInfo;

    myStoreInfo.setStoreNumber(150);
    myStoreInfo.setName("CIS Smoothie Shop");
    myStoreInfo.setAddress("123 Blend Ave");
    myStoreInfo.setCity("Springfield");
    myStoreInfo.setPhone("(555) 123-4567");
    myStoreInfo.setManagerName("Your Name");

    myStoreInfo.printHeader();

    return 0;
}
```

Sample Output
```text
Store #150 - CIS Smoothie Shop
123 Blend Ave, Springfield
Phone: (555) 123-4567
Manager: Your Name
```

Discussion Response (Question 3)
```text
The code for printHeader does not need to change because it is inside the class and can still access private data members directly. Also, the listed StoreInfo members do not include any time variables, so there are no time setters to validate.
```

Question 4
```cpp
#include <iostream>
#include <string>
using namespace std;

class StoreInfo {
private:
    int storeNumber;
    string name;
    string address;
    string city;
    string phone;
    string managerName;

public:
    StoreInfo(int sn, string n, string a, string c, string p, string m) {
        storeNumber = sn;
        name = n;
        address = a;
        city = c;
        phone = p;
        managerName = m;
    }

    void setStoreNumber(int value) { storeNumber = value; }
    void setName(string value) { name = value; }
    void setAddress(string value) { address = value; }
    void setCity(string value) { city = value; }
    void setPhone(string value) { phone = value; }
    void setManagerName(string value) { managerName = value; }

    int getStoreNumber() { return storeNumber; }
    string getName() { return name; }
    string getAddress() { return address; }
    string getCity() { return city; }
    string getPhone() { return phone; }
    string getManagerName() { return managerName; }

    void printHeader() {
        cout << "Store #" << storeNumber << " - " << name << "\n";
        cout << address << ", " << city << "\n";
        cout << "Phone: " << phone << "\n";
        cout << "Manager: " << managerName << "\n";
    }
};

int main() {
    StoreInfo myStoreInfo(150, "CIS Smoothie Shop", "123 Blend Ave", "Springfield", "(555) 123-4567", "Your Name");

    myStoreInfo.printHeader();

    return 0;
}
```

Sample Output
```text
Store #150 - CIS Smoothie Shop
123 Blend Ave, Springfield
Phone: (555) 123-4567
Manager: Your Name
```

Discussion Response (Question 4)
```text
The code for printHeader does not change. It still prints the same class data members. The only change is how those members are set: they are initialized by the constructor when the object is declared.
```

Question 5
```cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Smoothie {
public:
    string flavor;
    double price;
    int qty;
    double profit;
    int calories;

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

void displayMenu(Smoothie drinksToday[], int size);
void printDailyMax(Smoothie drinksToday[], int size);

int main() {
    Smoothie drinksToday[4] = {
        {"Banana", 7.99, 25, 4.35, 275},
        {"Vanilla", 5.59, 100, 3.10, 320},
        {"Protein", 8.99, 25, 5.55, 280},
        {"Berry", 7.59, 45, 4.50, 390}
    };

    displayMenu(drinksToday, 4);
    cout << "\n";
    printDailyMax(drinksToday, 4);

    return 0;
}

void displayMenu(Smoothie drinksToday[], int size) {
    cout << "CIS Smoothie Shop - Drinks Available Today\n";
    cout << "------------------------------------------\n";
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << drinksToday[i].getFlavor()
             << " (" << drinksToday[i].getCalories() << " calories)\n";
    }
}

void printDailyMax(Smoothie drinksToday[], int size) {
    double totalSales = 0.0;
    double totalProfit = 0.0;

    cout << fixed << setprecision(2);
    cout << "Daily Maximum Sales/Profit\n";
    cout << "--------------------------\n";

    for (int i = 0; i < size; i++) {
        cout << drinksToday[i].getFlavor()
             << " | Calories: " << drinksToday[i].getCalories()
             << " | Qty: " << drinksToday[i].getQty()
             << " | Max Sales: $" << drinksToday[i].maxSales()
             << " | Max Profit: $" << drinksToday[i].maxProfit() << "\n";

        totalSales += drinksToday[i].maxSales();
        totalProfit += drinksToday[i].maxProfit();
    }

    cout << "\nTotal Maximum Sales: $" << totalSales << "\n";
    cout << "Total Maximum Profit: $" << totalProfit << "\n";
}
```

Sample Output
```text
CIS Smoothie Shop - Drinks Available Today
------------------------------------------
1. Banana (275 calories)
2. Vanilla (320 calories)
3. Protein (280 calories)
4. Berry (390 calories)

Daily Maximum Sales/Profit
--------------------------
Banana | Calories: 275 | Qty: 25 | Max Sales: $199.75 | Max Profit: $108.75
Vanilla | Calories: 320 | Qty: 100 | Max Sales: $559.00 | Max Profit: $310.00
Protein | Calories: 280 | Qty: 25 | Max Sales: $224.75 | Max Profit: $138.75
Berry | Calories: 390 | Qty: 45 | Max Sales: $341.55 | Max Profit: $202.50

Total Maximum Sales: $1325.05
Total Maximum Profit: $760.00
```
