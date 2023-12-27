#include <bits/stdc++.h>

using namespace std;
class student{
    public:
    int Roll_no;
    string Name;
    string School_Name;
    private: 
    int Fees;
    
     public:
     void code()
     {
        cout<<"Codes"<<endl;

     }
    void sing()
    {
        cout<<"Sing a song"<<endl;
    }
    int getFees()
    {
        return Fees;
    }
    void setFees(int Fees)
    {
        (*this).Fees= Fees;// this is the pointer to the current object 
        // this->Fees =  Fees;
    }
    

};
 // object creation
 //static memory 


 int main()
 { 
     // object creation
 //static memory 
 student suresh;

 suresh.Roll_no = 72;
 suresh.Name = "Suresh";
 suresh.School_Name = "abc";



 cout<< suresh.Roll_no<<endl;
 cout<<  suresh.Name<<endl;
 cout<<  suresh.School_Name<<endl;

  //Dynamic memory 
 student* Ramesh = new student();
    return 0;


 }