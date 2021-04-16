#include <iostream>
#include "stabbingLines.h"
#include <fstream>
#include <string>
using namespace std;

void readLines(ifstream& inPutLineFile, Line linesArray[],const int MaxLnsSize, int& numLines){
    int acc = 0 ;
    if (inPutLineFile.is_open()){
        cout << "Lid" << "   " << "P1" << " " << "P2" << endl;
        while(! inPutLineFile.eof()){ //while the end of file is NOT reached
            inPutLineFile >> linesArray[acc].Lid >> linesArray[acc].p1 >> linesArray[acc].p2;
            cout << linesArray[acc].Lid << "  "<< linesArray[acc].p1 << "  "<< linesArray[acc].p2 << endl;
            acc++;
        }
    }
 inPutLineFile.close();
}