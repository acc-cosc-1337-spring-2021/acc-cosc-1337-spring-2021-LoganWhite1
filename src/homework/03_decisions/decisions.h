//write include required statements
#include<string>
#include<main.cpp>
//Write a function prototype named get_grade_points that accepts a string letter_grade and returns
//an int.
int get_grade_points(std::string letter_grade);

using namespace std; //get_grade_points

int main()
{
    string input;
    string A;
    string B;
    string C;
    string D;
    string F;

    cout << "enter a letter grade:";

    cin >> input;
    if (input == "A")
        cout << "The numeric value is between 90 and 100" << end1;

    if (input == "B")
        cout << "The numeric value is between 80 and 89" << end1;

    if (input == "C")
        cout << "The numeric value is between 70 and 79" << end1;

    if (input == "D")
        cout << "The numeric value is between 60 and 69" << end1;

    if (input == "F")
        cout << "The numeric value is between 00 and 59" << end1;

return 0;
}

//Write a function prototype with name calculate_gpa that accepts an int named credit_hours and
//an double named credit_points returns double.  
double calculate_gpa(int credit_hours, double credit_points);

