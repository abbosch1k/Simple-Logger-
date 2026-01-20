#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, string> cfg;
    cfg["port"] = "8080";
    cout << cfg["port"] << endl;
}
