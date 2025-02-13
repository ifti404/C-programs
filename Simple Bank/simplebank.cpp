#include <iostream>
using namespace std;

void withdraw(double &balance);
void deposit(double &balance);
void checkBalance(double balance);
int mainMenu();

int main()
{
    string username;
    string userpass;
    double balance = 100;
    int choice;

    cout << "*****Money Management System*****\n";
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> userpass;

    if (username == "jeb" && userpass == "jeb123")
    {
        cout << "\nLogin successful.\n";

        do
        {
            choice = mainMenu();
            switch (choice)
            {
            case 1:
                withdraw(balance);
                break;
            case 2:
                deposit(balance);
                break;
            case 3:
                checkBalance(balance);
                break;
            case 0:
                cout << "Exiting system. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please select again.\n";
                break;
            }
        } while (choice != 0);
    }
    else
    {
        cout << "Invalid login credentials.\n";
    }

    return 0;
}

int mainMenu()
{
    int choice;
    cout << "\n*****Main Menu*****\n";
    cout << "1) Withdraw\n";
    cout << "2) Deposit\n";
    cout << "3) Check Balance\n";
    cout << "0) Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

void withdraw(double &balance)
{
    double amount;
    cout << "\n*****Withdraw*****\n";
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid amount :(. Please enter a valid value.\n";
    }
    else if (amount > balance)
    {
        cout << "Insufficient balance :(.\n";
    }
    else
    {
        balance -= amount;
        cout << "Withdrawal successful!:D Current balance: " << balance << "$\n";
    }
}

void deposit(double &balance)
{
    double amount;
    cout << "\n*****Deposit*****\n";
    cout << "Enter amount to deposit: ";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid amount. Please enter a valid value :(.\n";
    }
    else
    {
        balance += amount;
        cout << "Deposit successful!:D Current balance: " << balance << "$\n";
    }
}

void checkBalance(double balance)
{
    cout << "\n*****Balance*****\n";
    cout << "Your current balance is: " << balance << "$\n";
}
