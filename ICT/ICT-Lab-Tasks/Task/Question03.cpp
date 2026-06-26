#include <iostream>
#include <string>
using namespace std;

class Product {
    private:
        string name;
        double price;
    public:
        void setName (string Name) {
            name = Name;
            return;
        }
        void setPrice (double Price) {
            if (Price < 0) {
                cout << "Price cannot be negative!" << endl;
                return;
            }
            else {
                price = Price;
                return;
            }
        }
        string getName () {
            return name;
        }
        double getPrice () {
            return price;
        }
};

int main () {
    Product p1;
    p1.setName("Laptop");
    p1.setPrice(75000);
    cout << "The name of the product is: " << p1.getName() << " and it's price is: " << p1.getPrice() << endl;
}