#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> buf;
    buf.push_back(1);
    buf.push_back(2);
    buf.pop_front();
    cout << buf.front() << endl;
}
