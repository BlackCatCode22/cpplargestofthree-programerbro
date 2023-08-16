#include <iostream>

using namespace std;

int main(){

int num1 = 0;
int num2 = 0;
int num3 = 0;
int largest = 0;

//getname
cout << "\n\n welcome to the largest of three program\n\n";

//get users name
string username = "";
cout << "\n Please enter your name: ";
cin >> username;
cout << "\n welcome " << username <<  " to the largest of three game!";

cout << "\n Please enter first integer:";
cin >> num1;
cout << "\n\n thank you for entering " << num1 << " as your first int\n";

cout << "\n Please enter second integer:";
cin >> num2;
cout << "\n\n thank you for entering " << num2 << " as your first int\n";

cout << "\n Please enter third integer:";
cin >> num3;
cout << "\n\n thank you for entering " << num3 << " as your first int." << endl;

if (num1 > num2)
{
    if (num1 > num3)
    {
        largest = num1;
    }
    else
    {
        largest = num3;
    }
}
else
{
    if (num2 > num3)
    {
        largest = num2;
    }
    else
    {
        largest = num3;
    }
}

cout << "\n the largest of " << num1 << " and " << num2 << " and " << num3 << " is: " << largest << endl;

return 0;
}
