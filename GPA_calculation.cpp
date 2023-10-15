#include <iostream>
using namespace std;
//made by ohNando
int main()
{
	string name_surname;
	float grade1, grade2, passing_grades;
	float min_grade;
	char grade_average ;
	float average;
	bool exam_entry;
	int number;

	cout << "choose the process you want to do ?:\n"; 
	cout << "1)Average Calculation.\n2)Calculation of Passing Grade.\n"; 
	cout << "--->"; cin >> number;
	switch (number)
	{
	case(1):
		cout << "Did the student take the exam?(Yes:1,No:2)"; cin >> exam_entry;
		if (exam_entry == 1)
		{
			cout << "Name and Surname(Use the _ sign between your name and surname):"; cin >> name_surname;
			cout << "1st exam grade:"; cin >> grade1;
			cout << "2nd exam grade:"; cin >> grade2;

			average = (grade1 + grade2) / 2;

			if (average >= 90)
				grade_average = 'A';
			else if (average < 90 && average >= 80)
				grade_average = 'B';
			else if (average < 80 && average >= 70)
				grade_average = 'C';
			else if (average < 70 && average >= 60)
				grade_average = 'D';
			else if (average < 60 && average >= 0)
				grade_average = 'F';

			cout << "Your Average:" << average << endl;
			cout << "Grade:" << grade_average;
		}
		else if (exam_entry == 0)
		{
			cout << "Grade point average cannot be calculated!!";
		}
		break;
	case(2):
		cout << "Please write your passing score"; cin >> passing_grades;
		cout << endl;
		cout << "1st exam grade:"; cin >> grade1;
		cout << "2nd exam grade:"; cin >> grade2;

		min_grade = (passing_grades * 3) - (grade1 + grade2);

		cout << "Minimum grade required:" << min_grade;
		break;

	}
	return 0;
}
