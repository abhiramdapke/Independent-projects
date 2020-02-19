#include <iostream>
#include <iomanip>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    Time(int h = 0, int m = 0, int s = 0);
    int gethour() const;
    void sethour(int h);
    int getminute() const;
    void setminute(int m);
    int getsecond() const;
    void setsecond(int s);
    void settime(int h, int m, int s);
    void print() const;
    void nextsecond();
};

Time::Time(int h, int m, int s)
{
    hour  = h;
    minute = m;
    second = s;
}

int Time::gethour() const
{
    return hour;
}

void Time::sethour(int h)
{
    hour = h;
}

int Time::getminute() const
{
    return minute;
}

void Time::setminute(int m)
{
    minute = m;
}

int Time::getsecond() const
{
    return second;
}

void Time::setsecond(int s)
{
    second = s;
}

void Time::settime(int h, int m, int s)
{
    hour  = h;
    minute = m;
    second = s;
}

void Time::print() const
{
    cout << setfill('0');
    cout << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
}

void Time::nextsecond()
{
    ++second;
    if (second >= 60)
    {
        second = 0;
        ++minute;
    }
    if (minute >= 60)
    {
        minute = 0;
        ++hour;
    }
    if (hour >= 24)
    {
        hour = 0;
    }
}

int main()
{
    Time t1(23,59,59);
    
    t1.print();
    t1.sethour(12);
    t1.setminute(30);
    t1.setsecond(15);
    
    t1.print();
    
    cout << "hour is: " << t1.gethour() << endl;
    cout << "minute is: " << t1.getminute() << endl;
    cout << "second is: " << t1.getsecond() << endl;
    
    Time t2;
    t2.print();
    t2.settime(1,2,3);
    t2.print();
    
    Time t3(12);
    t3.print();
    
    Time t4(23,59,58);
    t4.print();
    t4.nextsecond();
    t4.print();
    t4.nextsecond();
    t4.print();
    
    Time t5(25,61,99);
    t5.print();
    
    return 0;
}
