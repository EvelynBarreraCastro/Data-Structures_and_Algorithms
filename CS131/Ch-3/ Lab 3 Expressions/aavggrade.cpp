// Evelyn Barrera Castro

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a, b, c, avg;

    cout << "Please input the first grade" << endl;
    cin >> a ;
    cout << "Please input the second grade" << endl;
    cin >> b ;
    cout << "Please input the third grade" << endl;
    cin >> c ;

avg = (a + b + c ) / 3;
cout << setprecision (2);
cout << fixed << "The average of the three grades is " << avg << endl;



    return 0;

}