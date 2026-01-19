#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> jobs;
    jobs.push("Build");
    jobs.push("Test");

    while (!jobs.empty()) {
        cout << jobs.front() << endl;
        jobs.pop();
    }
}
