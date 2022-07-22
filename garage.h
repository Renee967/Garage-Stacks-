#include <iostream>
#include <string>
#include "Stack.h"
#ifndef Garage_h
#define Garage_h
using namespace std;

struct car
{
    int moves;
    string plateNumber;
   
public:
bool operator==(const car&x)
{return(plateNumber==x.plateNumber);}
};

class GarageD
{
    private:
    car a;
    car b;
    Stack<car>lane1;
    Stack<car>lane2;
    Stack<car>street;
   
public:
      GarageD();
      void arrive(string vehicle);
      void depart(string vehicle);
 void Search(string vehicle);
};
#endif







