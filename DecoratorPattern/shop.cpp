#include "Base/VegDelight.h"
#include "Base/VegMagrita.h"
#include "Decorator/Mushroom.h"
#include "Decorator/ExtraCheese.h"

#include "bits/stdc++.h"
using namespace std;

int main(){
    BasePizza* pizza = new VegDelight();
    cout << "Cost of VegDelight: " << pizza->cost() << endl;

    BasePizza* mushroomPizza = new Mushroom(pizza);
    cout << "Cost of VegDelight with Mushroom: " << mushroomPizza->cost() << endl;

    BasePizza* extraCheeseMushroomPizza = new ExtraCheese(mushroomPizza);
    cout << "Cost of VegDelight with Mushroom and Extra Cheese: " << extraCheeseMushroomPizza->cost() << endl;

    return 0;
}
