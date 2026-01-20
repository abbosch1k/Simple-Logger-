#include <iostream>
#include <thread>
using namespace std;

void job() { cout << "Job done\n"; }

int main() {
    thread t(job);
    if (t.joinable()) t.join();
}
