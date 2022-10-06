#include <iostream>

using std::cout;
using std::cin;
int main()
{
    cout << "Enter your monthly Salary ";
    int monthly_salary;
    cin >> monthly_salary;
    cout << "Enter your working days ";
    int DailyWorkingDays;
    cin >> DailyWorkingDays;
    cout << "Enter your working weeks ";
    int working_weeks;
    cin >> working_weeks;
    int yearly_salary = monthly_salary * 12;
    int weekly_salary = monthly_salary / working_weeks;
    int daily_salary = yearly_salary / DailyWorkingDays;
    cout << "Your yearly salary is " << yearly_salary << " and your weekly salary is "
         << weekly_salary << " and your daily salary is " << daily_salary;
    return 0;
}