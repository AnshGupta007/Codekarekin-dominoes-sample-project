#include<iostream>
using namespace std;

struct Foods
{
	int S_No;
	char Name[20];
	int Price;
};
int main()
{
	int S_No;
	char Name[20];
	int Price;
	cout<<"-------------------------------------------------------------------------------\n";
	cout<<"                          Menu\n                      ";
	cout<<"----------------------------------------------------------\n";
	
		cout<<"-------------------------------------------------------------------------------\n";
		cout<<"S.NO    Name                   Price\n";
		cout<<"-------------------------------------------------------------------------------\n";
	struct Foods F1={1,"       Fried Rice\t\t"  ,                 50};
	struct Foods F2={2,"       Pasta\t\t\t",                              100};
	struct Foods F3={3,"       Momos\t\t\t",                          70};
	struct Foods F4={4,"       Paratha\t\t\t",40};
	struct Foods F5={5,"       Maggie\t\t\t",            90};
	cout<<F1.S_No;
	cout<<F1.Name;
	cout<<F1.Price;
	cout<<endl;
	cout<<F2.S_No;
	cout<<F2.Name;
	cout<<F2.Price;
	cout<<endl;
	cout<<F3.S_No;
	cout<<F3.Name;
	cout<<F3.Price;
	cout<<endl;
	cout<<F4.S_No;
	cout<<F4.Name;
	cout<<F4.Price;
	cout<<endl;
	cout<<F5.S_No;
	cout<<F5.Name;
	cout<<F5.Price;
	cout<<endl;
cout<<"-------------------------------------------------------------------------------\n";
cout<<"Please enter item number:";
cin>>S_No;	
if(S_No==1)
{
	cout<<"FRIED RICE SELECTED";
}
else if(S_No==2)
{
	cout<<"PASTA SELECTED";
}
else if(S_No==3)
{
	cout<<"MOMOS SELECTED";
}
else if(S_No==4)
{
	cout<<"PARATHA SELECTED";
}
else if(S_No==5)
{
	cout<<"MAGGI SELECTED";
}
else{
	cout<<"NA";
}
cout<<endl;
int num;
cout<<"Enter the quantity:";
cin>>num;



int arr[5]={50,100,70,40,90};
int Total=arr[4]*num;
cout<<"Total:"<<Total;
cout<<endl;
cout<<"-------------------------------------------------------------------------------\n";
cout<<"                              INVOICE\n          ";
cout<<endl;
cout<<"-------------------------------------------------------------------------------\n";
cout<<endl;
cout<<"S.NO    Name                   Price\n";
cout<<F5.S_No;
	cout<<F5.Name;
	cout<<F5.Price;
	cout<<endl;
cout<<"-------------------------------------------------------------------------------\n";
int tarr[5]={50,100,70,40,90};
int total=tarr[4]*num;
cout<<"Total:"<<      Total;
cout<<endl;
cout<<"-------------------------------------------------------------------------------\n";
cout<<endl;
int Tax;
cout<<"     TAX:";
cin>>Tax;
int Discount;
cout<<"     DISCOUNT:";
cin>>Discount;
int Total_amount=Total+Tax-Discount;
cout<<"Total amount:"<<Total_amount;
cout<<endl;
cout<<"-------------------------------------------------------------------------------\n";
cout<<"                       THANK YOU! VISIT AGAIN\n"      ;
cout<<"-------------------------------------------------------------------------------\n";
}
