#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    cout << "Heartbeat\n";
    this_thread::sleep_for(chrono::seconds(1));
}
