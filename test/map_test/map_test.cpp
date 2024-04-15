#include <iostream>
#include "pnc_map.h"
using namespace std;

void test_map() {

    cout << "Testing PNC Map..." << endl;
    PNC_Map pnc_map;
    pnc_map.mapInfo();
}

int main() {
    test_map();
    return 0;
}