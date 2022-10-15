#include <iostream>

using namespace std;

int main()
{
    cout << "Program Deret FIbonanci 1-100 :" << endl;
    int x = 0,y = 1, hasil = 1;
    for (int i = 0; i <= 9; i++)
    {
        cout << x << " + " << y << " = "
        << x + y << endl;
        hasil = x + y;
        x = y;
        y = hasil;
    }

    return 0;
}
