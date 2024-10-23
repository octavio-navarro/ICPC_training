#include <bits/stdc++.h>
using namespace std;

int main(){
    while (true){
        int duration, records;
        double down_payment, loan;

        cin>>duration>>down_payment>>loan>>records;
        if (duration < 0) break;

        vector<pair<int, double>> depreciation(records);
        for (int i = 0; i < records; ++i){
            cin>>depreciation[i].first>>depreciation[i].second; // Mes y tasa de depreciación
        }

        double monthly_payment = loan / duration;
        double car_value = loan + down_payment;
        int month = 0;
        int d_index = 0;
        double d_rate = depreciation[0].second; // Depresiación actual

        car_value -= car_value * drate;

        while (loan >= car_value){
            ++month;
            if (d_index < records-1 && depreciation[d_index+1].first == month){
                ++d_index;
                d_rate = depreciation[d_index].second;
            }

            car_value -= car_value * d_rate;
            loan -= monthly_payment;
        }

        cout<<month<<" month";
        if (month != 1){
            cout<<"s";
        }
        cout<<endl;
    }

    return 0;
}
