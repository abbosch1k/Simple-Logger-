#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream log("log.txt", ios::app);
    log << "Event\n";
    cout << "Written\n";
}
