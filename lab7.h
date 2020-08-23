#ifndef LAB7
#define LAB7

#include <fstream>
#include <sstream>  
#include <string>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

void script(void);
void fromSeconds(int time, int& minutes, int& seconds);
int toSeconds(int hours, int minutes, int seconds);

double toCelsius(double degrees);
double toFahrenheit(double degress);

double toInches(double centimeters);
double toCentimeters(double inches);

double toMiles(double kilometers);
double toKilometers(double miles);
	
void conversions(std::string input, std::string output);

#endif