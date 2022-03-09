/* 
Write a program to accept the current Tempurature and display the following massages based on the range given on the table.
*/
#include<iostream> // This is the directive for input and output streams.
using namespace std; // use standard namespace
int main() //main function
{ //Open main function
	float temp; //Declare variables
	cout<<"Enter Temperature: "; // Ask the user to enter the tempurature
	cin>>temp; // accept the tempurature
	if (temp > 40 and temp <=54) // This block of codes are conditions to display massage based on the given range.
	{
		cout<< "Stay Hydrated" << endl; // Display output
	}
	else if (temp > 32 and temp <= 50) // Conditions
	{
		cout<< " Stay Cool and Safe!" << endl;// Display output
	}
	else if (temp > 31 and temp <=40) //Conditions
	{
		cout<< "Keep a sunblock handy!" << endl; // Display output
	}
	else if (temp >= 20 and temp <=25) // Conditions
	{
		cout<< "Always keep your cool!" << endl; // Display output
	}
	else if (temp < 20 ) // Conditions
	{
		cout<< "Cool breeze in the air!" << endl; // Display output
	}
	else if (temp > 54) // Conditions
	{
		cout<< "Out of range"<< endl; //Display output
	}
	
	return 0; //Return 0 to the OS
	
} // to close main function block
