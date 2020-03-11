#include<iostream>
// #include<pair>

using namespace std;

int main()
 {

class student{
public:
    string name;
    int age;
    int marks;
};

student s1;
s1.name = "harsh";
s1.age = 20;
s1.marks = 0;

student s2;
s2.name = "anmol";
s2.age = 12;
s2.marks = 10;

pair<string,int> p1;
pair<string,float> p2;
pair<float,int> p3;
pair<string,student> p4,p5;     //data type can be self made also


p1 = make_pair("harsh",20);
cout<<p1.first<<"  "<<p1.second<<endl;      // first second is used to access elements of a pair

p4 = make_pair("harsh",s1);                 //make_pair() is used to put values in pair
cout<<endl<<p4.first<<"  "<<p4.second.age<<"  "<<endl;

p5 = make_pair("anmol",s2);
cout<<endl<<p5.first<<"  "<<p5.second.age<<"  "<<endl;

cout<<(p4.second.marks<p5.second.marks)<<endl;

return 0;
}
