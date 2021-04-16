#include <iostream>
#include "stabbingLines.h"
#include <fstream>
#include <string>
using namespace std;

void readPoints(ifstream& inPutPointFile, Point pointsArray[],const int MaxPntsSize, int& numPoints){
    int acc = 0 ;
    if (inPutPointFile.is_open()){
        cout << "PID" << " " << "X" << " " << "Y" << endl;
        while(! inPutPointFile.eof()){ //while the end of file is NOT reached
            inPutPointFile >> pointsArray[acc].Pid >> pointsArray[acc].x >> pointsArray[acc].y;
            cout << pointsArray[acc].Pid << "  "<< pointsArray[acc].x << "  "<< pointsArray[acc].y << endl;
            acc++;
        }
    }
 inPutPointFile.close();
}