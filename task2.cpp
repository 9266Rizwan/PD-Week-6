#include <iostream>
using namespace std;
float totalmarks(int english,int math,int chemistry,int science,int biology);
float percentage(float totalmarks);
string grade(float percentage);

main()
{
    system("cls");
    string name;
    int english;
    int math;
    int chemistry;
    int science;
    int biology;
    int totalresult;
    float totalpercentage;
    string graderesult;
    cout << "Enter your Name : ";
    cin >> name;
    cout << "Enter your English marks        (   /100) : ";
    cin >>english;
    cout << "Enter your Math    marks        (   /100) : ";
    cin >> math;
    cout << "Enter your Chemistry marks      (   /100) : ";
    cin >> chemistry;
    cout << "Enter your Social Science marks (   /100) : ";
    cin >> science;
    cout << "Enter your Biology marks        (   /100) : ";
    cin >> biology;
    totalresult=totalmarks(english,math,chemistry,science,biology);
    totalpercentage=percentage(totalresult);
    graderesult=grade(totalpercentage);
    cout << "Your name is                : " << name << endl ;
    cout << "Your total marks            : " << totalresult << endl ;
    cout << "Your total marks percentage : " << totalpercentage << endl ;
    cout << "Your grade is               : " << graderesult << endl ;

}
float totalmarks(int english,int math,int chemistry,int science,int biology)
{
    float sum;
    sum= english+math+chemistry+science+biology ;
    return sum;
}
float percentage(float sum)
{
    sum=450;
    float percent;
    percent=(sum/500)*100;
    return percent;
}
string grade(float percentage)
{
    string status;
    if(percentage>89 && percentage<101)
    {
        status="A+";
    }
    else if(percentage>79 && percentage<90)
    {
        status="A";
    }
    else if(percentage>69 && percentage<80)
    {
        status="B+";
    }
    else if(percentage>59 && percentage<70)
    {
        status="B";
    }
    else if(percentage>49 && percentage<60)
    {
        status="C";
    }
    return status;
}