#include<iostream>
#include<string>

using namespace std;

struct studentrec{

    string name;
    int roll;
    int marks[5];
    char grade;
    int sum;

};


struct studentrec readmarks(struct studentrec stud);
struct studentrec calculategrade(struct studentrec stud);
void display(struct studentrec stud);

int main()
{


studentrec student;

cout << "Enter student name  :";
cin >> student.name;

cout << "Enter roll no. :";
cin >> student.roll;

readmarks(student);
calculategrade(student) ;
display(student);

return 0;

}

struct studentrec readmarks(struct studentrec stud)
{
int i;
stud.sum=0;
cout << "Enter 5 subject marks :\n";
for(i=0;i<5;i++)
  {
   cin >> stud.marks[i];
   stud.sum=stud.sum+stud.marks[i];
  }
   stud.sum=stud.sum/5;

   int gr = (100-stud.sum)/10;

 switch(gr)
{
  case 0 :
  case 1 :
  case 2 :stud.grade='A';cout << "a";break;
  case 3 :
  case 4 :stud.grade='B';break;
  case 5 :
  case 6 :stud.grade='C';break;
  case 7 :
  case 8 :
  case 9 :
  case 10:stud.grade='F';break;
  default:stud.grade='X';cout << "\nInvalid Marks\n";
}
cout << "Obtained Grade is " << stud.grade << endl;

return stud;
}

struct studentrec calculategrade(struct studentrec stud)
{
/*   int gr = (100-stud.sum)/10;

switch(gr)
{
  case 0 :
  case 1 :
  case 2 :stud.grade='A';break;
  case 3 :
  case 4 :stud.grade='B';break;
  case 5 :
  case 6 :stud.grade='C';break;
  case 7 :
  case 8 :
  case 9 :
  case 10:stud.grade='F';break;
  default:stud.grade='X';cout << "\nInvalid Marks\n";
}
cout << "Obtained grade is " << stud.grade << endl;
*/
return stud;

}

void display(struct studentrec stud)
{

/*cout << "Obtained grade is " << stud.grade << endl;*/

}

