#include <iostream>
using std::cout;
using std::endl;

int main() {
    auto number = 5;
    for (auto i = number; i > 0 ; i--) {
        std::cout << "Ola, Planet!" << endl;
    }
    return 0;
}