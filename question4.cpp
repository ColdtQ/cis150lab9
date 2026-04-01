/*
Name: Trevor Romano
Lab: CIS 150 Lab 9
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class StoreInfo
{
private:
    int storeNumber;
    string name;
    string address;
    string city;
    string phone;
    string managerName;

public:
    StoreInfo(int sNumber, string sName, string sAddress, string sCity, string sPhone, string sManagerName)
    {
        storeNumber = sNumber;
        name = sName;
        address = sAddress;
        city = sCity;
        phone = sPhone;
        managerName = sManagerName;
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
    // build store info using the constructor
    StoreInfo myStoreInfo(101, "Smoothie Central", "123 Main St", "Anytown, USA", "(555) 123-4567", "Your Name");

    // print the formatted header lines
    myStoreInfo.printHeader();

    return 0;
}
