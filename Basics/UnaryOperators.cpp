#include<iostream>
using namespace std;

int main() {
    int a = 6;
    int ans = ((++a)*(a++)) + ((--a)*(a--));
    cout << ans << endl;
    cout << a << endl;
    return 0;
}