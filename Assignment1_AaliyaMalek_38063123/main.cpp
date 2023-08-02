#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int student;
    int counter = 1;
    float mark = 0,sum=0.0, average=0;
    float maximum;
    float minimum;
    cout << "\n Enter the number of students: ";
    cin >> student;

    while (counter<= student )
    {

        cout << "\n Enter mark for student " << counter << ": ";
        cin >> mark;

        sum+= mark;
        if (counter == 1)
        {
            maximum = mark;
            minimum = mark;
        }
        else
        {
            if (mark > maximum)
                maximum = mark;
            else if (mark < minimum)
                minimum = mark;
        }
    counter++;
    }

    cout << "\n ************************************************************************" << endl;

        average = sum/student;
    cout << "\n The highest mark was : " << (maximum*100.0)/100.0 << endl;

    cout << "\n The lowest mark was : "<< (minimum*100.0)/100.0  << endl;

    cout << "\n The average was : " << round(average*100.0)/100.0 <<endl;
    cout << "\n ************************************************************************" << endl;
}
