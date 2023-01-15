#include <iostream>
using namespace std;
float billingamount(string fruit,string dayname,float quantity);

main()
{
    system("cls");
    string fruitname;
    string dayname;
    float quantity;
    float result;
    cout << "Enter fruit name            : ";
    cin >> fruitname;
    cout << "Enter day name              : ";
    cin >> dayname;
    cout << "Enter the quantity of fruit : ";
    cin >> quantity;
    result=billingamount(fruitname,dayname,quantity);
    if(result>0)
    {
        cout << "Your billing amount is : " << result << endl ;
    }
    else
    {
        cout << "Error! Please enter the correct week day ";
    }
}

float billingamount(string fruitname,string dayname,float quantity)
{
    float amount;
    if(dayname=="Sunday" || dayname=="sunday" || dayname=="Saturday" || dayname=="saturday")
    {
        if(fruitname=="banana")
        {
            amount=quantity*2.70;
        }
        else if(fruitname=="apple")
        {
            amount=quantity*1.25;
        }
        else if(fruitname=="orange")
        {
            amount=quantity*0.90;
        }
        else if(fruitname=="grapfruitname")
        {
            amount=quantity*1.60;
        }
        else if(fruitname=="kiwi")
        {
            amount=quantity*3.00;
        }
        else if(fruitname=="pineapple")
        {
            amount=quantity*5.60;
        }
        else if(fruitname=="grapes")
        {
            amount=quantity*4.20;
        }
    }
    else if (dayname=="Monday" || dayname=="Tuesday" || dayname=="Wednesday" || dayname=="Thursday" || dayname=="Friday")
    {
        if(fruitname=="banana")
        {
            amount=quantity*2.50;
        }
        else if(fruitname=="apple")
        {
            amount=quantity*1.20;
        }
        else if(fruitname=="orange")
        {
            amount=quantity*0.85;
        }
        else if(fruitname=="grapfruit")
        {
            amount=quantity*1.45;
        }
        else if(fruitname=="kiwi")
        {
            amount=quantity*2.70;
        }
        else if(fruitname=="pineapple")
        {
            amount=quantity*5.50;
        }
        else if(fruitname=="grapes")
        {
            amount=quantity*3.80;
        }
        else
        {
            return 0;
        }
    
    }
    return amount;

}