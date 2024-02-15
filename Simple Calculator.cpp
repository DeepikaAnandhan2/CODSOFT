#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;
    system("cls");
    
	system("Color A");
     cout<<"\t\t\t----------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t*                                                                     *"<<endl;
	cout<<"\t\t\t*                      WELCOME TO My Simple Calculator                *"<<endl;
	cout<<"\t\t\t*                                                                     *"<<endl;
    cout<<"\t\t\t----------------------------------------------------------------------"<<endl<<endl<<endl<<endl;
    cout<<endl;
    
   
    
    cout << "Enter the operator you want to Calculate (+, -, *, /): ";
    cin >> operation;

    cout << "Enter First Number: ";
    cin>>num1;
    cout<<"Enter second Number:";
    cin>>num2;
    

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed.";
                return 1;
            }
            break;
        default:
            cout << "Invalid operator!";
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
