#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>


using namespace std;

// start of class

class thriftshop{
public:
void main_menu();
void SellerBook();
void Bookbook();
void Transaction();
void Delivery();
void SubjectofBook();
void Sellercontactdetail();
void Buyercontactdetail();

};

// End of the class 
// For Displaying the main menu

void thriftshop::main_menu()
{

int choice;
while(choice!=5)
{

  
cout<<"\n\t\t\t\t*************************";
cout<<"\n\t\t\t\t SECOND HAND BOOK SHOP :THRIFTSHOP ";
cout<<"\n\t\t\t\t      * MAIN MENU *";
cout<<"\n\t\t\t\t*************************";
cout<<"\n\n\n\t\t\t1.Sell A Book";
cout<<"\n\t\t\t2.Customer Records";
cout<<"\n\t\t\t3.Rooms Allotted";
cout<<"\n\t\t\t4.Edit Record";
cout<<"\n\t\t\t5.Exit";
cout<<"\n\n\t\t\tEnter Your Choice: ";
cin>>choice;

switch(choice)
{

case 1:	
break;

case 2:
break;

case 3: 
break;

case 4:	
break;

case 5: break;

default:
{

cout<<"\n\n\t\t\tWrong choice.....!!!";
cout<<"\n\t\t\tPress any key to   continue....!!";

getch();
}

}

}

}