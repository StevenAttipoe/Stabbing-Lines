#include <iostream>
#include "stabbingLines.h"
#include <fstream>
#include <string>
using namespace std;

void getStabbedLines (const int xcoord, Line linesArray[], const int MaxLnsSize, const int NumLines, 
Point pointsArray[],const int MaxPtsSize, Line stabbedLines[], const int MaxStbSize, int& NumOfStbLines){
     int x1 ;
    int x2 ;

    for(int a=0; a<MaxLnsSize; a++){
        int i= linesArray[a].p1;
        int j= 0;
        while(linesArray[i].p1 != pointsArray[j].Pid){
            j++;  } //Checks if the line coordinates is a point Id.
        x1 = pointsArray[j].x;

        int b= linesArray[a].p2;
        int c= 0;
        while(b != pointsArray[c].Pid){
            c++;  }
        x2 = pointsArray[c].x;
    }
        
        for(int i=0; i<MaxLnsSize; i++){
            if(x2 >= xcoord){
                if(x1 >= xcoord){
                    stabbedLines[i] = linesArray[i];
                    
                }
            }
            cout<< " The stabbed lines' IDs are: "<<stabbedLines[i].Lid<<" "<<endl;
        }
}