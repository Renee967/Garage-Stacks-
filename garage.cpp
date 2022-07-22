#include<iostream>
#include "Garage.h"
using namespace std;

GarageD::GarageD()
{
}


void GarageD::arrive(string vehicle)
{
if (!lane1.isFull())
{
cout << vehicle << "Vehicle is parked in lane 1. " << endl;
a.plateNumber = vehicle;
a.moves = 0;
lane1.push(a);
}
else if (!lane2.isFull()) {
cout << "lane 1 is full, the car is moving to lane 2. " << endl;
cout << vehicle<<"vehicle has been parked in lane 2. " << endl;
a.plateNumber = vehicle;
a.moves = 0;
lane2.push(a);
}
else
cout << "the lanes are both full, hence your car was not parked " << endl;
}

void GarageD::depart(string vehicle)
{
a.plateNumber = vehicle;
b.plateNumber = vehicle;

cout << endl;
if (lane1.Search(a))
{
while (a.plateNumber != lane1.Top().plateNumber)
{
b = lane1.Top();
b.moves++;
if (!lane2.isFull()) {
  lane2.push(b);
 lane1.pop();
 }
else {
street.push(b);
lane1.pop();
}
}
b = lane1.Top();
b.moves++;
cout << b.plateNumber << "Car is in lane 1 and has departed from lane1. " << "Total no of moves" << b.moves << endl;
lane1.pop();

}
else if (lane2.Search(a))
{
while (a.plateNumber != lane2.Top().plateNumber)
{
b = lane2.Top();
b.moves++;
if (!lane1.isFull())
{
 lane1.push(b);
 lane2.pop();
}
else {
street.push(b);
lane2.pop();
}
}
b = lane2.pop();
b.moves++;
cout << "the car departed from lane 2. " << b.plateNumber << "Number of moves" << b.moves << endl;

lane2.pop();
}
while (!street.isEmpty())
{
if (!lane1.isFull())
{

b = street.Top();
b.moves++;
lane1.push(street.pop());
street.pop();
}
else
{
b = street.Top();
b.moves++;
lane2.push(b);
street.pop();
}


}
}






















