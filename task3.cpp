#include <iostream>
using namespace std;
string isSign(int day,string month);

main()
{
    string month;
    int day;
    string result;
    cout << "Enter your Birth date  : ";
    cin >> day;
    cout << "Enter your Birth month : ";
    cin >> month;
    result=isSign(day,month);
    cout << "Your Zodiac Sign is "<< result << endl ;

}
string isSign(int day,string month)
{
    string sign;
    if((month=="March" || month=="April") && (day>0 && day<31))
    {
        sign="Aries";
    }
    else if((month=="April" || month=="May") && (day>0 && day<31))
    {
        sign="Taurus";
    }
    else if((month=="May" || month=="June") && (day>0 && day<31))
    {
        sign="Gemini";
    }
    else if((month=="June" || month=="July") && (day>0 && day<31))
    {
        sign="Cancer";
    }
    else if((month=="July" || month=="August") && (day>0 && day<31))
    {
        sign="Leo";
    }
    else if((month=="August" || month=="September") && (day>0 && day<31))
    {
        sign="Virgo";
    }
    else if((month=="September" || month=="October") && (day>0 && day<31))
    {
        sign="Libra";
    }
    else if((month=="October" || month=="November") && (day>0 && day<31))
    {
        sign="Scorpio";
    }
    else if((month=="November" || month=="December") && (day>0 && day<31))
    {
        sign="Sagittarius";
    }
    else if((month=="December" || month=="January") && (day>0 && day<31))
    {
        sign="Capricorn";
    }
    else if((month=="January" || month=="February") && (day>0 && day<31))
    {
        sign="Aquarius";
    }
    else if((month=="February" || month=="March") && (day>0 && day<31))
    {
        sign="Pisces";
    }
    return sign;
}