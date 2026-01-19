#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> tasks = {"compile", "link", "run"};
    for (auto& t : tasks) cout << t << endl;
}
