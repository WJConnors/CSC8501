#include <iostream> 

using namespace std;

namespace luke { int dark = 0; int light = 10; }

namespace anakin { int dark = 10; int light = 0; }

int main() {
    using luke::dark; //0
    using anakin::light; //0

    cout << dark + light << endl; // 0
    dark = 5;
    cout << light + dark << endl; // 5
    for (int dark = 0; dark < luke::light; dark++) {
        anakin::dark = anakin::dark + dark; 
        cout << dark << endl; // 0-9
    }
    cout << anakin::dark + anakin::light << endl; // 55
    cout << dark << endl; // 5
};