#include <iostream>
using namespace std;
 
int main(int argc, char *argv[]) {
	
	int userOpt;
	
	cout << "Performing different Operations: " <<endl;
	cout <<"1.Checking for largest numbers\n2.Checking for leap year\n3.Checking odd or even numbers " <<endl;
	cin >> userOpt;
	
	switch(userOpt){
		
		case 1:
			int numb1;
		
			cout <<"enter the first number: " <<endl;
			cin >> numb1;
			
			int numb2;
			cout <<"enter the second number: " <<endl;
			cin >> numb2;
			
			if(numb1 > numb2){
				cout << "first number is largest " << numb1 <<endl;
			}
			else if (numb2 > numb1){
				cout << "second number is largest " << numb2 <<endl;
			}
			else {
				cout <<numb1 << "numb1 is equal to numb2 " <<numb2 <<endl;
			}
			break;
			
			
		case 2:
			int year;
			cout <<"Enter the year " <<endl;
			cin >> year;
			
			if((year % 4)== 0){
				cout <<"It is a leap year " <<endl;
	 		}
			else {
				cout <<"is not a leap year " <<endl;
			}
			break;
			
			
			
		case 3:
			int num;
			cout <<"Enter the number to check if odd or even " <<endl;
			cin >>num;
			if((num % 2)==0){
				cout <<" The number you entered is EVEN " <<endl;
			}
			else{
				cout <<"It is an odd number" <<endl;
			}
			break;
			
		default:
			cout<<"You enetred a wrong number " <<endl;
			
	}
	
	return 0;
}
