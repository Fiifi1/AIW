#include <iostream>
#include <string>
#include <fstream>


using namespace std;

struct student
{

string IDnumber;
string name;
int age;
char gender;
double score;
char grade;

};



int main()
{
ofstream outfile;
outfile.open("results.txt");

double averageScore=0, averageAge=0;

outfile<<"ID NUMBER"<<"\t"<<"Name"<<"\t"<<" AGE "<<"Gender"<<"\t"<<"Score"<<"\t"<<" Grade "<<endl;
outfile<<"***************************************************************"<<endl;
student a[5];

for (int i=0; i<=4; i++){

 cout<<"Enter student ID\t";
 cin>>a[i].IDnumber;

 cout<<"Enter Student name\t";
 cin>>a[i].name;

 cout<<"Enter student age\t";
 cin>>a[i].age;

 cout<<"Enter student gender: M / F\t";
 cin>>a[i].gender;

 cout<<"Enter student score\t";
 cin>>a[i].score;

 averageScore += (a[i].score);
 averageAge += (a[i].age);

 cout<<endl<<endl;

 if (a[i].score >=80 && a[i].score <=100)
		{
        a[i].grade = 'A';
        } else if (a[i].score >= 70 && a[i].score < 80)
            {
            a[i].grade = 'B';
            } else if ( a[i].score>= 60 && a[i].score < 70)
                {
                a[i].grade = 'C';
                } else if (a[i].score >= 50 && a[i].score < 60)
                    {
                    a[i].grade = 'D';
                    } else if (a[i].score>= 40 && a[i].score < 50)
                        {
                        a[i].grade = 'E';
                        }   else if (a[i].score <=39 )
                            {
                            a[i].grade = 'F';
                            }

    outfile<<(i+1)<<". "<<a[i].IDnumber<<" \t\t "<<a[i].name<<"\t"<<a[i].age<<"\t"<<a[i].gender<<"\t"<<a[i].score<<"\t"<<a[i].grade<<endl<<endl;


}
    outfile<<"AVERAGE SCORE: "<<averageScore/5<<endl;
    outfile<<"AVERAGE AGE: "<<averageAge/5<<endl;
    outfile<<"************************************************************"<<endl;


    return 0;

}
