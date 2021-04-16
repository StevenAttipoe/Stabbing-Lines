#include <iostream>
#include "stabbingLines.h"
#include <fstream>
#include <string>
using namespace std;
void printLineByCoords(LineId lid, Line linesArray[], const int MaxLnsSize, Point pointsArray[], const int MaxPntsSize){
    for(int a=0; a<MaxLnsSize; a++){
    int i= linesArray[a].p1;
    int j= 0;
    while(linesArray[i].p1 != pointsArray[j].Pid){
        j++;  } //Checks if the line coordinates is a point Id.
     cout << linesArray[a].Lid <<"("<<pointsArray[j].x<<","<<pointsArray[j].y<<")";

    int b= linesArray[a].p2;
    int c= 0;
    while(b != pointsArray[c].Pid){
        c++;  }
     cout <<"("<<pointsArray[c].x<<","<<pointsArray[c].y<<")"<<endl;
    }
     
}