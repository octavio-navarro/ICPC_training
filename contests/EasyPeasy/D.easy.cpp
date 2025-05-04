#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while (cin>>n && n != 0){
        int result = n;
        while (result >= 10){
            int sum = 0;
            while (result > 0){
                sum += result % 10;
                result /= 10;
            }
            result = sum;
        }
        cout<<result<<endl;
    }
    return 0;
}