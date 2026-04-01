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
    StoreInfo myStoreInfo;

    myStoreInfo.setStoreNumber(101);
    myStoreInfo.setName("Smoothie Central");
    myStoreInfo.setAddress("123 Main St");
    myStoreInfo.setCity("Anytown, USA");
    myStoreInfo.setPhone("(555) 123-4567");
    myStoreInfo.setManagerName("Your Name");

    myStoreInfo.printHeader();

    return 0;
}
