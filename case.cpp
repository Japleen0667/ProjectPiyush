#include <iostream>
#include <math.h>
using namespace std;
int factorial(int n); // argument and return
int factorial();      // no arg and ret
// void factorial(int x);     // arg and no ret

int area(int x, int y);     // function overloading (FO)
int area(float b, float h); // FO
int area(int m);            // FO

// Encapsulation (student class)
class student
{
    int rollno;
    char name[20];
    int age;
    char gender;

public:                             // this means that anything below this will be a global var/value and can be accessed by anyone
    void input()
    {
        cout << "enter rollno : ";
        cin >> rollno;
        cout << "enter name : ";
        cin >> name;
        cout << "enter age in years : ";
        cin >> age;
        cout << "enter gender(m/f) : ";
        cin >> gender;
    }
    void output()
    {
        cout << "the details are : " << endl;
        cout << "rollno : " << rollno << endl
             << "name : " << name << endl
             << "age : " << age << endl
             << "gender : " << gender << endl;
    }
} s1, s2;

int main()
{
    cout << "Switch cases are :" << endl;
    cout << "\t"
         << " 1) program for demonstarting adding two numbers " << endl;
    cout << "\t"
         << " 2) program for demonstarting power " << endl;
    cout << "\t"
         << " 3) program to find out greatest amoung 3 numbers " << endl;
    cout << "\t"
         << " 4) program for finding factorial using for loop " << endl;
    cout << "\t"
         << " 5) program for finding factorial using while loop " << endl;
    cout << "\t"
         << " 6) program to find size of fundamental data type " << endl;
    cout << "\t"
         << " 7) program to swap numbers with using third variable " << endl;
    cout << "\t"
         << " 8) program to swap numbers without using third variable " << endl;
    cout << "\t"
         << " 9) program to add numbers in a matrix form " << endl;
    cout << "\t"
         << " 10) program to check multipule of 3 or 7 " << endl;
    cout << "\t"
         << " 11) program to check largest of 3 numbers " << endl;
    cout << "\t"
         << " 12) program to get sum of digits of a number " << endl;
    cout << "\t"
         << " 13) two dimensitional arrey " << endl;
    cout << "\t"
         << " 14) Sum of two matrix " << endl;
    cout << "\t"
         << " 15) product of 2 matrix " << endl;
    cout << "\t"
         << " 16) transpose of a matrix " << endl;
    cout << "\t"
         << " 17) pointer in arrey " << endl;
    cout << "\t"
         << " 18) program to find the sum of all user inputed array element  " << endl;
    cout << "\t"
         << " 19) program to find factroial of a given number using function (argument and return) " << endl;
    cout << "\t"
         << " 20) program to find factroial of a given number using function (no argument and return) " << endl;
    cout << "\t"
         << " 21) program to find factroial of a given number using function (argument and no return) " << endl;
    cout << "\t"
         << " 22) program to find factroial of a given number using function (no argument and no return) " << endl;
    cout << "\t"
         << " 23) function overloading " << endl;
    cout << "\t"
         << " 24) Encapsulation (student class) " << endl;
    cout << "\t"
         << " 25) " << endl;
    cout << "\t"
         << " 26) " << endl;
    int x;
    char y;
    do
    {
        cout << "enter the switch number : ";
        cin >> x;
        switch (x)
        {
        case 1:
        {
            // program for demonstarting adding two numbers
            int a, b, c;
            cout << "enter the two values to be added : ";
            cin >> a >> b;
            c = a + b;
            cout << "the answer is : " << c << endl;
            break;
        }
        case 2:
        {
            // program for demonstarting power
            int m, n, o;
            cout << "enter the base and exponent : ";
            cin >> m >> n;
            o = pow(m, n);
            cout << "the power of m with exponent n is : " << o << endl;
            break;
        }
        case 3:
        {
            // program to find out greatest amoung 3 numbers
            int a, b, c;
            cout << "enter the 3 numbers to compare for the greatest one : ";
            cin >> a >> b >> c;
            if (a > b)
            {
                if (a > c)
                {
                    cout << "a is the greatest";
                }
                else
                {
                    cout << "c is greatest";
                }
            }
            else
            {
                if (b > c)
                {
                    cout << "b is greatest";
                }
                else
                {
                    cout << "c is greatest";
                }
            }
            break;
        }
        case 4:
        {
            // program for finding factorial
            int n, f = 1;
            cout << "enter the value for which u want to find factroial of (using for loop) : ";
            cin >> n;
            for (int i = n; i > 0; i--)
            {
                f = f * i;
            }
            cout << "the factorial is : " << f << endl;
            break;
        }
        case 5:
        {
            // program for finding factorial
            int i, f = 1;
            cout << "enter the value for which u want to find factroial of (using while loop) : ";
            cin >> i;
            while (i > 0)
            {
                f = f * i;
                i--;
            }
            cout << "the factorial is : " << f << endl;
            break;
        }
        case 6:
        {
            // program to find size of fundamental data type
            cout << "\n\n Size of fundamental data types :\n";
            cout << "------------------------------------------\n";
            cout << " The sizeof(char) is :          " << sizeof(char) << " bytes \n";
            cout << " The sizeof(short) is :         " << sizeof(short) << " bytes \n";
            cout << " The sizeof(int) is :           " << sizeof(int) << " bytes \n";
            cout << " The sizeof(long) is :          " << sizeof(long) << " bytes \n";
            cout << " The sizeof(long long) is :     " << sizeof(long long) << " bytes \n";
            cout << " The sizeof(float) is :         " << sizeof(float) << " bytes \n";
            cout << " The sizeof(double) is :        " << sizeof(double) << " bytes \n";
            cout << " The sizeof(long double) is :   " << sizeof(long double) << " bytes \n";
            cout << " The sizeof(bool) is :          " << sizeof(bool) << " bytes \n\n";
            break;
        }
        case 7:
        {
            // program to swap numbers with using third variable
            int a, b, c;
            cout << "enter values of a , b for swaping (with third variable) : ";
            cin >> a >> b;
            c = a;
            a = b;
            b = c;
            cout << "value of a : " << a << endl;
            cout << "value of b : " << b << endl;
            break;
        }
        case 8:
        {
            // program to swap numbers without using third variable
            int a, b;
            cout << "enter values of a , b for swaping (without third variable) : ";
            cin >> a >> b;
            a = a + b;
            b = a - b;
            a = a - b;
            cout << "value of a : " << a << endl;
            cout << "value of b : " << b << endl;
            break;
        }
        case 9:
        {
            // program to add numbers in a matrix form
            int a[3][3];
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cin >> a[i][j];
                }
            }
            cout << "\nthe array is : ";
            for (int i = 0; i < 3; i++)
            {
                cout << endl;
                for (int j = 0; j < 3; j++)
                {
                    cout << a[i][j] << "\t";
                }
            }
            cout << endl;
            break;
        }
        case 10:
        {
            // program to check multipule of 3 or 7
            int a;
            cout << "enter value of the number u want to check for : ";
            cin >> a;
            if (a % 3 == 0)
            {
                cout << "it is a multipule of 3" << endl;
            }
            else if (a % 7 == 0)
            {
                cout << "it is a multipule of 7" << endl;
            }
            else
            {
                cout << "not a multipule of 3 or 7" << endl;
            }
            break;
        }
        case 11:
        {
            // program to check largest of 3 numbers
            int a, b, c;
            cout << "enter 3 numbers to check the largest number : ";
            cin >> a >> b >> c;
            if (a > b)
            {
                if (a > c)
                {
                    cout << a << " is the largest" << endl;
                }
                else
                {
                    cout << c << " is the largest" << endl;
                }
            }
            else
            {
                if (b > c)
                {
                    cout << b << " is the largest" << endl;
                }
                else
                {
                    cout << c << " is the largest" << endl;
                }
            }
            break;
        }
        case 12:
        {
            // program to get sum of digits of a number
            int n, sum = 0, m;
            cout << "Enter a number to get sum of its digits : ";
            cin >> n;
            while (n > 0)
            {
                m = n % 10;
                sum = sum + m;
                n = n / 10;
            }
            cout << "Sum is : " << sum << endl;
            break;
        }
        case 13:
        {
            // two dimensitional arrey
            int a[3][3];
            cout << "enter matrix : "
                 << "\n";
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cin >> a[i][j];
                }
            }
            cout << "matrix is : " << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << a[i][j] << "\t";
                }
                cout << endl;
            }
            break;
        }
        case 14:
        {
            // Sum of two matrix
            int a[3][3], b[3][3], sum[3][3];
            cout << "enter the first matrix : "
                 << "\n";
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cin >> a[i][j];
                }
            }

            cout << "enter the second matrix : "
                 << "\n";
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cin >> b[i][j];
                }
            }

            cout << "sum of matrix : " << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    sum[i][j] = a[i][j] + b[i][j];
                    cout << sum[i][j] << "\t";
                }
                cout << endl;
            }
            break;
        }
        case 15:
        {
            // product of 2 matrix
            int a[3][3], b[3][3], c[3][3];
            cout << "enter the first matrix A : "
                 << "\n";
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cin >> a[i][j];
                }
            }
            cout << "A matrix is : " << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << a[i][j] << "\t";
                }
                cout << endl;
            }

            cout << "enter the second matrix B : "
                 << "\n";
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cin >> b[i][j];
                }
            }
            cout << "B matrix is : " << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << b[i][j] << "\t";
                }
                cout << endl;
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    c[i][j] = 0;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        c[i][j] = c[i][j] + a[i][k] * b[k][j];
                    }
                }
            }
            cout << "product of matrix : " << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << c[i][j] << "\t";
                }
                cout << endl;
            }
            break;
        }
        case 16:
        {
            // transpose of a matrix
            int a[3][3];
            cout << "enter matrix : "
                 << "\n";
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cin >> a[i][j];
                }
            }
            cout << "matrix is : " << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << a[i][j] << "\t";
                }
                cout << endl;
            }
            cout << "transpose matrix is : " << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << a[j][i] << "\t";
                }
                cout << endl;
            }
            break;
        }
        case 17:
        {
            // pointer in arrey
            int a[5] = {2, 5, 7, 17, 19};
            int *p;
            for (int i = 0; i < 5; i++)
            {
                p = &a[i];
                cout << "the address of " << *p << " is : " << p << endl;
            }
            break;
        }
        case 18:
        {
            // program to find the sum of all user inputed array elements
            int a[5] = {};
            cout << "enter 5 elements of array : " << endl;
            for (int b = 0; b < 5; b++)
            {
                cin >> a[b];
            }
            int n = 5;
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += a[i];
            }
            cout << "Sum of array elements is : " << sum << endl;
            break;
        }
        case 19:
        {
            // program to find factroial of a given number using function (argument and return)
            int f, n;
            cout << "enter the value of n : ";
            cin >> n;
            f = factorial(n);
            cout << "the ans is : " << f << endl;
            return 0;
            break;
            // on bottom and top too
        }
        case 20:
        {
            // program to find factroial of a given number using function (no argument and return)
            int f;
            f = factorial();
            cout << "the factorial is : " << f << endl;
            return 0;
            break;
            // on bottom and top too
        }
        case 21:
        {
            // program to find factroial of a given number using function (argument and no return)
            int n;
            cout << "enter n : " << endl;
            cin >> n;
            factorial(n);
            return 0;
            // on bottom and top too
        }
        case 22:
        {
            // program to find factroial of a given number using function (no argument and no return)
            factorial();
            return 0;
            // on bottom and top too
        }
        case 23:
        {
            // function overloading
            // area of rect
            int l, b, ar;
            cout << "enter length and breath : ";
            cin >> l >> b;
            ar = area(l, b);
            cout << "the area is : " << ar << endl;

            // area of triangle
            float base, height, at;
            cout << "enter the base and height : ";
            cin >> base >> height;
            at = area(base, height);
            cout << "the area of triangle is : " << at << endl;

            // area of circle
            int ac, r;
            cout << "enter the radius : ";
            cin >> r;
            ac = area(r);
            cout << "area of circle is : " << ac << endl;
            return 0;
            // on bottom and top too
        }
        case 24:
        {
            // Encapsulation (student class)
            s1.input();
            s2.input();
            s1.output();
            s2.output();
            return 0;
            // on top too
        }
        default:
        {
            cout << "no case avalable" << endl;
        }
        }
        cout << "perform again.....press y for yes" << endl;
        cin >> y;
    } while (y == 'y');
    return 0;
}

// program to find factroial of a given number using function (function part - argument and return)
int factorial(int n)
{
    int f = 1;
    for (int i = n; i > 0; i--)
    {
        f = f * i;
    }
    return f;
}

// program to find factroial of a given number using function (function part - no argument and return)
int factorial()
{
    int n, f = 1;
    cout << "enter n : ";
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        f = f * i;
    }
    return f;
}

// program to find factroial of a given number using function (function part - argument and no return)
// void factorial(int x)
// {
//     int f = 1;
//     for (int i = x; i > 0; i--)
//     {
//         f = f * i;
//     }
//     cout << "the factorial is : " << f << endl;
// }

// program to find factroial of a given number using function (function part - no argument and no return)
// void factorial()
// {
//     int f = 1, n;
//     cout << "enter n:";
//     cin >> n;
//     for (int i = n; i > 0; i--)
//     {
//         f = f * i;
//     }
//     cout << "the factorial is : " << f << endl;
// }

// function overloading
int area(int x, int y)
{
    int ar;
    ar = x * y;
    return ar;
}
int area(float b, float h)
{
    int at;
    at = 0.5 * b * h;
    return at;
}
int area(int m)
{
    int ac;
    ac = 3.14 * m * m;
    return ac;
}