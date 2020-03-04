#include <iostream>

using namespace std;
int main()
{
	const int BMI_CONSTANT = 703;  //Non-metric constant
	
	float weight;
	float height;
	float bodyMassIndex;
	
	cout << "Enter your weight in pounds." << endl;
	cin >> weight;       // Prompt for input of weight
	cout << "Enter your height in inches." << endl;
	cin >> height;        //Prompt for input of height
	
	
	//Calculate body mass index
	bodyMassIndex = weight * BMI_CONSTANT / (height * height);
	
	//Print output
	cout << "Your body mass index is " << bodyMassIndex << "." <<endl;
	cout << "Interpretations and instructions." << endl;
	if (bodyMassIndex < 20)
		cout << "Underweight: see a doctor" << endl;
	else if (bodyMassIndex <= 25)
		cout << "Normal" << endl;
	else if (bodyMassIndex <= 30)
		cout << "Overweight: see a doctor" << endl;
	else 
		cout << "Obese: see a doctor" << endl;
		
		return 0;
		
}
