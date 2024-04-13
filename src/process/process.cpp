#include <iostream>
#include "process.h"

using namespace std;

void Process::planProcess()
{
    cout << "Planning process started..." << endl;
    my_map.mapInfo();
    cout << "Planning process completed." << endl;
}