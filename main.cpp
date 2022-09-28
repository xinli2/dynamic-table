#include <iostream>
#include <fstream>
#include <cmath>

#include "DynamicTable.h"
#include "Timer.h"


using namespace std;

int main() {

    int op = 10;
    Timer time;
    ofstream outFile1 = ofstream("results_dummy.txt");
    ofstream outFile2 = ofstream("results.txt");
    for (op = 1; op < 1000; op++) {

        DynamicTable table1 = DynamicTable();
        time.start();
        for (int i = 0; i < op; i++) {
            table1.insert(i, true);
        }

        //table1.print();  //test code

        time.stop();
        outFile1 << time.getElapsedTime() << endl;
        cout << time.getElapsedTime() << endl;
        DynamicTable table2 = DynamicTable();
        time.start();
        for (int i = 0; i < op; i++) {
            table2.insert(i, true);
        }
        time.stop();
        outFile2 << time.getElapsedTime() << endl;
        cout << time.getElapsedTime() << endl;
    }

    outFile1.close();
    outFile2.close();

    return 0;
}
