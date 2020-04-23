#include <iostream>
#include <fstream>
#include <conio.h>
#include <unistd.h>
#include <iomanip> 
using namespace std;
class customer 
{
	public:
	string customername;
    string carmodel;
    string carnumber;
    char data;
};
class rent : public customer
{
	public:
	int days,rentalfee; 
	rent(){
		days=0;
		rentalfee=0;
	}
	void data()
	{
		int login();
		login();
	cout << "\t\t\t\tPlease Enter your Name: ";
    cin >> customername;
    cout<<endl;
    do
    {
    	system("color a4");
        cout <<"\t\t\t\tPlease Select a Car"<<endl;
        cout<<"\t\t\t\tEnter 'A' for Audi RS6 Avant 2020."<<endl;
        cout<<"\t\t\t\tEnter 'B' for Bentley Flying Spur 2020."<<endl;
        cout<<"\t\t\t\tEnter 'C' for Mercedes-Benz GLB 2020."<<endl;
        cout<<endl;
        cout<<"\t\t\t\tChoose a Car from the above options: ";
        cin >>carmodel;
        cout<<endl;
  t<<"--------------------------------------------------------------------------"<<endl;
 if(carmodel=="A")
 {
 	system("CLS");
 
		cout<<"You have choosed Audi RS6 Avant 2020"<<endl;
		 ifstream inA("A.txt");
         char str[200];
         while(inA) {
         inA.getline(str, 200);  
         if(inA) cout << str << endl;
}
sleep(2);
  }
  if(carmodel=="B")
  {
  	system("CLS");
  
		cout<<"You have choosed Bentley Flying Spur 2020"<<endl;
		 ifstream inB("B.txt");
         char str[200];
         while(inB) {
         inB.getline(str, 200);  
         if(inB) cout << str << endl;
         
     }
     sleep(2);
 }
 if(carmodel=="C")
 {
 	system("CLS");
	     cout<<"You have choosed Mercedes-Benz GLB 2020"<<endl;
		 ifstream inC("C.txt");
         char str[200];
         while(inC) {
         inC.getline(str, 200);  
         if(inC) cout << str << endl;
     }
     sleep(2);
}  
if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" )
       {cout<<" Invaild Car Model. Please try again|"<<endl;
        }
while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" );
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: "<<endl; 
    cout<<"Please select a Car No. : ";
    cin >> carnumber;
    cout<<"Number of days you wish to rent the car : ";
    cin >> days;
    cout<<endl;
	}
	void calculate()
	{
		system("color b0");
		sleep(1);
		system ("CLS");
		cout<<"Calculating rent. Please wait......"<<endl;
		sleep(2);
		if(carmodel == "A"||carmodel=="a")
        rentalfee=days*56;
        if(carmodel == "B" ||carmodel=="b")
        rentalfee=days*60;
        if(carmodel == "C" ||carmodel=="c")
        rentalfee=days*75;
    }
void showrent()
    {
    cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
    cout << "\t	--------------------------------------------------------------------------"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
    cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
    cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<carmodel<<" |"<<endl;
    cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<carnumber<<" |"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
    cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	----------------------------------------------------------"<<endl;
    cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
    cout << "\t\t	Otherwise penalty fee will be applied"<<endl;
    cout << "\t\t	-----------------------------------------------------------"<<endl;
    int f;
    system("PAUSE");
    
    system ("CLS");
    system("color e4");
     ifstream inf("thanks.txt");
  char str[300];

  while(inf) {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
	}
};
class welcome //welcome class
{
	public:
	int welcum()
	{
 ifstream in("welcome.txt"); 

  if(!in) {
    cout << "Cannot open input file.\n";
  }
  char str[1000];
  while(in) {
    in.getline(str, 1000);
    if(in) cout << str << endl;
  }
  in.close();
  sleep(1);
  cout<<"\nStarting the program please wait....."<<endl;
  sleep(1);
  cout<<"\nloading up files....."<<endl;
  sleep(1);
  system ("CLS"); 
}

};
int main()
{
system("color b0");
welcome obj1; 
obj1.welcum(); 
rent obj2; 
obj2.data();
obj2.calculate();
obj2.showrent();

return 0;
}
int login(){
	system("color c7");
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
   cout<<"\t\t\t--------------------------------------------------------------------------";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";	
   cout<<"\t\t\t--------------------------------------------------------------------------\n\n";	
   cout << "\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "12345"){
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}

