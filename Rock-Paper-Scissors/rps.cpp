#include <iostream>
#include <ctime>
using namespace std;

int menu();
void checker(int userchoice, int &score);

int main()
{
    int attempts = 0;
    int userchoice;
    int score = 0;
    srand(time(NULL));

    cout << "*****Welcome to Rock-Paper-Scissors Game*****\n";
    do
    {
        userchoice = menu();
        if (userchoice != 0 && userchoice >= 1 && userchoice <= 3)
        {
            attempts++;
            checker(userchoice, score);
            cout << "Score: " << score << " || Attempts: " << attempts << "\n";
        }
        else
        {
            cout << "Please Choose Correctly :(\n\n";
        }

    } while (userchoice != 0);
    cout << "Thanks for playing. Press any button to exit...";
    cin.ignore();
    cin.get();
}

int menu()
{
    int userchoice;

    cout << "Please Choose: 1)Rock 2)Paper 3)Scissors 0)Exit\n";
    cin >> userchoice;
    return userchoice;
}

void checker(int userchoice, int &score)
{

    int systemchoice = rand() % 3 + 1;

    if (userchoice == systemchoice)
    {
        cout << "Draw\n";
    }
    else if (userchoice == 1 && systemchoice == 3 || userchoice == 2 && systemchoice == 1 || userchoice == 3 && systemchoice == 2)
    {
        cout << "You Win.\n";
        score++;
    }
    else
    {
        cout << "You Lost. Computer Chose Scissors\n";
        score--;
    }
}