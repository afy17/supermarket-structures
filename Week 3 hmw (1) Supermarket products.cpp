#include <iostream>
using namespace std;

// shop ---> M&S Foodhall

// put all variables that describe ice cream in here
// structure is like a blueprint/model.. don't add data here
struct IceCream {    
    string productName;
    string flavour;
    string countryOfOrigin;  
    string storage;
    string bestBefore;
    string vegetarian;
    string organic;
    string recyclable;
    float price;
    float sugars;
    int calories;   
    int quantity;
    int servings;

    // functions in structure related to its object
    void highInSugar() {
        if (sugars >= 25)
            cout << "\nThis product is extremely high in sugar." << endl;
        else if (sugars <= 25 && sugars >= 15)
            cout << "\nThis product is high in sugar." << endl;
        else
            cout << "\nThis product has a moderate amount of sugar." << endl;
    }

    void highInCalories() {
        if (calories >= 500)
            cout << "\nThis product is extremely high in calories." << endl;
        else if (calories <= 500 && calories >= 350)
            cout << "\nThis product is high in calories." << endl;
        else
            cout << "\nThis product has a moderate amount of calories." << endl;
    }

};

// function to print out ice cream info 
void printIceCreamInfo(IceCream icecream) {
    cout << "\nProduct Name: " << icecream.productName << endl;
    cout << "Flavour: " << icecream.flavour << endl;
    cout << "Price: $" << icecream.price << endl;
    cout << "Amount of sugar per 100g: " << icecream.sugars << " g" << endl;
    cout << "Calories per 100g: " << icecream.calories << " kcal" << endl;
    cout << "Suitable for vegetarians: " << icecream.vegetarian << endl;
    cout << "Organic ingredients: " << icecream.organic << endl;
    cout << "Country of Origin: " << icecream.countryOfOrigin << endl;
    cout << "Best Before: " << icecream.bestBefore << endl;
    cout << "Servings: " << icecream.servings << endl;
    cout << "Quantity in grams: " << icecream.quantity << " g" << endl;
    cout << "Storage: " << icecream.storage << endl;
    cout << "Recyclable: " << icecream.recyclable << endl;
}

int main()
{
    IceCream icecream1;
    icecream1.productName = "West Country Madagascan Vanilla Ice Cream";
    icecream1.flavour = "Madagascan Vanilla";
    icecream1.price = 4.25;
    icecream1.sugars = 15.7;
    icecream1.calories = 228;
    icecream1.vegetarian = "Yes";
    icecream1.organic = "Yes";
    icecream1.countryOfOrigin = "United Kingdom";
    icecream1.bestBefore = "One month";
    icecream1.servings = 5;
    icecream1.quantity = 500;
    icecream1.storage = "Keep Frozen";
    icecream1.recyclable = "Yes";

    IceCream icecream2;
    icecream2.productName = "Strawberry Ice Cream Cones";
    icecream2.flavour = "Strawberry";
    icecream2.price = 2.65;
    icecream2.sugars = 23.6;
    icecream2.calories = 375;
    icecream2.vegetarian = "Yes";
    icecream2.organic = "No";
    icecream2.countryOfOrigin = "United Kingdom";
    icecream2.bestBefore = "One month";
    icecream2.servings = 4;
    icecream2.quantity = 440;
    icecream2.storage = "Keep Frozen";
    icecream2.recyclable = "Yes";
    
    // calling functions 
    printIceCreamInfo(icecream1);
    icecream1.highInSugar();
    icecream1.highInCalories();
    printIceCreamInfo(icecream2);
    icecream2.highInSugar();
    icecream2.highInCalories();

    system("pause>0");
}

