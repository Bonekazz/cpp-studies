#include <iostream>

using namespace std;

int main() {

    string names[4] = {"Hierro", "Henze", "Antonio", "Rammyne"};
    for (string i : names){
        cout << i << endl;
    }

    return 0;
}