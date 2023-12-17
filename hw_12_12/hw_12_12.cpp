#include <iostream>
#include <Windows.h>
using namespace std;


class Counter {
    int now = 0;
    int min = 0;
    int max = 9999;
    int increment = 1;

public:
    void SetNow(int n)
    {
        now = n;
    }

    int GetNow() const 
    {
        return now;
    }

    void SetMin(int mi) 
    {
        min = mi;
    }

    int GetMin() const
    {
        return min;
    }

    void SetMax(int ma)
    {
        max = ma;
    }

    int GetMax() const
    {
        return max;
    }

    void SetPlus(int i)
    {
        increment = i;
    }

    int GetPlus() const
    {
        return increment;
    }

    void Realization()
    {
        while (true) {

            if (now == max) {
                now = min;
                Sleep(5000);
            }
            now += increment;
            cout << now << "\n";

            if (now >= max) now = min;
        }
    }
};

int main()
{
    Counter c;
    c.Realization();
}

