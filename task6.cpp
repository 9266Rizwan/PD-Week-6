#include <iostream>
using namespace std;
float billofstudio(int numberofstay,string month);
float billofapartment(int numberofstay,string month);

main()
{
    system("cls");
    int numberofstay;
    string month;
    float resultstudio;
    float resultapartment;
    cout << "Enter your stay Month   (May,June,i.e)  : ";
    cin >> month;
    cout << "Enter Number of stay days               : ";
    cin >> numberofstay;
    resultstudio=billofstudio(numberofstay,month);
    resultapartment=billofapartment(numberofstay,month);
    cout << "Studio   = "<< resultstudio << endl ;
    cout << "Apartment= "<< resultapartment << endl ;
    

}
float billofstudio(int numberofstay,string month)
{
    float studio;
    float amount;
    if(month=="May" || month=="October")
    {
        if(numberofstay>7 && numberofstay<15)
        {
            amount=(50*numberofstay)*0.05;
            studio=(50*numberofstay)-amount;
        }
        else if(numberofstay>14)
        {
            amount=(50*numberofstay)*0.30;
            studio=(50*numberofstay)-amount;
        }
        else
        {
            studio=50*numberofstay;
        }
    }
    else if(month=="June" || month=="September")
    {
        if(numberofstay>14)
        {
            amount=(75.20*numberofstay)*0.20;
            studio=(75.20*numberofstay)-amount;
        }
        else
        {
            studio=75.20*numberofstay;
        }
    }
    else if(month=="July" || month=="August")
    {
        studio=76*numberofstay;
    }
    else
    {
        return 0;
    }
    return studio;
}
/* function for apartment billing*/
float billofapartment(int numberofstay,string month)
{
    float apartment;
    float amount;
    if(month=="May" || month=="October")
    {
        if(numberofstay>14)
        {
            amount=(65*numberofstay)*0.10;
            apartment=(65*numberofstay)-amount;
        }
        else
        {
            apartment=65*numberofstay;
        }
    }
    else if(month=="June" || month=="September")
    {
           if(numberofstay>14)
        {
            amount=(68.70*numberofstay)*0.10;
            apartment=(68.70*numberofstay)-amount;
        }
        else
        {
            apartment=68.70*numberofstay;
        }
    }
    else if(month=="July" || month=="August")
    {
        if(numberofstay>14)
        {
            amount=(77*numberofstay)*0.10;
            apartment=(77*numberofstay)-amount;
        }
        else
        {
            apartment=77*numberofstay;
        }
    }
    else
    {
        return 0;
    }
    return apartment;
}