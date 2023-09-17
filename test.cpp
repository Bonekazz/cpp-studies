#include <iostream>

using namespace std;

int main() {

    string name;
    string response;

    while (true) {
        cout << "what is your name? ";
        getline(cin, name);
        cout << "Hello, " << name << ". Do you want to continue the program?(s/n) ";
        getline(cin, response);

        if(response == "n") {
            cout << "Program Finished" << endl;
            break;
        }
        if(response == "s") {
            continue;
        }
        
        if (response != "s" || response != "n") {
            bool wrong = true;
            while (wrong == true){
                cout << "Wrong answer, " << name << ". Do you want to continue the program?(s/n) ";
                getline(cin, response);
                if(response == "s" || response == "n"){
                    break;
                }
            }
            continue;
        }
        
    }

    return 0;
}