#include"bmi.h" 
#include<math.h>
#include<string>
#include<iostream>
using namespace std;

BMI::BMI(){
	height=0;
	mass=0;
}
BMI::BMI(int h){
	setstart(h);
}
void BMI::setstart(int hh){
	height=hh;
}
void BMI::setstart1(int m){
	mass=m;
}
float BMI::getstart(float a){
	b=(float)height/100;
	a=mass/pow(b,2);
	return a;
}
/*  int getstart{
    return height;
    return mass;
    }*/


string BMI::getcat(float a){

	if(a<15)
		return "Very severely underweight";
	else if(a>=15&&a<16)
		return "Severely underweight";
	else if(a>=16&&a<18.5)
		return"Underweight";
	else if(a>=18.5&&a<25)
		return"Normal";
	else if(a>=25&&a<30)
		return "Overweight";
	else if(a>=30&&a<35)
		return"Obese Class I (Moderately obese)";
	else if(a>=35&&a<40)
		return"Obese Class II (Severely obese)";
	else
		return"Obese Class III (Very severely obese)";
}
