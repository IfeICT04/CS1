#include <iostream>
using namespace std;


int main(int argc, char *argv[]) {
	

	
	int princessCal;
	cout <<"1. Leap year\n2.Calculator " <<endl;
	cin >> princessCal;
	
	switch(princessCal){
		case 1:
			int year;
			cout <<"enter the year " <<endl;
			cin >> year;
			if((year % 4)==0){
				cout << "is a leap year " <<year <<endl;
			}
			else{
				cout<<"is not a leap year " <<year <<endl;
			}
			break;
			
		case 2:
			int num1;
			cout <<" enter the firstNum" <<endl;
			cin >> num1;
			
			int num2;
			cout <<" enter the secondNum" <<endl;
			cin >> num2;
			if(num1 > num2){
				cout << "first numb is greater " <<num1 <<endl;
			}
			else if(num2 > num1){
				cout <<"second numb is largest "<<num2 <<endl;
			}
			else{
				cout <<"the numbers are equal " <<endl;
			}
			break;
			default:
				cout <<"invalide number";
	
}
	return 0;
}
