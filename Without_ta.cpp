#include<iostream>
using namespace std;
class Person
{
protected:
    string name;
    string id;
    int ag;//age
    string ge;//Gender
    string bg; //blood  group
    string re;//religion
    string nat;//nationality
    string con;//contact number

    
public:
  
   Person(string n,string i,int a,string g,string b,string r,string na,string co){
       name=n;
       ag=a;
       id=i;
       ge=g;
       bg=b;
       re=r;
       nat=na;
       con=co;
   }
   ~Person()
   {

       cout<<name<<"  ";
   }
void showinfo(){
       cout<<"  "<<endl;
       cout<<"________Person________"<<endl;
       cout<<"Name                  : "<<name<<endl;
       cout<<"NID                   : "<<id<<endl;
       cout<<"Age                   : "<<ag<<"-years"<<endl;
       cout<<"Gender                : "<<ge<<endl;
       cout<<"Blood group           : "<<bg<<endl;
       cout<<"Religion              : "<<re<<endl;
       cout<<"Nationality           : "<<nat<<endl;
       cout<<"Contact number        : "<<con<<endl;
       cout<<"  "<<endl;
   }


   
};
//Hierarchical inheritance 
class Employee : public Person{
protected:
   
   string qu;//qu=qualification
   float sa;//sa=salary

public:
 Employee(string n,int a,string g,string b,string r,string na,string i,string q,float s,string co):Person(n,i,a,g,b,r,na,co){
     
     qu=q;
     sa=s;
 }
 
 void showinfo(){
       cout<<"  "<<endl;
       cout<<"_______Employee_______"<<endl;
       cout<<"Name                  : "<<name<<endl;
       cout<<"Identity              : "<<id<<endl;
       cout<<"Age                   : "<<ag<<endl;
       cout<<"Gender                : "<<ge<<"-years"<<endl;
       cout<<"Qualification         : "<<qu<<endl;
       cout<<"Blood group           : "<<bg<<endl;
       cout<<"Religion              : "<<re<<endl;
       cout<<"Nationality           : "<<nat<<endl;
       cout<<"Contact number        : "<<con<<endl;
       cout<<"Salary                : "<<sa<<"_$"<<endl;
       cout<<"  "<<endl;
   }

};
//Hierarchical inheritance 
class Student: public Person{
protected:
     
     float cgpa;
    string shift;
public:
   Student(string n,int a,string g,string b,string r,string na,string i,float c,string sh,string co):Person(n,i,a,g,b,r,na,co)
   {
   
   cgpa=c;
   shift=sh;
   }
  void showinfo(){
       cout<<"  "<<endl;
       cout<<"________Student_______"<<endl; 
       cout<<"Name                  : "<<name<<endl;
       cout<<"Identity              : "<<id<<endl;
       cout<<"CGPSA                 : "<<cgpa<<endl;
       cout<<"Shift                 : "<<shift<<endl;
       cout<<"Age                   : "<<ag<<"-years"<<endl;
       cout<<"Gender                : "<<ge<<endl;
       cout<<"Blood group           : "<<bg<<endl;
       cout<<"Religion              : "<<re<<endl;
       cout<<"Nationality           : "<<nat<<endl;
       cout<<"Contact number        : "<<con<<endl;
       cout<<"  "<<endl;
   }

};

