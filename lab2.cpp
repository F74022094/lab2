#include"bmi.h"
#include<iostream>
#include<string>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{     BMI hgh;
	string headline,category;
	float height, mass,bmi;
	ifstream inFile("filein", ios::in);
	if(!inFile) {
		cerr << "Failed opening" << endl;
		exit(1);
	}
	ofstream outFile("fileout", ios::out);
	if(!outFile) {
		cerr << "Failed opening" << endl;
		exit(1);
	}
	getline(inFile, headline);
	cout << headline << endl;
	while(inFile >> height >> mass ) {
		cout  <<height << "\t"<<mass  << "\t"; 

		hgh.setstart1(mass);
		hgh.setstart(height);
		bmi=hgh.getstart(bmi);
		string category=hgh.getcat(bmi);
if(height!=0&&mass!=0){
		outFile<< bmi << "\t"<<category<<endl;
}	
}
	return 0;
}         


