// How to mack clock using c++
#include <bits/stdc++.h>
#include <windows.h>

using namespace std;
int main()
{
    int h = 0, m = 0, s = 0;
    while (true)
    {
        system("cls");
        cout<<"--------------\n";
        cout << h << ":" << m << ":" << s << endl;
        cout<<"--------------\n";
        s++; // second
        if (s == 60)
        {
            m++;
            s = 0;

            if (m == 60)
            {
                h++;
                m = 0;

                if (h == 60)
                {
                    h = 0;
                }
            }
        }
        Sleep(1000);
    }
    return 0;
}