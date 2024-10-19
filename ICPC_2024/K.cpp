#include <bits/stdc++.h>

using namespace std;

using v_i = vector<int>;
using s_i = set<int>;
using m_ii = map<int, int>; 

#define pVI(data){ for(int d : data) cout << d << " "; cout << endl; }

int kitchen_closing(void) {
    v_i v(3);

    // N_Ingredients, N_dishes, N_Orders
    for (int &e : v) cin >> e;

    v_i ingredients(v[0]);

    // Availability of each ingredient
    for (int &e : ingredients) cin >> e;

    map<int, vector<v_i>> dishes;

    // Dishes description
    for (int i = 0; i < v[1]; i++) {
        int diff_ing;
        cin >> diff_ing;

        vector<v_i> dish;

        for (int j = 0; j < diff_ing; j++) {
            v_i ing_quant(2);

            for (int &e : ing_quant) cin >> e;

            dish.push_back(ing_quant);
        }
        dishes[i] = dish;

    }

    int served = 0;

    // Go through the orders
    for (int i = 0; i < v[2]; i++) {
        int num;
        cin >> num;
        v_i order(num);
        for (int &e : order) cin >> e;

        // Check if the dish is possible
        for (int dish : order) {
            for (v_i ing : dishes[dish - 1]) {
                if (ingredients[ing[0] - 1] >= ing[1])
                {
                    ingredients[ing[0] - 1] -= ing[1];
                }
                else
                    return served;
            }
        }
        served += 1;
    }

    return served;
}

int main() {
    int s = kitchen_closing();

    printf("%d\n", s);

    return 0;
}