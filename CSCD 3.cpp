#include <iostream>

using namespace std;

int main()
{

    int total_mark;
    cout << "Enter your total mark: ";
    cin >> total_mark;

    if((total_mark >=80) && (total_mark <=100))
        {
            cout << "Grade is  " << "A" << endl;
       }
       else if((total_mark >= 75) && (total_mark <= 79))
       {
            cout << "Grade  is  " << "B+" << endl;
       }else if((total_mark >= 70) && (total_mark <= 74))
       {
            cout << "Grade is  " << "B" << endl;
       }
       else if((total_mark >= 65) && (total_mark <= 69))
       {
            cout << "Grade is  " << "C+" << endl;
       }
       else if((total_mark >= 60) && (total_mark <= 64))
       {
            cout << "Grade is  " << "C" << endl;
       }
       else if((total_mark >= 55) && (total_mark <= 59))
       {

            cout << "Grade is  " << "D+" << endl;
       }
       else if((total_mark >= 50) && (total_mark <= 54))
       {
            cout << "Grade is " << "D" << endl;
       }
       else if((total_mark >= 45) && (total_mark <= 49))
       {
            cout << "Grade is  " << "E" << endl;
       }
       else if((total_mark >= 0) && (total_mark <= 44))
       {
            cout << "Grade is  " << "F" << endl;
       }
       else{
            cout <<"No Grade Available!" << endl;
       }

    return 0;
}
