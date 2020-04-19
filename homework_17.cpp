
#include <iostream>

class Example
{
public:
    Example()
    {}

    Example(int newA) : a(newA)
    {}

    int GetA()
    {
        return(a);
    }
private:
    int a = 0;
};

class Vector
{
public:
    Vector()
    {}
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}
    void Show()
    {
        std::cout << "\nКоординаты вектора:" << x << " " << y << " " << z;
    }
    int Dlina()
    {
        return(sqrt(x * x + y * y + z * z));
    }
private:
    double x = 0, y = 0, z = 0;
};


int main()
{
    setlocale(0, "");
    Example temp(11);
    std::cout << temp.GetA();

    Vector v(10,10,10);
    v.Show();
    std::cout << "\n" << "Длина вектора:" << v.Dlina();

    return(0);
}
