#include <iostream>
#include <string>
using namespace std;

int main()
{
    int y = 5;

     cout << "Result of 5!= ";

    for(int i = y; i <= 0; ++i)
    {
        cout << " x " << i;
        y = y * i;
    }
    
    cout << y;

    return 0;
}
