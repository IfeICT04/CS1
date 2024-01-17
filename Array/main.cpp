#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int no_stu = 1;
	
	cout << "How records of student do you calculate for" << endl;
	cin>> no_stu;
	
	// Declaring All needed arrays
	string stu_name[no_stu][3];
	int exam_score[no_stu];
	int c_assesment[no_stu];
	int total_score[no_stu];
	
	// Accept the inputs ffrom the users into the arrays
	for (int i = 0; i < no_stu; i++){
		cout << "\nEnter name, exam score and continuos assesment for student " << (i + 1) << endl;
		cin>> stu_name[i];
		cin>> exam_score[i];
		cin>> c_assesment[i];
		total_score[i] = exam_score[i] + c_assesment[i];
	}
	
	// Print the result according to how it was stored in the array.
	cout << "" << endl;
	cout<< "\nStudent. \t\t Exam \t CA \t Total" <<endl;
	cout << "================================================" << endl;
	// Iterate|Loop through all the elements of the array
	for (int j = 0; j < no_stu; j++){
		cout<< stu_name[j] << " \t\t " << exam_score[j] << " \t " << c_assesment[j] << " \t " << total_score[j] << endl;
	}	
	
	
	// for (int i = 1; i <= 10; i++){
	// 	cout << i << endl;
	// }
	
	// int x = 1;
	// while(x <= 10){
	// 	cout<< x << endl;
	// 	x++;
	// }
	
	// Nested For Loop
	// for (int x = 1; x <= 10; x++){
	// 	for (int y = 1; y <= 10; y++){
	// 		cout << "x="<< x << ", y=" << y << endl;
	// 	}
	// }
	
	
	// Accept the inputs ffrom the users into the arrays
	// cout << "Enter name, exam score and continuos assesment for student 1" << endl;
	// cin>> stu_name[0];
	// cin>> exam_score[0];
	// cin>> c_assesment[0];
	// total_score[0] = exam_score[0] + c_assesment[0];
	
	// cout << "Enter name, exam score and continuos assesment for student 2" << endl;
	// cin>> stu_name[1];
	// cin>> exam_score[1];
	// cin>> c_assesment[1];
	// total_score[1] = exam_score[1] + c_assesment[1];
	
	// cout << "Enter name, exam score and continuos assesment for student 3" << endl;
	// cin>> stu_name[2];
	// cin>> exam_score[2];
	// cin>> c_assesment[2];
	// total_score[2] = exam_score[2] + c_assesment[2];
	
	
	// Print the result according to how it was stored in the array.
	// cout << "" << endl;
	// cout<< "\nStudent. \t\t Exam \t CA \t Total" <<endl;
	// cout << "================================================" << endl;
	// cout<< stu_name[0] << " \t\t " << exam_score[0] << " \t " << c_assesment[0] << " \t " << total_score[0] << endl;
	// cout<< stu_name[1] << " \t\t " << exam_score[1] << " \t " << c_assesment[1] << " \t " << total_score[1] << endl;
	// cout<< stu_name[2] << " \t\t " << exam_score[2] << " \t " << c_assesment[2] << " \t " << total_score[2] << endl; 
	
	return 0;
}
