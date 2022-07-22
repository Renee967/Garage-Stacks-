# Garage-Stacks-

To get familiar with Stack ADT. To learn how to implement Stacks using arrays, vectors, or linked lists.
Instructions
The  Parking Garage
The CSC326  Parking Garage contains 2 lanes, each capable of holding up to 10 cars. There is only a single entrance/exit to the garage at one end of the lanes.

If a customer arrives to pick up a car that is not nearest the exit, all cars blocking the cars' path are moved into the other lane. If more cars still must be moved out of the way, they go into the street. When the customer's car is driven out, all cars in the street must be put back into the garage.
Write a C++ program that reads input from a file (that you create). Each line in the file contains two fields separated by a blank: a code (A = an arriving car, or D= a car wishes to depart) and a license plate number (this could be a string). Cars are assumed to arrive and depart in the order specified by the input. The program should print a message whenever a car arrives or departs.
When a car arrives, the message should specify whether or not there is room in the garage for the car. If there is no room, the car leaves without entering. When a car departs, the message should include the number of times the car had to be moved out of the way so that other cars could depart. Each move from one lane to the other counts as 1; each move to the street counts as 1; each move from the street to a lane counts as 1. Don't forget to check for conditions such as someone wanting a car that's not in the garage, trying to park a car but both lanes are full, trying to park a car when only one lane is full, etc.
Your program should define an object from a 'garage' class to represent the 2 lanes and the street. The garage class will contain three stack objects one for each lane and the street. Use the dynamic array implementation of the stack. You'll need methods for manipulating the cars in the lanes, e.g. search for a car in a lane, move a car from a lane to somewhere, and perhaps higher-level methods like arrive and depart and methods to handle your output. This is NOT a complete list of methods needed, so feel free to experiment and expand the class definitions as much as you like. You may find it easier to have a car class or structure that contains the license plate and a counter for the number of moves the car makes.

