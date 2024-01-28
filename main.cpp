#include <bits/stdc++.h>

using namespace std;

struct FoodItem {
    char name[50];
    double price;
    FoodItem* next;
};
void displayMenu(FoodItem* menu, const char* category) {
    cout << "---- " << category << " Menu ----\n";
    int itemNumber = 1;
    while (menu != nullptr) {
        cout << itemNumber << ". " << menu->name << " - ৳" << fixed << setprecision(2) << menu->price << "\n";
        menu = menu->next;
        itemNumber++;
    }
    cout << "------------------------\n";
}

FoodItem* selectItem(FoodItem* menu, int itemNumber) {
    FoodItem* selectedItem = menu;
    for (int i = 1; i < itemNumber && selectedItem != nullptr; i++) {
        selectedItem = selectedItem->next;
    }
    return selectedItem;
}
void addToOrder(FoodItem*& order, FoodItem* selectedItem) {
    if (order == nullptr) {
        order = new FoodItem{*selectedItem};
    } else {
        FoodItem* temp = order;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new FoodItem{*selectedItem};
    }
}




int main() {

    FoodItem* breakfastMenu = new FoodItem{"Eggs", 120.0, nullptr};
    breakfastMenu->next = new FoodItem{"Toast", 50.0, nullptr};
    breakfastMenu->next->next = new FoodItem{"Coffee", 25.0, nullptr};
    breakfastMenu->next->next->next = new FoodItem{"Pancakes", 80.0, nullptr};
    breakfastMenu->next->next->next->next = new FoodItem{"Omelette", 100.0, nullptr};



    FoodItem* lunchMenu = new FoodItem{"Soup", 90.0, nullptr};
    lunchMenu->next = new FoodItem{"Sandwich", 110.0, nullptr};
    lunchMenu->next->next = new FoodItem{"Salad", 75.0, nullptr};
    lunchMenu->next->next->next = new FoodItem{"Burger", 130.0, nullptr};
    lunchMenu->next->next->next->next = new FoodItem{"Pasta", 100.0, nullptr};


    FoodItem* dinnerMenu = new FoodItem{"Soup", 90.0, nullptr};
    dinnerMenu->next = new FoodItem{"Steak", 180.0, nullptr};
    dinnerMenu->next->next = new FoodItem{"Grilled Salmon", 160.0, nullptr};
    dinnerMenu->next->next->next = new FoodItem{"Roast Chicken", 150.0, nullptr};
    dinnerMenu->next->next->next->next = new FoodItem{"Pasta Alfredo", 130.0, nullptr};
    dinnerMenu->next->next->next->next->next = new FoodItem{"Vegetarian Stir-Fry", 110.0, nullptr};\

    FoodItem* foreignMenu = new FoodItem{"Sushi", 200.0, nullptr};
    foreignMenu->next = new FoodItem{"Pad Thai", 150.0, nullptr};
    foreignMenu->next->next = new FoodItem{"Tacos", 120.0, nullptr};
    foreignMenu->next->next->next = new FoodItem{"Pasta Carbonara", 160.0, nullptr};
    foreignMenu->next->next->next->next = new FoodItem{"Chicken Satay", 130.0, nullptr};

    FoodItem* selectedItems = nullptr;


      int option;
    do {
        cout << "-------- Main Menu --------" << endl;
        cout << "1. Breakfast Menu" << endl;
        cout << "2. Lunch Menu" << endl;
        cout << "3. Dinner Menu" << endl;
        cout << "4. Foreign Cuisine Menu" << endl;
        cout << "5. Add Item to Order" << endl;
        cout << "6. View Order" << endl;
        cout << "7. Payment" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1:
                displayMenu(breakfastMenu, "Breakfast");
                break;
            case 2:
                displayMenu(lunchMenu, "Lunch");
                break;
            case 3:
                displayMenu(dinnerMenu, "Dinner");
                break;
            case 4:
                displayMenu(foreignMenu, "Foreign Cuisine");
                break;
            case 5:
                int category;
                cout << "Select Category:" << endl;
                cout << "1. Breakfast" << endl;
                cout << "2. Lunch" << endl;
                cout << "3. Dinner" << endl;
                cout << "4. Foreign Cuisine" << endl;
                cout << "Enter your choice: ";
                cin >> category;
                int itemNumber;
                cout << "Enter Item Number: ";
                cin >> itemNumber;
                switch (category) {
                    case 1:
                        addToOrder(order, selectItem(breakfastMenu, itemNumber));
                        break;
                    case 2:
                        addToOrder(order, selectItem(lunchMenu, itemNumber));
                        break;
                    case 3:
                        addToOrder(order, selectItem(dinnerMenu, itemNumber));
                        break;
                    case 4:
                        addToOrder(order, selectItem(foreignMenu, itemNumber));
                        break;
                    default:
                        cout << "Invalid category!" << endl;
                        break;
                }
                break;
            case 6:
                displayOrder(order);
                break;
            case 7:
                if (order != nullptr) {
                    displayOrder(order);
                    confirmOrder();
                    clearOrder(order);
                } else {
                    cout << "No items in the order!" << endl;
                }
                break;
            case 8:
                cout << "Exiting program. Goodbye!" << endl;
                clearOrder(order);
                break;
            default:
                cout << "Invalid option!" << endl;
                break;
        }
    } while (option != 8);





return 0;
}
