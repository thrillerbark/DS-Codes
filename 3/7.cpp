#include<iostream>

using namespace std;

int main()
{
    int i,junk;
    long int num,rev=0;
    int len;
    cout << "Enter the number of digits  :";
    cin >> len;
    cout << "Enter the number  :";
    cin >> num;

    for(i=0;i<len;i++)
    {
        junk=num%10;
        num=num/10;
        rev=rev*10+junk;


    }
    cout << "Reversed number is  " << rev  << endl;

return 0;
}
 
