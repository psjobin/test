#include <iostream>
#include <conio.h>
#include <time.h>

//hello world

int main()
{
	std::cout<<"****************************** B L A C K J A C K ******************************"<<std::endl<<std::endl;
	char rematch;
	do
	{
		std::cout<<"\n******************************** N E W  G A M E ********************************"<<std::endl<<std::endl;

		srand(time(NULL));

		int dealervalue[2]={0,0};
		dealervalue[0]=rand()%11+1;
		if(dealervalue[0]==11)
		{
			dealervalue[1]=rand()%10+1;
		}
		else
		{
			dealervalue[1]=rand()%11+1;
		}
		
		int dealersum=dealervalue[0]+dealervalue[1];
	
		std::cout<<"Dealer card #1 is : "<<dealervalue[0]<<std::endl<<std::endl;

		int playervalue[13]={0};
		
		int n=0;
		playervalue[n]=rand()%11+1;
	
	
		char ans;
		do
		{
			n++;
			if(playervalue[0]==11)
			{
				playervalue[n]=rand()%10+1;
			}
			else
			{
				playervalue[n]=rand()%11+1;
			}

			for(int b=0;b<=n;b++)
			{
				std::cout<<"Your card #" <<b<<" is : "<<playervalue[b]<<std::endl;
			}
		
			int sum=0;
			for(int a=0;a<=n;a++)
			{
				sum=sum+playervalue[a];
			}
		
			std::cout<<"Your total sum is : "<<sum<<std::endl<<std::endl;
			if(sum>21)
			{
				break;
			}

			std::cout<<"Hit or Stay (H/S)  : ";
			std::cin>>ans;
			std::cout<<std::endl;
		}while(ans=='H'||ans=='h');

	
		std::cout<<"Dealer card #2 is : "<<dealervalue[1]<<std::endl;
		std::cout<<"Dealer sum is : "<<dealervalue[0]+dealervalue[1]<<std::endl<<std::endl;

		int playersum=0;
		for(int a=0;a<=n;a++)
		{
			playersum=playersum+playervalue[a];
		}

		while(dealersum<21 && dealersum<playersum)
		{
			dealersum+=rand()%11+1;
			std::cout<<"Dealer sum is : "<<dealersum<<std::endl<<std::endl;
		}

		std::cout<<"player sum is : "<<playersum<<std::endl<<std::endl;

		if ((playersum<=21)&&(playersum>dealersum))
		{
			std::cout<<"You win!"<<std::endl;
		}
		else if ((playersum>21))
		{
			std::cout<<"Dealer wins!"<<std::endl;
		}
		else if (dealersum>21)
		{
			std::cout<<"You win!"<<std::endl;
		}
		else if(dealersum>playersum)
		{
			std::cout<<"Dealer wins!"<<std::endl;
		}
		else
		{
			std::cout<<"We have a tie!"<<std::endl;
		}

		std::cout<<std::endl;
		std::cout<<"Would you like to play again? (Y/N) : ";
		std::cin>>rematch;
	}while(rematch=='Y'||rematch=='y');

	std::cout<<"Good bye!"<<std::endl;
	
	_getch();
	return 0;
}
