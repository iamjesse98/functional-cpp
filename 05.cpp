#include<bits/stdc++.h>
using namespace std;

auto sum = [](int a){
    return [=](int b){
        return [=](int c){
                return a+b+c;
            };
    };
};

int main(){
    cout << sum(2)(5)(3) << endl;
    return 0;
}
