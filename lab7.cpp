#include "lab7.h"

using namespace std;

void conversions(string inputfile, string outputfile) {
	string command;
	int x1, x2, x3, toSecondsAnswer;
	double d1;
	double fromSecondsAnswer, toCelsiusAnswer, toFahrenheitAnswer;
	double toInchesAnswer, toCentimetersAnswer;
	double toMilesAnswer, toKilometersAnswer;

	ifstream in(inputfile);
	ofstream out(outputfile);

	//out << "lab7 input file name =" << inputfile << endl;
	//out << "lab7 output file name =" << outputfile << endl;
	
	in >> command;

	while( !in.fail() ) {
		// out << "Command: " << command << endl;
		if(command.compare("to-seconds")==0){
			in >> x1; in.ignore();
			in >> x2; in.ignore();
			in >> x3;
			//to-seconds
			toSecondsAnswer = toSeconds (x1, x2, x3);
			out << "Command: " << command << " " << x1 << " " << x2 << " " << x3 << " " << toSecondsAnswer << endl;
		}	
		else if(command.compare("from-seconds")==0){
			in >> x1;
			//from-seconds
			fromSeconds(x1, x2, x3);
			out << "Command: " << command << " " << x1 << " " << x2 << ":" << x3 << endl;
		}	
		else if(command.compare("to-Celsius")==0){
			in >> d1; 
			//to-Celsius
			toCelsiusAnswer = toCelsius(d1);
			out << "Command: " << command << " " << d1 << " " << toCelsiusAnswer << endl;
		}
		else if(command.compare("to-Fahrenheit")==0){
			in >> d1;	
			//to-Fahrenheit
			toFahrenheitAnswer = toFahrenheit(d1);
			out << "Command: " << command << " " << d1 << " " << toFahrenheitAnswer << endl;
		}
		else if(command.compare("to-inches")==0){
			in >> d1;	
			//to-inches
			toInchesAnswer = toInches(d1);
			out << "Command: " << command << " " << d1 << " " << toInchesAnswer << endl;
		}
		else if(command.compare("to-centimeters")==0){
			in >> d1;	
			//to-centimeters
			toCentimetersAnswer = toCentimeters(d1);
			out << "Command: " << command << " " << d1 << " " << toCentimetersAnswer << endl;
		}
		else if(command.compare("to-miles")==0){
			in >> d1;	
			//to-miles
			toMilesAnswer = toMiles(d1);
			out << "Command: " << command << " " << d1 << " " << toMilesAnswer << endl;
		}
		else if(command.compare("to-kilometers")==0){
			in >> d1;	
			//to-kilometers
			toKilometersAnswer = toKilometers(d1);
			out << "Command: " << command << " " << d1 << " " << toKilometersAnswer << endl;
		}
		else{
			in >> d1; 
			out << "Unknown command: " << command << endl;
		}
		in >> command;
	}
}

void fromSeconds(int time, int& minutes, int& seconds) {
	
	minutes = time / 60;
	seconds = time % 60;
}

int toSeconds(int hours, int minutes, int seconds) {
	return hours * 60 * 60 + minutes * 60 + seconds;
}

double toCelsius(double degrees) {

	const double CTOF = 5.0 / 9.0;
	return (degrees - 32) * CTOF;
}

double toFahrenheit(double degress) {

	const double FTOC = 9.0 / 5.0;
	return degress*FTOC + 32;
}

double toInches(double centimeters) {

	const double CTOI = 2.54;
	return centimeters / CTOI;
}

double toCentimeters(double inches) {

	const double CTOI = 2.54;
	return inches * CTOI;
}

double toMiles(double kilometers) {

	const double KTOM = 1.609344;
	return kilometers / KTOM;
}

double toKilometers(double miles) {

	const double KTOM = 1.609344;
	return miles*KTOM;
}