// Multilevel inheritance & Hierarchical inheritance
class Faculty: public Employee{
private:
string fn;//fn=faculty name
public:
    Faculty(string n,int a,string g,string b,string r,string na,string i,string q,string f,float s,string co):Employee(n,a,g,b,r,na,i,q,s,co)
    {
        fn =f;
    }
void showinfo(){
       cout<<"  "<<endl;
       cout<<"_______Faculty________"<<endl;
       cout<<"Name                  : "<<name<<endl;
       cout<<"Identity              : "<<id<<endl;
       cout<<"Faculty name          : "<<fn<<endl;
       cout<<"Age                   : "<<ag<<"-years"<<endl;
       cout<<"Gender                : "<<ge<<endl;
       cout<<"Qualification         : "<<qu<<endl;
       cout<<"Blood group           : "<<bg<<endl;
       cout<<"Religion              : "<<re<<endl;
       cout<<"Nationality           : "<<nat<<endl;
       cout<<"Contact number        : "<<con<<endl;
       cout<<"Salary                : "<<sa<<"_$"<<endl;
       cout<<"  "<<endl;
   }


};
// Multilevel inheritance & Hierarchical inheritance
class Officer: public Employee{
private:
string dn;//da=department name
string orn;//orn=office room number
public:
    Officer(string n,int a,string g,string b,string r,string na,string i,string q,string d,string o,float s,string co):Employee(n,a,g,b,r,na,i,q,s,co)
    {
        dn =d;
        orn=o;
    }
void showinfo(){
       cout<<"  "<<endl;
       cout<<"________Officer_______"<<endl;
       cout<<"Name                  : "<<name<<endl;
       cout<<"Identity              : "<<id<<endl;
       cout<<"Department name       : "<<dn<<endl;
       cout<<"Age                   : "<<ag<<"-years"<<endl;
       cout<<"Gender                : "<<ge<<endl;
       cout<<"Qualification         : "<<qu<<endl;
       cout<<"Blood group           : "<<bg<<endl;
       cout<<"Religion              : "<<re<<endl;
       cout<<"Nationality           : "<<nat<<endl;
       cout<<"Contact number        : "<<con<<endl;
       cout<<"Salary                : "<<sa<<"_$"<<endl;
       cout<<"Fffice room number    : "<<orn<<endl;
       cout<<"  "<<endl;
   }

};
// Multilevel inheritance
class ScholarshipStudent:public Student
{
private:
string ams;//am=amount of scholarship
public:
ScholarshipStudent(string n,int a,string g,string b,string r,string na,string i,float c,string sh,string am,string co):Student(n,a,g,b,r,na,i,c,sh,co)
{
    ams=am;
}
void showinfo(){
       cout<<"  "<<endl;
       cout<<"__ScholarshipStudent__"<<endl;
       cout<<"Name                  : "<<name<<endl;
       cout<<"Identity              : "<<id<<endl;
       cout<<"CGPSA                 : "<<cgpa<<endl;
       cout<<"Shift                 : "<<shift<<endl;
       cout<<"Amount of scholarship : "<<ams<<endl;
       cout<<"Age                   : "<<ag<<"-years"<<endl;
       cout<<"Gender                : "<<ge<<endl;
       cout<<"Blood group           : "<<bg<<endl;
       cout<<"Religion              : "<<re<<endl;
       cout<<"Nationality           : "<<nat<<endl;
       cout<<"Contact number        : "<<con<<endl;
       cout<<"  "<<endl;
   }

};

 
int main (){
    Person p1("Jonayat","2324355",20,"male","A+","Islam","Bangladeshi","+88013422313");
    p1.showinfo();
    Employee p2("Joy",27,"male","A+","Islam","Bangladeshi","21-43","graduate",45335.3,"+88013422313");
    p2.showinfo();
    Faculty p3("Joy",27,"male","A+","Islam","Bangladeshi","21-43","graduate","computer science",45335.35,"+88013422313");
    p3.showinfo();
    Officer p4("Joy",27,"male","A+","Islam","Bangladeshi","21-43","PHD","CSE","F11",4535535.35,"+88013422313");
    p4.showinfo();
    Student p5("Jonayat",20,"male","A+","Islam","Bangladeshi","34-43",4.00,"morning","+88013422313");
    p5.showinfo();
    ScholarshipStudent p6("Jonayat",20,"male","A+","Islam","Bangladeshi","34-43",4.00,"morning","20% from total tuition fee","+88013422313");
    p6.showinfo();
  
    return 0;
}