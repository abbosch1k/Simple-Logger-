#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    cout << "Task scheduled\n";
    this_thread::sleep_for(chrono::milliseconds(300));
    cout << "Task executed\n";
}
