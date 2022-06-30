#include <iostream>
#include <cstring>
using namespace std;

// defining a new datatype
class car
{
private:
    float price;

public:
    void print()
    {
        cout << "Name" << name << endl;
        cout << "Model no" << model_no << endl;
        cout << "price" << price << endl;
    }
    // default constructor
    car()
    {
        cout << "Inside car construtor" << endl;
    }
    // parameterised constructor
    car(float p, int m, char *n)
    {
        price = p;
        model_no = m;
        strcpy(name, n);
    }

    int model_no;
    char name[20];
    float get_discounted_price(int x)
    {
        return price * (1 - x);
    }
    float applydiscount(float x)
    {
        price = price * (1 - x);
        return price;
    }
    void set_price(float p)
    {
        float msp = 111;
        if (p > 0)
        {
            price = p;
        }
        price = msp;
    }
    float get_price()
    {
        return price;
    }
};
int main()
{
    car c; // makes a call to the funtion present insde the class
    car d(222, 333, "Audi");
    d.print();

        c.model_no = 112;
    c.name[0] = 'B';
    c.name[1] = 'M';
    c.name[2] = 'W';
    c.name[3] = '\0';
    // try to print
    // cout<<c.name<<"Model no"<<c.model_no<<"Price"<<c.price<<endl;
    // cout<<"Enter the discount you want to give";
    c.set_price(-100);
    float discount;
    cin >> discount;
    cout << c.applydiscount(discount);
    c.print();
}