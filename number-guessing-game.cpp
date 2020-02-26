#include <iostream>
using namespace std;

int main() 
{
    cout << string(50, '\n');
    int x;
    int num;
    srand (time(NULL));
    num = rand() % 10 + 1;
    cout << "Please guess a number between 1 and 10:";
    cin >> x;
    while(x != num) {
        while(cin.fail()) {
            cout << "Please enter an integer." << endl;
            cout << "Please guess a number between 1 and 10:";
            cin.clear();
            cin.ignore(256,'\n');
            cin >> x;
            while (x == num){
                goto HACK;
            }}
        cout << "Guess again." << endl;
        cout << "Please guess a number between 1 and 10:";
        cin >> x;
    }
    HACK:
    return x;
}