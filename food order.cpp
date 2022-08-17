// welcome to online food ordering system..............................
// by VIKAS KUMAR
//vikaskumar20012001@gmail.com
//user id=1234
//password = pass

#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<unistd.h>
#include<windows.h>
using namespace std;
class one
{
	
     
public:
	void menu1();
	
};
void one::menu1()
{
	
		cout<<"\n\n\n\t\t\t\t\t\t ==========> WELCOME TO ONLINE FOOD ORDERING SYSTEM <=========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====> AVAILBLE FOODS <====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t========================== "<<endl;
	cout<<"\t[1] Veggie Supreme (Rs.480)\t\t\t[2] Exotica Pizza(Rs.440)\n\t[3] Chrispy Chicken (Rs.520)\t\t\t[4] Spaghetti (Rs.350)\n\t[5] Red souce pasta (Rs.420)\t\t\t[6] Double Cheese (Rs.540)\n\t[7] Ham Burger (Rs.390)\t\t\t\t[8] Margherita Pizza(Rs.525)\n\t[9] Fajitas (Rs.335)\t\t\t\t[10] Tempura (Rs.324)\n\n\n\t\t\t\t\t\t\t\t[11] EXIT"<<endl;
 cout<<"\n\t======================================================================================================================================="<<endl;
}
	class two:public one
	{
	protected:
		 int  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0;
     string y,ye;
     public:
void menu2()
{    ofstream write;
write.open("order.text");
if(!write)
{
	cout<<"file can not open"<<endl;
	exit (-1);
}

   a:
   	b:
   		c:
   	 cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
      cin>>ch;
    
      
  cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
 
  cin>>ye;
 
  if(ye=="y"|| ye=="Y")
  {
  	goto b;
  }
  else
  {
   switch(ch)
   {
   	case 1:
   			cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		a=480;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Veggie Supreme : 480";
   		write<<" \n";
   		write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Veggie Supreme "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   		
		   b=440;
   		s=s+b*pizza;
   		write<<"YOU ORDER  Exotica : 440";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Exotica "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 3:
   		cout<<"\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT :";
   		cin>>pizza;
   	
   		d=520;
   		s=s+d*pizza;
   		write<<"YOU ORDER  Chrispy Chicken : 520";
   	write<<" \n";
   		write<<"NUMBER OF Chrispy Chicken IS : "<<pizza;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER  Chrispy Chicken "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MANY SPAGHETTI YOU WANT:";
   		cin>>pizza;
   	
   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER  Spaghetti : 350";
   		write<<" \n";
   			write<<"NUMBER OF Spaghetti IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Spaghetti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	

   	
   	case 6:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		h=540;
   		s=s+h*pizza;
   		write<<"YOU ORDER Double Cheese : 540";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Double Cheese "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 7:
   		cout<<"\n\n\tHOW MANY HAM BURGER YOU WANT :";
   		cin>>pizza;
   	
   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDER Ham Burger : 390";
   		write<<" \n";
   			write<<"NUMBER OF Ham Burger IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Ham Burger "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   			cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER Margherita : 525";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Margherita "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 9:
   		cout<<"\n\n\tHOW MANY FAJITAS YOU WANT :";
   		cin>>pizza;
   	
   		m=335;
   		s=s+m*pizza;
   		write<<"YOU ORDER  Fajitas  : 335";
   		write<<" \n";
   			write<<"NUMBER OF Fajitas IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Fajitas "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 10:
   		cout<<"\n\n\tHOW MANY TEMPURA YOU WANT :";
   		cin>>pizza;
   	
   		n=324;
   		s=s+n*pizza;
   		write<<"YOU ORDER Tempura : 324";
   		write<<" \n";
   			write<<"NUMBER OF Tempura IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Tempura "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	
   	case 11:
   		cout<<"\n\t\t\t\t\t Brought To You By Team Vikas";
   	exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(int a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : 011           Order : XXXX123"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  Vikas Thakur"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

   
  write.close();
  }
  void show1()
  {
  	menu1();
  	menu2();
  }
  
};
class three:public one,public two
{
	public:
		void total()
      {
      		long userId; //for user id ..........
      		
			d:	
			cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t---------------------";
			cout<<"\n\t\t\t\t\t\t\tEnter Login Id = ";
			cin>>userId;
			cout<<"\t\t\t\t\t\t\t---------------------";
			if(userId!=1234)  
			{
				cout<<"\nDon't try to be smart.....Enter correct id\n";
				goto d;
			}
			
			z:
			string pwd="pass";  //password
			string pass="";  //empty string
			char c;	
				cout<<"\n\n\n\t\t\t\t\t\t\tPassword = "; 
				p:
				c=getch();
				cout<<"*";   //for printing * instead for password
				if(c!=13)
				{
					pass=pass+c;  //for concatenating the string
					goto p;
				}   
					
      			{
      			if(pass==pwd)
      			{
      				cout<<"\n\n\t\t\t\t\t\t\tAccess Granted...\n\n\n";
      				system("PAUSE");
      				system("CLS");
      				show1();
				}
				else
				{
				cout<<"\nWrong Password\n";
				goto z;
				}
			}
		}
};
int main()
{   
   three ob;
   ob.total();
   getch();
}
