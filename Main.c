#include<stdio.h>
int main()
{
	int choice , transactions = 0;
	float balance = 10000, amount ;
	
	printf(" ~ WELCOME TO OUR BANK ~ ");
	printf("Intital Balance : $%.2f\n",balance);
	
	while(transactions < 5 )
	{
		printf("1. Check Balance\n");
		printf("2. Deposit\n");
		printf("3. Withdraw\n");
		printf("4. Exit\n");
		printf("Enter Your Choice :\n");
		scanf("%d",&choice);
		
		if( choice == 1)
		{
			printf(" Your Current Balance Is:$%.2f\n",balance);
			transactions++;
		}
		else if (choice == 2)
		{
			printf("Enter The Amount To Deposit:\n");
			scanf("%f",&amount);
			if( amount > 0)
			{
				balance += amount ;
				printf("Amount Deposited Successfully !!\n");
			}
			else 
			{
				printf("Invalid Amount, Plesae Enter A Valid Amount\n");
			}
			transactions++;
		}
	
	  else if ( choice == 3)
	  {
	 	printf("Enter The Amount To Withdraw:\n");
	  	scanf("%f",&amount);
	 	if(amount <= 0)
		 {
		 	printf("Invalid Ammount ! Enter A Valid Amount\n");
		 }
		  else if ( amount > balance - 500)
		  {
		  	printf("Insufficient Funds or Minimum $500 Must Remain In Youe Account !\n" );
		  }
		  else 
		  {
		    balance -= amount ;
		    printf("Withdrawl Successfull ! Updated Balance :$%.2f\n",balance);
		  }
		  transactions++;
	  }
	    else if( choice == 4)
	   {
	 	printf(" Thankyou For Choosing Us !!\n");
	 	break ;
	  } 
	   else 
	   { 
	 	printf("Invalid Input ! Plesae Enter Between 1 - 4.\n");
	 	continue ;
	  }
	    
	    if (transactions == 5)
	    {
	    	printf(" \nTranscation Limit Reached (5 per session).\n");
	    }
   }
    
    printf("----Transaction Summery----\n");
    printf("Total Transactions:%d\n",transactions);
    printf("Final Balance :$%d.2f\n",balance);
    printf("Session Ended !\n");
    
    return 0 ;
}
