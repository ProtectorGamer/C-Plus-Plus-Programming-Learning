/*
8. WAP to develop a simple inventory management system using structuresthat:
- Stores details about each product in the store using a fixed-size array.
- Allows adding products to the inventory.
- Displays the details of all products in the inventory.
- Calculates the total value of all products in the inventory.

*/

#include <iostream>
using namespace std;

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    const int max_products = 100;
    Product inventory[max_products];
    int productCount = 0;

    int choice;

    do 
    {
        cout << "\nInventory Management System\n";
        cout << "1. Add Product\n";
        cout << "2. Display All Products\n";
        cout << "3. Calculate Total Value\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) 
        {
            case 1:
                if(productCount < max_products) 
                {
                    cout << "Enter product ID: ";
                    cin >> inventory[productCount].id;
                    cout << "Enter product name: ";
                    cin.getline(inventory[productCount].name, 50);
                    cout << "Enter quantity: ";
                    cin >> inventory[productCount].quantity;
                    cout << "Enter price: ";
                    cin >> inventory[productCount].price;
                    productCount++;
                } else {
                    cout << "Inventory is full!\n";
                }
                break;

            case 2:
                if(productCount == 0) {
                    cout << "No products in inventory.\n";
                } else {
                    cout << "\nProduct List:\n";
                    cout << "ID\tName\t\tQuantity\tPrice\n";
                    for(int i = 0; i < productCount; i++) {
                        cout << inventory[i].id << "\t" 
                             << inventory[i].name << "\t\t" 
                             << inventory[i].quantity << "\t\t" 
                             << inventory[i].price << "\n";
                    }
                }
                break;

            case 3:
                if(productCount == 0) {
                    cout << "No products to calculate.\n";
                } else {
                    float totalValue = 0;
                    for(int i = 0; i < productCount; i++) {
                        totalValue += inventory[i].quantity * inventory[i].price;
                    }
                    cout << "Total value of all products: " << totalValue << "\n";
                }
                break;

            case 4:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 4);

    return 0;
}
