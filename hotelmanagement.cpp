#include<iostream>
using namespace std;
int main()
{
	int quant;
	int choice;
	//Quantity
	int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
	//food items sold
	int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
	//food items
	int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;
	
	cout<<"\n\t Quantity of items we have:";
	cout<<"\nRooms avaliable:";
	cin>>Qrooms;
	cout<<"\nQuantity of pasta:";
	cin>>Qpasta;
	cout<<"\nQuantity of burger:";
	cin>>Qburger;
	cout<<"\nQuantity of noodles:";
	cin>>Qnoodles;
	cout<<"\nQuantity of shake:";
	cin>>Qshake;
	cout<<"\nQuantity of chicken-roll:";
	cin>>Qchicken;
	
	m:
	cout<<"\n\t\t\t please select from the menu option:";
	cout<<"\n\t1) Rooms";
	cout<<"\n\t2) Pasta";
	cout<<"\n\t3) burger";
	cout<<"\n\t4) Noodles";
	cout<<"n\t5) shake";
	cout<<"\n\t6) chicken-rool";
	cout<<"\n\t7) information regarding sales and collection:";
	cout<<"\n\t) Exit:";
	
	cout<<"\n\n please enter your chioce:";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\n\n Enter the number of rooms you want:";
			cin>>quant;
			if(Qrooms-Srooms>=quant)
			{
				Srooms=Srooms+quant;
				Total_rooms=Total_rooms+quant+1200;
				cout<<"\n\n\t\t"<<quant<<"room\rooms have been alloted to you:";
			}
			else
			cout<<"\n\tonly"<<Qrooms-Srooms<<"Rooms remaining in hotel";
			break;
			
				case 2:
			cout<<"\n\n Enter pasta quantity:";
			cin>>quant;
			if(Qpasta-Spasta>=quant)
			{
				Spasta=Spasta+quant;
				Total_pasta=Total_pasta+quant+250;
				cout<<"\n\n\t\t"<<quant<<"pasta is the order:";
			}
			else
			cout<<"\n\tonly"<<Qpasta-Spasta<<"pasta remaining in hotel";
			break;
			
			case 3:
			cout<<"\n\n Enter burger quantity:";
			cin>>quant;
			if(Qburger-Sburger>=quant)
			{
				Sburger=Sburger+quant;
				Total_burger=Total_burger+quant+120;
				cout<<"\n\n\t\t"<<quant<<"burger is the order:";
			}
			else
			cout<<"\n\tonly"<<Qburger-Sburger<<"burger remaining in hotel";
			break;
			
			case 4:
			cout<<"\n\n Enter Noodles quantity:";
			cin>>quant;
			if(Qnoodles-Snoodles>=quant)
			{
				Snoodles=Snoodles+quant;
				Total_noodles=Total_noodles+quant+250;
				cout<<"\n\n\t\t"<<quant<<"noodles is the order:";
			}
			else
			cout<<"\n\tonly"<<Qnoodles-Snoodles<<"noodles remaining in hotel";
			break;
			
			case 5:
			cout<<"\n\n Enter Shakes quantity:";
			cin>>quant;
			if(Qshake-Sshake>=quant)
			{
				Sshake=Sshake+quant;
				Total_shake=Total_shake+ quant+120;
				cout<<"\n\n\t\t"<<quant<<"shake is the order:";
			}
			else
			cout<<"\n\tonly"<<Qshake-Sshake<<"shake remaining in hotel";
			break;
			
			case 6:
			cout<<"\n\n Enter chicken quantity:";
			cin>>quant;
			if(Qchicken-Schicken>=quant)
			{
				Schicken=Schicken+quant;
				Total_chicken=Total_chicken+quant+150;
				cout<<"\n\n\t\t"<<quant<<"chicken-roll is the order:";
			}
			else
			cout<<"\n\tonly"<<Qchicken-Schicken<<"chicken-roll remaining in hotel";
			break;
			
	        case 7:
	        	cout<<"\n\t\t Details of sales and collection:";
	        	cout<<"\n\n Number of rooms we had:"<<Qrooms;
	        	cout<<"\n\n Number of rooms we gave for rent"<<Srooms;
	        	cout<<"\n\n Remaining rooms:"<<Qrooms-Srooms;
	        	cout<<"\n\n Total rooms collection for the day:"<<Total_rooms;
	        	
	        	
	            cout<<"\n\n Number of pasta we had:"<<Qpasta;
	        	cout<<"\n\n Number of pasta we sold"<<Spasta;
	        	cout<<"\n\n Remaining pasta:"<<Qpasta-Spasta;
	        	cout<<"\n\n Total pasta collection for the day:"<<Total_pasta;
	        	
	        	cout<<"\n\n Number of burger we had:"<<Qburger;
	        	cout<<"\n\n Number of burger we sold"<<Sburger;
	        	cout<<"\n\n Remaining burger:"<<Qburger-Sburger;
	        	cout<<"\n\n Total burger collection for the day:"<<Total_burger;
	        	
	            cout<<"\n\n Number of noodles we had:"<<Qnoodles;
	        	cout<<"\n\n Number of noodles we sold"<<Snoodles;
	        	cout<<"\n\n Remaining noodles:"<<Qnoodles-Snoodles;
	        	cout<<"\n\n Total noodles collection for the day:"<<Total_noodles;
	        	
	        	cout<<"\n\n Number of shake we had:"<<Qshake;
	        	cout<<"\n\n Number of shake we sold"<<Sshake;
	        	cout<<"\n\n Remaining shake:"<<Qshake-Sshake;
	        	cout<<"\n\n Total shake collection for the day:"<<Total_shake;
	        	
	        	cout<<"\n\n Number of chicken-roll we had:"<<Qchicken;
	        	cout<<"\n\n Number of chicken-roll we sold"<<Schicken;
	        	cout<<"\n\n Remaining chicken-roll:"<<Qchicken-Schicken;
	        	cout<<"\n\n Total chicken-roll collection for the day:"<<Total_chicken;
	        	
	        	cout<<"\n\n\n total collection for the day:"<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
	            break;
				case 8:
	        		exit(0);
	        		 default:
	        		 	cout<<"\n please select the numbers mentioned above!";
						 			
	}
	goto m;
		
}
