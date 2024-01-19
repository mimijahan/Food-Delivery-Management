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
