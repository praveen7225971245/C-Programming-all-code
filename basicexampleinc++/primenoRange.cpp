#include<iostream>
using namespace std;
int main() {
    int n1=1, n2=100, count = 0;
    // cout << "Enter two numbers (interval): ";
    // cin >> n1 >> n2;
    // cout << "Prime numbers between " << n1 << " and " << n2 << " are: ";
    for (int i = n1; i <= n2; i++) {
        if (i == 0 || i == 1) {
            continue;
        } else {
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    count++;
                    break;
                }
            }
            if (count == 0) {
                cout << i << " ";
            }
            count = 0;
            
        }
    }
    return 0;
}