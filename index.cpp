#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
	int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qsamosa=0;
	//food items sold
	int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Ssamosa=0;
	// Total price of items 
	int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_samosa=0;
	
	cout<<"\n\t\tQuantity of items we have";
	cout<<"\n Rooms avaliable : ";
	cin>>Qrooms;
	cout<<"\n Quantity of Pasta : ";
	cin>>Qpasta;
	cout<<"\n Quantity of Burger : ";
	cin>>Qburger;
	cout<<"\n Quantity of Noodles : ";
	cin>>Qnoodles;
	cout<<"\n Quantity of Shake : ";
	cin>>Qshake;
	cout<<"\n Quantity of samosa : ";
	cin>>Qsamosa;

	m:
	cout<<"\n\t\t\tPlease select from the given menu options";
	cout<<"\n\n 1) Rooms";
	cout<<"\n 2) Pasta";
	cout<<"\n 3) Burger";
	cout<<"\n 4) Noodles";
	cout<<"\n 5) Shake";
	cout<<"\n 6) samosa";
	cout<<"\n 7) Information regarding sales and collection";
	cout<<"\n 8) Exit";
	cout<<"\n\n Please enter Your Choice : ";
	cin>>choice;
	
	switch(choice)
	{
	    case 1:
			cout<<"\n\n Enter Number of rooms you want : ";
			cin>>quant;
			if(Qrooms-Srooms >= quant)
			{
				Srooms = Srooms + quant;
				Total_rooms =Total_rooms + (quant*1200);
				cout<<"\n\n\t\t"<<quant<<" room/rooms have been alotted! ";	
			}
			else
			
			cout<<"\n\tOnly "<<Qrooms-Srooms<<" Rooms Remaining in hotel";
			break;
			
	    
		case 2:
			cout<<"\n\n Enter Pasta Quantity : ";
			cin>>quant;
			if(Qpasta-Spasta >= quant)
			{
				Spasta =Spasta + quant;
				Total_pasta =Total_pasta + (quant*250);
				cout<<"\n\t"<<quant<<" Pasta is the order";	
			}
			else
			cout<<"\n\n\t\tOnly "<<Qpasta-Spasta<<" Pastas Remaining in stock";
			break;
			
		case 3:
			cout<<"\n\n Enter Burger Quantity : ";
			cin>>quant;
			if(Qburger-Sburger >= quant)
			{
				Sburger =Sburger + quant;
				Total_burger =Total_burger + quant*50;
				cout<<"\n\n\t\t"<<quant<<" Burger is the order";	
			}
			else
			cout<<"\n\tOnly "<<Qburger-Sburger<<" Burgers Remaining in stock";
			break;
			
		case 4:
			cout<<"\n\n Enter Noodles Quantity : ";
			cin>>quant;
			if(Qnoodles-Snoodles >= quant)
			{
				Snoodles =Snoodles + quant;
				Total_noodles =Total_noodles + quant*200;
				cout<<"\n\n\t\t"<<quant<<" Noodles is the order";	
			}
			else
			cout<<"\n\tOnly "<<Qnoodles-Snoodles<<" Noodles Remaining in stock";
			break;
			
		case 5:
			cout<<"\n\n Enter Shakes Quantity : ";
			cin>>quant;
			if(Qshake-Sshake >= quant)
			{
				Sshake =Sshake + quant;
				Total_shake =Total_shake + quant*170;
				cout<<"\n\n\t\t"<<quant<<" shakes is the order";	
			}
			else
			cout<<"\n\tOnly "<<Qshake-Sshake<<" shakes Remaining in stock";
			break;
			
		case 6:
			cout<<"\n\n Enter Chicken-roll Quantity : ";
			cin>>quant;
			if(Qsamosa-Ssamosa >= quant)
			{
				Ssamosa =Ssamosa + quant;
				Total_samosa=Total_samosa + quant*10;
				cout<<"\n\n\t\t"<<quant<<" samosa is the order";	
			}
			else
			cout<<"\n\tOnly "<<Qsamosa-Ssamosa<<" samosa Remaining in stock";
			break;
			
		case 7:

			cout<<"\n\t\tDetails of sales and collection ";
			cout<<"\n\n Number of Rooms we had : "<<Qrooms;
			cout<<"\n Number of Rooms we gave for rent : "<<Srooms;
			cout<<"\n Remaining Rooms : "<<Qrooms-Srooms;
			cout<<"\n\n Total Rooms collection for the Day : "<<Total_rooms;
			
			cout<<"\n\n Number of Pastas we had : "<<Qpasta;
			cout<<"\n Number of Pastas we sold : "<<Spasta;
			cout<<"\n Remaining Pastas : "<<Qpasta-Spasta;
			cout<<"\n\n Total Pasta collection for the Day : "<<Total_pasta;
			
			cout<<"\n\n Number of burgers we had : "<<Qburger;
			cout<<"\n Number of burgers we sold : "<<Sburger;
			cout<<"\n Remaining Burgers : "<<Qburger-Sburger;
			cout<<"\n\n Total Burger collection for the Day : "<<Total_burger;
			
			cout<<"\n\n Number of Noodles we had : "<<Qnoodles;
			cout<<"\n Number of Noodles we sold : "<<Snoodles;
			cout<<"\n Remaining Noodles : "<<Qnoodles-Snoodles;
			cout<<"\n\n Total Noodles collection for the Day : "<<Total_noodles;
			
			cout<<"\n\n Number of shakes we had : "<<Qshake;
			cout<<"\n Number of Shakes we sold : "<<Sshake;
			cout<<"\n Remaining Shakes : "<<Qshake-Sshake;
			cout<<"\n\n Total Shakes collection for the Day : "<<Total_shake;
			
			cout<<"\n\n Number of samosa we had : "<<Qsamosa;
			cout<<"\n Number of samosa we sold : "<<Ssamosa;
			cout<<"\n Remaining samosa : "<<Qsamosa-Ssamosa;
			cout<<"\n\n Total samosa collection for the Day : "<<Total_samosa;
			
			cout<<"\n\n\n Total Collection for the day : "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_samosa;
			break;
		case 8:
			exit(0);
		default:
			cout<<"\n Please select from the numbers mentioned above!";
	}

	goto m;
}
