#include<iostream>
using namespace std;

double xPowN(double x, int n) {
    if(n < 0) {
        x = 1/x;
        n = -n;
    }
    if(x == 0) return 0.0;
    if(n == 0) return 1.0;
    if(x == -1 && n%2 == 1) return -1.0;
    if(x == -1 && n%2 == 0) return 1.0;
    if(x == 1) return 1.0;

    double ans = 1;
    while(n > 0) {
        if(n%2 == 1) {
            ans *= x;
        }
        x *= x;
        n /= 2;
    }
    return ans;
}

int main() {
    double x = 2;
    int n = -1;
    cout<<x<<" power "<<n<<": "<<xPowN(x, n);
    return 0;
}