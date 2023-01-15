#include <iostream>
using namespace std;
string location(int x,int y,int h);

int main() {
    int x;
    int y;
    int h;
    string result;
    cout << "Enter the value of x : ";
    cin >> x;
    cout << "Enter the value of y : ";
    cin >> y;
    cout << "Enter the value of h : ";
    cin >> h;
    result=location(x,y,h);
    cout << result ;


}
string location(int x,int y,int h)
{
    int x1 = 0, y1 = 0;
    int x2 = 2*h, y2 = 4*h;
    int x3 = 0, y3 = h;
    int x4 = h, y4 = 0;
    int x5 = h, y5 = 2*h;
    int x6 = 2*h, y6 = h;
    int x7 = h, y7 = 3*h;
    int x8 = 2*h, y8 = 2*h;
    string answer;

    if ((x > x1 && x < x2) && (y > y1 && y < y2)) 
    {
        if ((x > x3 && x < x4 && y > y3 && y < y4) || (x > x5 && x < x6 && y > y5 && y < y6) || (x > x7 && x < x8 && y > y7 && y < y8)) 
        {
            answer="outside" ;
        } 
        else
        {
            answer="inside" ;
        }
    }
    else if ((x == x1 || x == x2) && (y >= y1 && y <= y2) || (y == y1 || y == y2) && (x >= x1 && x <= x2)) 
    {
        answer="border" ; 
    } 
    else 
    {
        answer="outside" ;
    }
    return answer;
}