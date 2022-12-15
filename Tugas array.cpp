#include <iostream>

using namespace std;

int main()
{
    int i = 0, x = 1, y = 0, n = 2;
    int j[3][2][2];
    float rata_rata;

    for(int o = 0; o < 3; o++){
        for(int k = 0; k < 2;k++){
            for(int e = 0; e < 2; e++){
            j[0][k][e] = n;
            n +=2;
            cout << n << " ";
            y += n;
            i += x;
            rata_rata = (float)y / i;
        }
    }
}
    cout << "\n";
    cout << "sum Kelipatan 4 = " << y << endl;
    cout << "Rata-rata sum kelipatan 4 = " << rata_rata << endl;

    return 0;
}
