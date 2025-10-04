#include <iostream>
using namespace std;
int main() {
    const int size = 5; // Array size
    int arr[size];
    int sum = 0;

    cout << "Enter " << size << " numbers: ";

    // Taking input from the user
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Calculating the sum
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    cout << "The sum of the numbers is: " << sum << endl;

    return 0;
}
