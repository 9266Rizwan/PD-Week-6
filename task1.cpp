#include <iostream>
using namespace std;
string checkhumidity(string weather,string humidity);
main()
{
    string weather;
    string humidity;
    string result;
    cout << "Enter weather (warm/cold)  : ";
    cin >> weather;
    cout << "Enter Humidity (dry/humid) : ";
    cin >> humidity;
    result=checkhumidity(weather,humidity);
    cout << result ;
}
string checkhumidity(string weather,string humidity)
{
    string action;
    if(weather=="warm" && humidity=="dry")
    {
        action="Play tannis ";
    }
    else if(weather=="warm" && humidity=="humid")
    {
        action="Swim";
    }
    else if(weather=="cold" && humidity=="dry")
    {
        action="Play basketball";
    }
    else if(weather=="cold" && humidity=="humid")
    {
        action="Watch tv";
    }
    return action;
}