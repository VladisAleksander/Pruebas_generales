#include <iostream>
using namespace std;

int main()
{
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter the letter you want to replace: ";
    char letter;
    cin >> letter;
    cout << "Your name with the letter " << letter << " is " << name << endl;
    return 0;
}