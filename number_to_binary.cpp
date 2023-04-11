#include <iostream>
#include <conio.h>
#include <windows.h> //on linux type <unistd.h>
using namespace std;

int main() {

    int numbers;
    cout << "enter a number between 0 and 9\n";
    cin >> numbers;
    system("cls"); //on linux type system("clear")

    switch (numbers) {

        case 0 :
        cout << "0 to Binary: 0000";
        getch();
        break;

        case 1 :
        cout << "1 to Binary: 0001";
        getch();
        break;

        case 2 :
        cout << "2 to Binary: 0010";
        getch();
        break;

        case 3 :
        cout << "3 to Binary: 0011";
        getch();
        break;

        case 4 :
        cout << "4 to Binary: 0100";
        getch();
        break;

        case 5:
        cout << "5 to Binary: 0101";
        getch();
        break;

        case 6:
        cout << "6 to Binary: 0110";
        getch();
        break;

        case 7:
        cout << "7 toBinary: 0111";
        getch();
        break;

        case 8:
        cout << "8 to Binary: 1000";
        getch();
        break;

        case 9:
        cout << "9 to Binary: 1001";
        getch();
        break;

        default:
        cout << "Invalid input. Please enter a number between 0 and 9.";
        Sleep(2000);
   }

    
   
    return 0;
}