#include <iostream>

using namespace std;

int main() {

    string names[4] = {"Hierro", "Henze", "Antonio", "Rammyne"};
    for (string i : names){
        cout << i << endl;
    }

    {
        int x = 5;
        cout << x << endl;
    }

    return 0;
}