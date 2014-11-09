#include<iostream>
#include<string>

using namespace std;

struct dateofbirth{
    int day;
    int month;
    int year;
};

struct studentrec{

    string name;
    int roll;
    int sem;

    dateofbirth dob;
}; 

struct studentrec display(struct studentrec stud);

int main()
{

int n,i,j;

cout << "Enter the number of students  :";
cin >> n;

struct studentrec student[n];

for(i=0;i<n;i++)
{
cout << "Enter the student name of student "<<(i+1) << ":";
cin >> student[i].name;

cout << "Enter the roll no  :";
cin >> student[i].roll;

cout << "Enter the semester :";
cin >> student[i].sem;

cout << "Enter the day of birth :";
cin >> student[i].dob.day;

cout << "Enter the month of birth :";
cin >> student[i].dob.month;

cout << "Enter the year of birth :";
cin >> student[i].dob.year;

cout << endl;
}

for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
   {
     if(student[i].name < student[j].name)
       {
         struct studentrec temp;
         temp = student[j];
         student[j]=student[i];
         student[i]=temp;
       }
   }
}


cout << "Entered student record in alphabetical order :\n";

for(i=0;i<n;i++)

{ display(student[i]);}

return 0;
}









struct studentrec display(struct studentrec student)
{
cout << "" << endl << endl;

cout << "Name:\t"<< student.name << endl;
cout << "Roll:\t"<< student.roll << endl;
cout << "Sem:\t"<< student.sem << endl;
cout << "Date of Birth: "<< student.dob.day <<"/"<< student.dob.month <<"/"<< student.dob.year<< endl;

return student;
}



