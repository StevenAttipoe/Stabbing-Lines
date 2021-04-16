#include <iostream>
#include <fstream>
#include "readPoints.cpp"
#include "readLines.cpp"
#include "printLinebyCoords.cpp"
#include "getStabLines.cpp"

using namespace std;

int main(int argc, char *argv[]){
    Point pointsArr[MAXARRAYSIZE];
    Line linesArr[MAXARRAYSIZE];
    int const maxPtSize =8;
    int numPoint = 8;
    int const maxLnSize = 5;
    int numLine = 5;
    ifstream pointsIn("Points.txt");
    ifstream LinesIn("Lines.txt");

    readPoints(pointsIn,pointsArr,maxPtSize,numPoint);
    readLines(LinesIn,linesArr,maxLnSize,numLine);

    LineId lid;
    printLineByCoords(lid, linesArr, maxLnSize,pointsArr, maxPtSize);

    Line stabbedLinesArr[MAXARRAYSIZE];
    int maxStbSize;
    int numOfStbLines;
    getStabbedLines(2,linesArr,maxLnSize,numLine,pointsArr,maxPtSize,stabbedLinesArr,maxStbSize,numOfStbLines);
    cout<<" "<<endl;
    getStabbedLines(-1,linesArr,maxLnSize,numLine,pointsArr,maxPtSize,stabbedLinesArr,maxStbSize,numOfStbLines);
    cout<<" "<<endl;
    getStabbedLines(0,linesArr,maxLnSize,numLine,pointsArr,maxPtSize,stabbedLinesArr,maxStbSize,numOfStbLines);
    return 0;
}