#include <bits/stdc++.h>
using namespace std;
class Notification
{
public:
    virtual void sendAlert() = 0;
};
class SMS : public Notification
{
public:
    void sendAlert()
    {
        cout << "SMS Alert Send!" << endl;
    }
}; 
class Email : public Notification
{
public:
    void sendAlert()
    {
        cout << "Email Alert Send!" << endl;
    }
};
int main()
{
    Notification *n;
    SMS s;
    Email e;
    n = &s;
    n->sendAlert();
    n = &e;
    n->sendAlert();
}