// #include<iostream>
// using namespace std;

// int main()
// {
// 	int a[9] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
// 	int amount, i, temp;
	
// 	cout << "\nPlease Enter the Amount of Cash =  ";
// 	cin >> amount;
	
// 	temp = amount;
	
// 	for(i = 0; i < 9; i++)
//   	{
// 		cout << a[i] <<" Notes is = " << temp / a[i] << endl;
// 		temp = temp % a[i];
//   	}
		
//  	return 0;
// }
// #include<iostream>
// using namespace std;

// int main()
// {
//     int amount;
    
//     cout << "\nPlease Enter the Amount of Cash =  ";
//     cin >> amount;
    
//     int notes_1000 = amount / 1000;
//     amount %= 1000;
    
//     int notes_500 = amount / 500;
//     amount %= 500;
    
//     int notes_100 = amount / 100;
//     amount %= 100;
    
//     int notes_50 = amount / 50;
//     amount %= 50;
    
//     int notes_20 = amount / 20;
//     amount %= 20;
    
//     int notes_10 = amount / 10;
//     amount %= 10;
    
//     int notes_5 = amount / 5;
//     amount %= 5;
    
//     int notes_2 = amount / 2;
//     amount %= 2;
    
//     int notes_1 = amount / 1;
    
//     cout << "1000 Notes is = " << notes_1000 << endl;
//     cout << "500 Notes is = " << notes_500 << endl;
//     cout << "100 Notes is = " << notes_100 << endl;
//     cout << "50 Notes is = " << notes_50 << endl;
//     cout << "20 Notes is = " << notes_20 << endl;
//     cout << "10 Notes is = " << notes_10 << endl;
//     cout << "5 Notes is = " << notes_5 << endl;
//     cout << "2 Notes is = " << notes_2 << endl;
//     cout << "1 Notes is = " << notes_1 << endl;
    
//     return 0;
// }
#include <iostream>
using namespace std;

void countNotes(int amount) {
    int notes_1000 = 0, notes_500 = 0, notes_100 = 0, notes_50 = 0, notes_20 = 0, notes_10 = 0, notes_5 = 0, notes_2 = 0, notes_1 = 0;

    while (amount > 0) {
        switch (amount) {
            case 1000 ... 100000:
                notes_1000 = amount / 1000;
                amount %= 1000;
                break;
            case 500 ... 999:
                notes_500 = amount / 500;
                amount %= 500;
                break;
            case 100 ... 499:
                notes_100 = amount / 100;
                amount %= 100;
                break;
            case 50 ... 99:
                notes_50 = amount / 50;
                amount %= 50;
                break;
            case 20 ... 49:
                notes_20 = amount / 20;
                amount %= 20;
                break;
            case 10 ... 19:
                notes_10 = amount / 10;
                amount %= 10;
                break;
            case 5 ... 9:
                notes_5 = amount / 5;
                amount %= 5;
                break;
            case 2 ... 4:
                notes_2 = amount / 2;
                amount %= 2;
                break;
            case 1:
                notes_1 = amount;
                amount = 0;
                break;
        }
    }

    cout << "1000 Notes is = " << notes_1000 << endl;
    cout << "500 Notes is = " << notes_500 << endl;
    cout << "100 Notes is = " << notes_100 << endl;
    cout << "50 Notes is = " << notes_50 << endl;
    cout << "20 Notes is = " << notes_20 << endl;
    cout << "10 Notes is = " << notes_10 << endl;
    cout << "5 Notes is = " << notes_5 << endl;
    cout << "2 Notes is = " << notes_2 << endl;
    cout << "1 Notes is = " << notes_1 << endl;
}

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    countNotes(amount);
    return 0;
}