#include <iostream>
using namespace std;

namespace Fraction
{
    class Fraction
    {
    private:
        int numerator;
        int denominator;
    public:
        Fraction()
        {
            numerator = 1;
            denominator = 2;
        }
        friend ostream& operator<<(ostream& out, Fraction& fraction)
        {
            out << fraction.numerator << "/" << fraction.denominator;
            return out;
        }
        friend istream& operator>>(istream& in, Fraction fraction)
        {
            in >> fraction.numerator;
            in.ignore();
            in >> fraction.denominator;
            return in;
        }
    };
}

namespace Point_2d
{
    class Point
    {
    private:
        int x;
        int y;
    public:
        Point()
        {
            x = 0;
            y = 0;
        }
        friend ostream& operator<<(ostream& out, Point& point)
        {
            out << "(" << point.x << " , " << point.y << ")";
            return out;
        }
        friend istream& operator>>(istream& in, Point point)
        {
            in.ignore();
            in >> point.x;
            in.ignore();
            in >> point.y;
            in.ignore();
            return in;
        }
    };
}

namespace Point_3d
{
    class Point
    {
    private:
        int x;
        int y;
        int z;
    public:
        Point()
        {
            x = 0;
            y = 0;
            z = 0;
        }
        friend ostream& operator<<(ostream& out, Point& point)
        {
            out << "(" << point.x << " , " << point.y << " , " << point.z << ")";
            return out;
        }
        friend istream& operator>>(istream& in, Point point)
        {
            in.ignore();
            in >> point.x;
            in.ignore();
            in >> point.y;
            in.ignore();
            in >> point.z;
            in.ignore();
            return in;
        }
    };
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Fraction::Fraction fraction;
    cout << fraction << endl;

    Point_2d::Point point_2d;
    cout << point_2d << endl;

    Point_3d::Point point_3d;
    cout << point_3d << endl;

    return 0;
}