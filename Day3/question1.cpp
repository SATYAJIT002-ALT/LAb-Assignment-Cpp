// 1. Design a C++ class  to manage a shopping list, allowing addition, removal, and display of items, along with total cost calculation.

#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

class Shopping
{
private:
    int itemcode[4]={0};
    int itemprice[4]={0};
    int count = 0;

public:
    void getItem()
    {
        cout << "\n--- Add Items to Cart ---\n";
        for (int i = 0; i < 4; i++)
        {
            cout << "Enter item code for item " << i + 1 << ": ";
            cin >> itemcode[i];
            cout << "Enter price for item " << i + 1 << ": ";
            cin >> itemprice[i];
            count++;
        }
        cout << "\nItems added to cart successfully!\n";
    }

    int displaySum()
    {
        int price = 0;
        for (int i = 0; i < 4; i++)
        {
            price += itemprice[i];
        }
        return price;
    }

    void displayItems()
    {
        cout << "\n--- Items in Cart ---\n";
        cout << left << setw(10) << "Item Code" << setw(10) << "Price" << endl;
        cout << "---------------------\n";
        for (int i = 0; i < 4; i++)
        {
            cout << left << setw(10) << itemcode[i] << setw(10) << itemprice[i] << endl;
        }
    }

    void itemRemove(int code)
    {
        bool found = false;
        for (int i = 0; i < 4; i++)
        {
            if (itemcode[i] == code)
            {
                itemprice[i] = 0;
                cout << "Item with code " << code << " removed successfully!\n";
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Item code " << code << " not found in the cart.\n";
        }
    }
};

int main()
{
    Shopping item;

    int choice;
    do
    {
        cout << "\n--- Shopping Cart Menu ---\n";
        cout << "1. Add Items to Cart\n";
        cout << "2. Display Total Price\n";
        cout << "3. Remove Item from Cart\n";
        cout << "4. Display Items in Cart\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            item.getItem();
            break;
        case 2:
            cout << "Total price is: " << item.displaySum() << endl;
            break;
        case 3:
            int code;
            cout << "Enter item code to remove: ";
            cin >> code;
            item.itemRemove(code);
            break;
        case 4:
            item.displayItems();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
