#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> history = {"run", "stop"};
    for (auto& h : history) cout << h << endl;
}
