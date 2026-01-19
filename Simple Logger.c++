#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream log("app.log", ios::app);
    log << "Application started\n";
    cout << "Logged\n";
}
