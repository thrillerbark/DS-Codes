#include<iostream>
#define pi 3.14

using namespace std;

class cylinder{
  private:

     int radius;
     int height;
     float vol;
     float surf;

 public:
     cylinder()
     {
       radius=0;
       height=0;
     }
     void readdata();
     void volume();
     void surface();
     void print();       
            };

void cylinder::readdata()
{
cout << "Enter the radius:";
cin >> radius;

cout << "Enter the height:";
cin >> height;
}

void cylinder::volume()
{
vol=(pi*radius*radius*height);
}

void cylinder::surface()
{
surf=(2*pi*radius*height);
}

void cylinder::print()
{
cout << "Surface area of cylinder is " << surf << endl;
cout << "Volume of cylinder is " << vol << endl;
}


int main()
{
cylinder cy;
cy.readdata();
cy.volume();
cy.surface();
cy.print();
return 0;
}
