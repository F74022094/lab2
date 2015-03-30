#include<unistd.h>
#include<string>
using namespace std;
class BMI{
	public:
		BMI();
		BMI(int h);
		void setstart(int hh);
		void setstart1(int m);
		float getstart(float a);
     		string getcat(float a);
	private:
		int height;
		int mass;
		float b;
};
