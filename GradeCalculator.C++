#include <iostream>
#include <string>
using namespace std;
 
int main()
{
int array_size;
double sum = 0.00;
double grade_average = 0.00;
cout << "How many grades do you want to input?" << endl;
cin >> array_size;//user enters the size of the array
int *grade;//declaring the pointer
grade = new int[array_size];//converting the pointer into an array
for (int i = 0; i < array_size; i++)//user input the grades of the students
{
cout << "Enter your grades " << i+1 << endl;
cin >> *(grade + i);
sum += *(grade + i);
}
grade_average = sum / array_size;//calculate the grade_average
if (grade_average >= 90) // final output as grade letter and percentage
{
cout << "The grade is an A " << grade_average << "%" <<endl;
}
if (90 > grade_average && grade_average >= 80)
{
cout << "The grade is an B " << grade_average << "%" <<endl;
}
if (80 > grade_average && grade_average >= 70)
{
cout << "The grade is an C " << grade_average << "%" <<endl;
}
if (70 > grade_average && grade_average >= 60)
{
cout << "The grade is an D " << grade_average << "%" <<endl;
}
if (grade_average < 60)
{
cout << "The grade is an F " << grade_average << "%" <<endl;
}
}
