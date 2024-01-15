#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Variable Declaration
	int userOpt;
	
	// Give the user option to choose from
	cout << "Choose an Option of Operation from the list below"<<endl;
	cout << "1. Check Odd or Even Numbers \n2. Check Leap Year\n3. Check Largest Number" << endl;
	cin >> userOpt;
	
	switch(userOpt){
		case 1:
			int num;
			cout << "Enter the number";
			cin >> num;
			if((num % 2) == 0){
				cout << num << " is an even number" << endl;
			}else{
				cout << num << " is an odd number" << endl;
			}
			break;
		
		case 2:
			int year;
			cout << "Enter a year to confirm if it is a leap year" << endl;
			cin >> year;
			if((year % 4) == 0){
				cout << year << " is a leap year" << endl;
			}else{
				cout << year << " is not a leap year" << endl;
			}
			break;
			
		case 3:
			int num1, num2;
			cout << "Enter the number 1";
			cin >> num1;
			cout << "Enter the number 2";
			cin >> num2;
			
			if(num1 > num2){
				cout << num1 << " is larger than " << num2 << endl;
			}else if(num2 > num1){
				cout << num2 << " is larger than " << num1 << endl;
			}else{
				cout << num1 << " is equal to " << num2 << endl;
			}
			break;
			
		default:
			cout << "Invalid Input" << endl;
			
	}
	
	return 0;
}
