#include <iostream>

using namespace std;

int Euclid_div(int, int);
int Euclid_sub(int, int);

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Euclid's division algorithm: " << Euclid_div(a, b) << "\nEuclid's subtraction algorithm: "  << Euclid_sub(a ,b);
    return 0;
}
int Euclid_div(int a, int b){
    while ((a) && (b))
        if(a > b)
            a %= b;
        else if (b > a)
            b %= a;
    return a + b;
}
int Euclid_sub(int a, int b){
    while (a != b)
        if(a > b)
            a -= b;
        else if (b > a)
            b -= a;
    return a;
}
