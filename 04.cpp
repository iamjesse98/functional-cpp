#include<bits/stdc++.h>
using namespace std;

template <typename T1, typename T2>
auto add(T1 a, T2 b) -> decltype(a + b){
    return a + b;
}

int main(){
    cout << add(2, 7) << endl;
    cout << add(3, 6.89) << endl;
    return 0;
}
