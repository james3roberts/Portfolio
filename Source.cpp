#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string cityName; // variable to hold city name
	int fah, cel;	// variable to hold both temperatures

	ifstream inFile;	// variable to read file
	inFile.open("FahrenheitTemperature.txt");// file it is supposed to read
	ofstream outFile;	// variable to save new file
	outFile.open("CelsiusTemperature.txt"); // file it is supposed to save to
	if (!inFile) { // check if file can be opened
		cout << "File connot be opened." << endl; // show this if file can not be opened.
	}
	else {			//if file is opened
		while (inFile >> cityName >> fah) { // get city name and temperature
			cel = (int)round((fah - 32) * 5 / (double)9); // do the conversion
			outFile << cityName << " "<< cel << endl; // save the updated temperatures. 
		}
	}
	inFile.close();		//close the file.
	outFile.close();	//close the file.





	//No errors but does not open file. tryint a new idea. 
	//ifstream tempFS;
	//int num;

	//tempFS.open("FahrenheitTemperature.txt.txt");
	//if (!tempFS.is_open()) {
	//	cout << "Could not open file FahreheitTemperature.txt" << endl;
	//	return 1;
	//}
	//while (!tempFS.fail()) {
	//	tempFS >> num;
	//	cout << num << endl;
	//}

	return 0;

}