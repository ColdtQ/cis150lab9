#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class StoreInfo
{
public:
    int storeNumber;
    string name;
    string address;
    string city;
    string phone;
    string managerName;

    void printHeader()
    {
        cout << "========================================\n";
        cout << "Store #" << storeNumber << " - " << name << "\n";
        cout << address << "\n";
        cout << city << "\n";
        cout << "Phone: " << phone << "\n";
        cout << "Manager: " << managerName << "\n";
        cout << "========================================\n";
    }
};

int main()
{
    StoreInfo myStoreInfo;
    myStoreInfo.storeNumber = 101;
    myStoreInfo.name = "Smoothie Central";
    myStoreInfo.address = "123 Main St";
    myStoreInfo.city = "Anytown, USA";
    myStoreInfo.phone = "(555) 123-4567";
    myStoreInfo.managerName = "Your Name";

    myStoreInfo.printHeader();

    return 0;
}
