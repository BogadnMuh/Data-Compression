#include <bits/stdc++.h>
#include <Windows.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

HANDLE hConsole;
#define e '\n';
int main()
{
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    map <string, int> m;
    string s, a, j;
    int u;
    cout << "Do you want to start?" << e;
    cout << "1)Yes  0)No" << e;
        cin >> u;
        if(u == 0)
        {
            SetConsoleTextAttribute(hConsole, 4);
            cout << ">:(";
            SetConsoleTextAttribute(hConsole, 7);
            _getch();
            return 0;
        }
    while(u == 1)
    {
        SetConsoleTextAttribute(hConsole, 2);
        cout << "Enter the word" << e;
        SetConsoleTextAttribute(hConsole, 7);
        cin >> s;
        SetConsoleTextAttribute(hConsole, 6);
        cout << "Result:" << e;
        cout << "i" << " " << "l" << " " << "a" << " " << "r" << e;
        cout << "-------" << e;
        cout << 0 << " " << "V" << " " << "V" << " " << "V" << e;
        for(int i = 0, v = 1; i < s.size(); i++, v++)
        {
            a = s[i];
            while(m[a] != 0)
            {
                i++;
                a+= s[i];
            }
            m[a] = v;
            j = a;
            j.pop_back();
            cout << v << " " << m[j] << " " << a[a.size() - 1] << " " << a << e;
        }
        m.clear();
        SetConsoleTextAttribute(hConsole, 7);
        cout << "Do you want to continue?" << e;
        cout << "1)Yes  0)No" << e;
        cin >> u;
    }
    cout << "Bye...";
    _getch();
    return 0;
}