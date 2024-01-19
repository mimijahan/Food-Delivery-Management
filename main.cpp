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


int main() {

    FoodItem* breakfastMenu = new FoodItem{"Eggs", 120.0, nullptr};
    breakfastMenu->next = new FoodItem{"Toast", 50.0, nullptr};
    breakfastMenu->next->next = new FoodItem{"Coffee", 25.0, nullptr};
    breakfastMenu->next->next->next = new FoodItem{"Pancakes", 80.0, nullptr};
    breakfastMenu->next->next->next->next = new FoodItem{"Omelette", 100.0, nullptr};
    breakfastMenu->next->next->next->next->next = new FoodItem{"Fruit Salad", 70.0, nullptr};
    breakfastMenu->next->next->next->next->next->next = new FoodItem{"Hash Browns", 60.0, nullptr};
    breakfastMenu->next->next->next->next->next->next->next = new FoodItem{"Muffin", 40.0, nullptr};
    breakfastMenu->next->next->next->next->next->next->next->next = new FoodItem{"Juice", 30.0, nullptr};
    breakfastMenu->next->next->next->next->next->next->next->next->next = new FoodItem{"Cereal", 35.0, nullptr};
    breakfastMenu->next->next->next->next->next->next->next->next->next->next = new FoodItem{"Waffles", 75.0, nullptr};


    FoodItem* lunchMenu = new FoodItem{"Soup", 90.0, nullptr};
    lunchMenu->next = new FoodItem{"Sandwich", 110.0, nullptr};
    lunchMenu->next->next = new FoodItem{"Salad", 75.0, nullptr};
    lunchMenu->next->next->next = new FoodItem{"Burger", 130.0, nullptr};
    lunchMenu->next->next->next->next = new FoodItem{"Pasta", 100.0, nullptr};
    lunchMenu->next->next->next->next->next = new FoodItem{"Pizza", 150.0, nullptr};
    lunchMenu->next->next->next->next->next->next = new FoodItem{"Steak", 180.0, nullptr};
    lunchMenu->next->next->next->next->next->next->next = new FoodItem{"Fried Rice", 120.0, nullptr};
    lunchMenu->next->next->next->next->next->next->next->next = new FoodItem{"Chicken Curry", 160.0, nullptr};
    lunchMenu->next->next->next->next->next->next->next->next->next = new FoodItem{"Sushi", 200.0, nullptr};
    lunchMenu->next->next->next->next->next->next->next->next->next->next = new FoodItem{"Chicken Sandwich", 110.0, nullptr};

    FoodItem* dinnerMenu = new FoodItem{"Soup", 90.0, nullptr};
    dinnerMenu->next = new FoodItem{"Steak", 180.0, nullptr};
    dinnerMenu->next->next = new FoodItem{"Grilled Salmon", 160.0, nullptr};
    dinnerMenu->next->next->next = new FoodItem{"Roast Chicken", 150.0, nullptr};
    dinnerMenu->next->next->next->next = new FoodItem{"Pasta Alfredo", 130.0, nullptr};
    dinnerMenu->next->next->next->next->next = new FoodItem{"Vegetarian Stir-Fry", 110.0, nullptr};
    dinnerMenu->next->next->next->next->next->next = new FoodItem{"Shrimp Scampi", 140.0, nullptr};
    dinnerMenu->next->next->next->next->next->next->next = new FoodItem{"Lobster Bisque", 200.0, nullptr};
    dinnerMenu->next->next->next->next->next->next->next->next = new FoodItem{"Beef Stroganoff", 170.0, nullptr};
    dinnerMenu->next->next->next->next->next->next->next->next->next = new FoodItem{"Vegetable Curry", 120.0, nullptr};
    dinnerMenu->next->next->next->next->next->next->next->next->next->next = new FoodItem{"Chicken Alfredo", 140.0, nullptr};

    FoodItem* selectedItems = nullptr;




return 0;
}
