#include <iostream>
using namespace std;

#define MIN(a, b)    ((a) < (b) ? (a) : (b))     
#define MAX(a, b)    ((a) > (b) ? (a) : (b))   
#define SQR(x)    ((x) * (x))              
#define POWER(x, n)  (pow((x), (n)))          
#define EVEN(x)   ((x) % 2 == 0)            
#define ODD(x)    ((x) % 2 != 0)    

int main()
{
    int a, b, num;
    cout << "Enter two numbers: \n";
    cin >> a >> b;

    cout << "Min: " << MIN(a, b) << endl;
    cout << "Max: " << MAX(a, b) << endl;

    cout << "Square of " << a << ": " << SQR(a) << endl;

    cout << "Enter power: ";
    cin >> num;
    cout << a << " ^ " << num << " = " << POWER(a, num) << endl;

    if (EVEN(a)) cout << a << " is even." << endl;
    if (ODD(a))  cout << a << " is odd." << endl;
}

