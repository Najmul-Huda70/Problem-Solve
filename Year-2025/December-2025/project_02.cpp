#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class Login
{
private:
    string username;
    string password;

public:
    Login()
    {
        username = "";
        password = "";
    }
    void signUp()
    {
        cout << "\n----------Sign Up---------\n";
        cout << "\nEnter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        cout << "\nRegistration successful!" << endl;
    }
    void login()
    {
        if (username == "" and password == "")
        {
            cout << "\nNo user Registered yet! Please SignUp First." << endl;
            return;
        }

        string user, pass;
        cout << "\n----------Login------------\n";
        cout << "\nEnter Username: ";
        cin >> user;
        cout << "Enter Password: ";
        cin >> pass;
        if (user == username and pass == password)
        {
            cout << "\nLogin succcessful! Welcome. " << username << "!" << endl;
        }
        else
        {
            cout << "\nInvalid username or password. Try again!" << endl;
        }
    }
    void changePassword()
    {
        if (username == "" and password == "")
        {
            cout << "No user Registered yet! Please SignUp First." << endl;
            return;
        }
        string pass;
        bool old = false;
        while (!old)
        {
            cout << "Enter Your Old Password: ";
            cin >> pass;
            if (pass == password)
            {
                old = true;
                bool flag = false;
                while (!flag)
                {
                    cout << "Enter your New Password: ";
                    string new_pass, confirm_pass;
                    cin >> new_pass;
                    cout << "Enter your New Password Confirm: ";
                    cin >> confirm_pass;
                    if (new_pass == confirm_pass)
                    {
                        password = new_pass;
                        flag = true;
                        cout << "Change your password Successfully!" << endl;
                    }
                    else
                        cout << "No Matching New Password and Confirm Password!" << endl;
                }
            }
            else
                cout << "Old Password no matching!" << endl;
        }
    }
};
int main()
{
    Login person;
    while (1)
    {
        cout << "\n=== Simple Login System ===\n1. Sign Up\n2. Login\n3.Password Change\n4. Exit\n";
        cout << "Choice Your Option: ";
        int op;
        cin >> op;
        if (op == 1)
        {
            person.signUp();
        }
        else if (op == 2)
        {
            person.login();
        }
        else if (op == 3)
        {
            person.changePassword();
        }
        else if (op == 4)
            break;
    }
}