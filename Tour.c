#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void Kashmir();
void Goa();
void cy();
void uk();
void canada();
void usa();
void dubai();
void sl();
int main()
{
    printf("\nWelcome to Navbharat Tours and Travels");
    char name[100],cn[20],email[30],ch;int p;float amt,price;
    printf("\nEnter Name : ");gets(name);
    printf("\nEnter Contact Number : ");gets(cn);
    while(1)
    {
        if(strlen(cn)!=10)
        {
            printf("\nEnter Valid Contact Number.");
             printf("\nEnter Contact Number : ");gets(cn);break;
        }
        else
        {
            break;
        }

    }
    int per,tc,ft;
    printf("\nEnter Email-ID : ");gets(email);
    printf("\nDear %s, please choose the Travel Destination from below Packages",name);
    printf("\n------------Travel Package --------------\na) Domestic : ");
    printf("\n1.Kerala : 5-night, 6-days\n2.Kerala : 7-night, 8-days\n3.Kashmir : 6-night, 7-days\n4.Goa : 3-night, 4-days");
    printf("\n5.Chardham Yatra : 11-night, 12-days\n\nb) International :\n1.UK\n2.Canada\n3.USA\n4.Dubai\n5.Singapore\n------------------------------------------------\n");
    printf("\nEnter a for Domestic and b for International : ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a' : printf("\nEnter the Package Number : ");scanf("%d",&p);
                   switch(p)
                   {
                     case  1: printf("\nEnter Number of Persons : ");
                              scanf("%d",&per);
                              printf("\nWhat mode of Transportation will you prefer for Travelling ? ");
                              printf("\n1.Flight\n2.Trains\n3.Bus");
                              printf("\nEnter your choice : ");scanf("%d",&tc);
                              switch(tc)
                              {
                                case 1 : printf("\nYour Travelling Preference : Flight");
                                         printf("\nFlight Schedules : \n1.Indigo - 5:45 am\n2.Akasa Air - 13:00\n3.Indigo - 6:00 pm");
                                         printf("\nEnter Number of your convinient time of Flight : ");
                                         scanf("%d",&ft);
                                         if(ft==1)
                                            printf("\nPackage : Kerala : 5N-6D\nFlight : Indigo : 5:45 am");
                                         else if(ft==2)
                                            printf("\nPackage : Kerala : 5N-6D\nFlight : Akasa Air: 13:00 ");
                                         else 
                                         printf("\nPackage : Kerala : 5N-6D\nFlight : Indigo : 6:00 pm");
                                         printf("\nFlight Charges per person : 4500/-");
                                          price = 4500;
                                          amt= per*price;
                                         printf("\nMinimum Tour Hotel Package Amount : 50000/-");
                                         printf("\nGST : 18 percent : %0.2f",(0.18*amt));
                                         printf("\nTotal Amount : %0.2f",amt+50000+(0.18*amt));
                                         printf("\n\nRest of the Details Regarding Tour, Route and the Tickets will be sent on %s.",email);
                                         printf("\nThank you for Choosing Navbharat Travels\nHave a Great Journey!!!");break;
                                        
                                case 2 : printf("\nYour Travelling Preference : Train");
                                         printf("\nTrain Schedules : \n1.Chennai Express : 10:00 pm\n2.South Rail : 3:00 am");
                                         printf("\nEnter Number of your convinient time of Train : ");
                                         scanf("%d",&ft);
                                          if(ft==1)
                                            printf("\nPackage : Kerala : 5N-6D\nTrain : Chennai Express : 10:00 pm");
                                         else if(ft==2)
                                            printf("\nPackage : Kerala : 5N-6D\nTrain : South Rail :  3:00 am ");
                                         printf("\nTrain Charges per person : 1500/-");
                                          price = 1500;
                                          amt= per*price;
                                         printf("\nMinimum Tour Hotel Package Amount : 50000/-");
                                         printf("\nGST : 18 percent : %0.2f",(0.18*amt));
                                         printf("\nTotal Amount : %0.2f",amt+50000+(0.18*amt));
                                         printf("\n\nRest of the Details Regarding Tour, Route and the Tickets will be sent on %s.",email);
                                         printf("\nThank you for Choosing Navbharat Travels\nHave a Great Journey!!!"); break;
                                
                                case 3 : printf("\nYour Travelling Preference : Bus");
                                         printf("\nBus Schedules : \n1.Patel Tours and Travels\n2.Volvo");
                                         printf("\nEnter Number of your convinient time of Flight : ");
                                         scanf("%d",&ft);
                                          if(ft==1)
                                            printf("\nPackage : Kerala : 5N-6D\nBus : Patel Tours and Travels");
                                         else if(ft==2)
                                            printf("\nPackage : Kerala : 5N-6D\nBus : Volvo ");
                                         printf("\nFlight Charges per person : 700/-");
                                          price = 700;
                                          amt= per*price;
                                         printf("\nMinimum Tour Hotel Package Amount : 50000/-");
                                         printf("\nGST : 18 percent : %0.2f",(0.18*amt));
                                         printf("\nTotal Amount : %0.2f",amt+50000+(0.18*amt));
                                         printf("\n\nRest of the Details Regarding Tour, Route and the Tickets will be sent on %s.",email);
                                         printf("\nThank you for Choosing Navbharat Travels\nHave a Great Journey!!!");break;
                                default : printf("Invalid choice");
                              }break;
                    case 2 :  printf("\nEnter Number of Persons : ");
                              scanf("%d",&per);
                              printf("\nWhat mode of Transportation will you prefer for Travelling ? ");
                              printf("\n1.Flight\n2.Trains\n3.Bus");
                              printf("\nEnter your choice : ");scanf("%d",&tc);
                              switch(tc)
                              {
                                case 1 : printf("\nYour Travelling Preference : Flight");
                                         printf("\nFlight Schedules : \n1.Indigo - 5:45 am\n2.Akasa Air - 13:00\n3.Indigo - 6:00 pm");
                                         printf("\nEnter Number of your convinient time of Flight : ");
                                         scanf("%d",&ft);
                                         if(ft==1)
                                            printf("\nPackage : Kerala : 7N-8D\nFlight : Indigo : 5:45 am");
                                         else if(ft==2)
                                            printf("\nPackage : Kerala : 7N-8D\nFlight : Akasa Air: 13:00 ");
                                         else 
                                         printf("\nPackage : Kerala : 7N-8D\nFlight : Indigo : 6:00 pm");
                                         printf("\nFlight Charges per person : 4500/-");
                                          price = 4500;
                                          amt= per*price;
                                         printf("\nMinimum Tour Hotel Package Amount : 60000/-");
                                         printf("\nGST : 18 percent : %0.2f",(0.18*amt));
                                         printf("\nTotal Amount : %0.2f",amt+60000+(0.18*amt));
                                         printf("\n\nRest of the Details Regarding Tour, Route and the Tickets will be sent on %s.",email);
                                         printf("\nThank you for Choosing Navbharat Travels\nHave a Great Journey!!!");break;
                                        
                                case 2 : printf("\nYour Travelling Preference : Train");
                                         printf("\nTrain Schedules : \n1.Chennai Express : 10:00 pm\n2.South Rail : 3:00 am");
                                         printf("\nEnter Number of your convinient time of Train : ");
                                         scanf("%d",&ft);
                                         if(ft==1)
                                            printf("\nPackage : Kerala : 7N-8D\nTrain : Chennai Express : 10:00 pm");
                                         else if(ft==2)
                                            printf("\nPackage : Kerala : 7N-8D\nTrain : South Rail :  3:00 am ");
                                         printf("\nTrain Charges per person : 1500/-");
                                          price = 1500;
                                          amt= per*price;
                                         printf("\nMinimum Tour Hotel Package Amount : 60000/-");
                                         printf("\nGST : 18 percent : %0.2f",(0.18*amt));
                                         printf("\nTotal Amount : %0.2f",amt+60000+(0.18*amt));
                                         printf("\n\nRest of the Details Regarding Tour, Route and the Tickets will be sent on %s.",email);
                                         printf("\nThank you for Choosing Navbharat Travels\nHave a Great Journey!!!"); break;
                                
                                case 3 : printf("\nYour Travelling Preference : Bus");
                                         printf("\nFlight Schedules : \n1.Patel Tours and Travels\n2.Volvo");
                                         printf("\nEnter Number of your convinient time of Flight : ");
                                         scanf("%d",&ft);
                                         if(ft==1)
                                            printf("\nPackage : Kerala : 7N-8D\nBus : Patel Tours and Travels");
                                         else if(ft==2)
                                            printf("\nPackage : Kerala : 7N-8D\nBus : Volvo ");
                                         printf("\nFlight Charges per person : 700/-");
                                          price = 700;
                                          amt= per*price;
                                         printf("\nMinimum Tour Hotel Package Amount : 60000/-");
                                         printf("\nGST : 18 percent : %0.2f",(0.18*amt));
                                         printf("\nTotal Amount : %0.2f",amt+60000+(0.18*amt));
                                         printf("\n\nRest of the Details Regarding Tour, Route and the Tickets will be sent on %s.",email);
                                         printf("\nThank you for Choosing Navbharat Travels\nHave a Great Journey!!!");break;
                                default : printf("Invalid choice");
                     
                              }break;
                    case 3 : Kashmir();break;
                    case 4 : Goa();break;
                    case 5 : cy();break;
                   }
      
       case 'b' :  printf("\nEnter the Package Number : ");scanf("%d",&p);
                   switch(p)
                   {
                      case 1 : uk();break;
                      case 2 : canada();break;
                      case 3 : usa();break;
                      case 4 : dubai();break;
                      case 5 : sl();break;
                      default : printf("Invalid choice");
                   }break;
        default : printf("Invalid choice");

                   }

    }

    int per,tc,ft;float amt,price,km;char rans;
    void Kashmir()
    {
                              printf("\nEnter Number of Persons : ");
                              scanf("%d",&per);
                              printf("\nWhat mode of Transportation will you prefer for Travelling ? ");
                              printf("\n1.Flight\n2.Car");
                              printf("\nEnter your choice : ");scanf("%d",&tc);
                              switch(tc)
                              {
                                case 1 : printf("\nYour Travelling Preference : Flight");
                                         printf("\nFlight Schedules : \n1.SpiceJet - 9:00 am\n2.Akasa Air - 14:30\n3.Air India - 6:40 pm");
                                         printf("\nEnter Number of your convinient time of Flight : ");
                                         scanf("%d",&ft);
                                         if(ft==1)
                                            printf("\nPackage : Kashmir : 6N-7D\nFlight : Spicejet : 9:00 am");
                                         else if(ft==2)
                                            printf("\nPackage : Kashmir : 6N-7D\nFlight : Akasa Air: 14:30 ");
                                         else 
                                         printf("\nPackage : Kashmir : 6N-7D\nFlight : Air India : 6:40 pm");
                                         printf("\nFlight Charges per person : 5100/-");
                                          price = 5100;
                                          amt= per*price;
                                         printf("\nMinimum Tour Hotel Package Amount : 50000/-");
                                         printf("\nGST : 18 percent : %0.2f",(0.18*amt));
                                         printf("\nTotal Amount : %0.2f",amt+50000+(0.18*amt));
                                         printf("\n\nRest of the Details Regarding Tour, Route and the Tickets will be sent on the Registered Email");
                                         printf("\nThank you for Choosing Navbharat Travels\nHave a Great Journey!!!");break;
                                        
                                case 2 : printf("\nYour Travelling Preference : Car");
                                         
                                          if(per<4)
                                            printf("\nPackage : Kashmir : 6N-7D\nCar : Swift Desire");
                                         else if(per>=4 && per<=7)
                                            printf("\nPackage : Kashmir : 6N-7D\nCar : Innova");
                                            else
                                             printf("\nPackage : Kashmir : 6N-7D\nCar : As per Availabilty");
                                         printf("\nCar Charges per Kilometer : 17/-");
                                         printf("\nEnter Distance in Kilometer : ");
                                         scanf("%f",&km);
                                          price = 17*km;
                                          amt= per*price;
                                         printf("\nMinimum Tour Hotel Package Amount : 50000/-");
                                         printf("\nGST : 18 percent : %0.2f",(0.18*amt));
                                         printf("\nTotal Amount : %0.2f",amt+50000+(0.18*amt));
                                         printf("\n\nRest of the Details Regarding Tour, Route and the Car and Driver Details will be sent on Registered Email ");
                                         printf("\nThank you for Choosing Navbharat Travels\nHave a Great Journey!!!"); break;
                                
                                default : printf("Invalid choice");
                              }
    }
void Goa()
{
       printf("\nEnter Number of Persons : ");
                              scanf("%d",&per);
                              printf("\nWhat mode of Transportation will you prefer for Travelling ? ");
                              printf("\n1.Flight\n2.Car\n3.Train");
                              printf("\nEnter your choice : ");scanf("%d",&tc);
                              switch(tc)
                              {
                                case 1 : printf("\nYour Travelling Preference : Flight");
                                         printf("\nFlight Schedules : \n1.Indigo - 9:15 am\n2.Akasa Air - 4:20 am\n3.Air India - 5:15 pm");
                                         printf("\nEnter Number of your convinient time of Flight : ");
                                         scanf("%d",&ft);
                                         if(ft==1)
                                            printf("\nPackage : Goa : 3N-4D\nFlight : Indigo : 9:15 am");
                                         else if(ft==2)
                                            printf("\nPackage : Goa : 3N-4D\nFlight : Akasa Air: 4:20 am ");
                                         else 
                                         printf("\nPackage : Goa : 3N-4D\nFlight : Air India : 5:15 pm");
                                         printf("\nFlight Charges per person : 5540/-");
                                          price = 5500;
                                          amt= per*price;
                                         printf("\nMinimum Tour Hotel Package Amount : 50000/-");
                                         printf("\nGST : 18 percent : %0.2f",(0.18*amt));
                                         printf("\nTotal Amount : %0.2f",amt+50000+(0.18*amt));
                                         printf("\n\nRest of the Details Regarding Tour, Route and the Tickets will be sent on the Registered Email");
                                         printf("\nThank you for Choosing Navbharat Travels\nHave a Great Journey!!!");break;
                                        
                                case 2 : printf("\nYour Travelling Preference : Car");
                                         
                                          if(per<4)
                                            printf("\nPackage : Goa : 3N-4D\nCar : Swift Desire");
                                         else if(per>=4 && per<=7)
                                            printf("\nPackage : Goa : 3N-4D\nCar : Innova");
                                            else
                                             printf("\nPackage : Goa : 3N-4D\nCar : As per Availabilty");
                                         printf("\nCar Charges per Kilometer : 17/-");
                                         printf("\nEnter Distance in Kilometer : ");
                                         scanf("%f",&km);
                                          price = 17*km;
                                          amt= per*price;
                                         printf("\nMinimum Tour Hotel Package Amount : 50000/-");
                                         printf("\nGST : 18 percent : %0.2f",(0.18*amt));
                                         printf("\nTotal Amount : %0.2f",amt+50000+(0.18*amt));
                                         printf("\n\nRest of the Details Regarding Tour, Route and the Car and Driver Details will be sent on Registered Email ");
                                         printf("\nThank you for Choosing Navbharat Travels\nHave a Great Journey!!!"); break;

                                 case 3 :  printf("\nYour Travelling Preference : Train");
                                         printf("\nTrain Schedules : \n1.Vande Bharat- 2:00 am\n2.Vasco Express - 4:00 pm");
                                         printf("\nEnter Number of your convinient time of Train : ");
                                         scanf("%d",&ft);
                                         if(ft==1)
                                            printf("\nPackage : Goa : 3N-4D\nTrain : Vande Bharat- 2:00 am ");
                                         else 
                                         printf("\nPackage : Goa : 3N-4D\nTrain : Vasco Express - 4:00 pm");
                                         printf("\nFlight Charges per person : 2100/-");
                                          price = 2100;
                                          amt= per*price;
                                         printf("\nMinimum Tour Hotel Package Amount : 50000/-");
                                         printf("\nGST : 18 percent : %0.2f",(0.18*amt));
                                         printf("\nTotal Amount : %0.2f",amt+50000+(0.18*amt));
                                         printf("\n\nRest of the Details Regarding Tour, Route and the Car and Driver Details will be sent on Registered Email ");
                                         printf("\nThank you for Choosing Navbharat Travels\nHave a Great Journey!!!"); break;
                                
                                default : printf("Invalid choice");
                              }
}
void cy()
{
   int cp;float cost;
     printf("\nEnter Number of Persons (Adults) : ");
     scanf("%d",&per);
      printf("\nEnter Number of Persons (child) : ");
     scanf("%d",&cp);
     printf("Whole Tour will be Organised by the Navbharat Travels");
     printf("\nFor 2 Persons : 45000/-per person\nFor 3 Persons : 42500/- per person\nChild : 27000/- per Person");
     cost = (per*43000)+(cp*27000);
     printf("\nAverage Cost : %0.2f",cost);
     printf("\nThis Price Includes Travelling, Staying and Food");
     printf("\nAll the Details will be shared on the Registered Email 10 days prior Tour");
     printf("\nThank you for Choosing Navbharat Travels");
     printf("\nHave a great Journey!!!\n");
}
char rdate[30],ddate[30];
void uk()
{
   printf("\nEnter the Number of Persons : ");
   scanf("%d",&per);
   printf("\nEnter Departure Date : ");
   scanf("%s",&ddate);
   printf("\nAvailable Flights : \n1.Vistara - 8:30 pm IST \n2.Emirates - 11:00 am IST");
   printf("\nEnter Convinient Time Slot of Flight : ");
   scanf("%d",&ft);
   if(ft==1)
   {
      printf("\nDestination - UK \nFlight : Vistara - 8:30 pm IST");
      printf("\nDeparture Date : %s",ddate);
   }
   else
   {
    printf("\nDestination - UK \nFlight : Vistara - 8:30 pm IST");printf("\nDeparture Date : %s",ddate);
   }
    printf("\nDo you Want to book the Return Tickets as well ? (y/n) : ");getchar();
    scanf("%c",&rans);
    if(rans=='y')
    {
       printf("\nFlight Charges per Person : 1,20,000/-");
       price=120000;
       amt=2*price*per;
       printf("\nEnter Return Date : ");
      scanf("%s",&rdate);
       printf("Total Amount including Return Flight : %0.2f",amt);
       printf("\nHotel Charges in Advance: 100000");
       printf("\nTotal AMOUNT : %0.2f",amt+100000);
       printf("\nAll the details regarding the Tour and Booking Details will be Shared to the Registered Email");
        printf("\nThank you for Choosing Navbharat Travels");
     printf("\nHave a great Journey!!!\n");
    }
    else{
      
       printf("\nFlight Charges per Person : 1,20,000/-");
       price=120000;
       amt=price*per;
       printf("Total Amount including Return Flight : %0.2f",amt);
       printf("\nHotel Charges in Advance: 100000");
       printf("\nTotal AMOUNT : %0.2f",amt+100000);
       printf("\nAll the details regarding the Tour and Booking Details will be Shared to the Registered Email");
        printf("\nThank you for Choosing Navbharat Travels");
     printf("\nHave a great Journey!!!\n");
    }

}
void canada()
{
   printf("\nEnter the Number of Persons : ");
   scanf("%d",&per);
   printf("\nEnter Departure Date : ");
   scanf("%s",&ddate);
   printf("\nAvailable Flights : \n1.Vistara - 9:45 pm IST \n2.KLM - 12:00 pm IST");
   printf("\nEnter Convinient Time Slot of Flight : ");
   scanf("%d",&ft);
   if(ft==1)
   {
      printf("\nDestination - Canada \nFlight : Vistara - 9:45 pm IST");
      printf("\nDeparture Date : %s",ddate);
   }
   else
   {
    printf("\nDestination - Canada \nFlight : KLM - 12:00 pm IST");
    printf("\nDeparture Date : %s",ddate);
   }
    printf("\nDo you Want to book the Return Tickets as well ? (y/n) : ");getchar();
    scanf("%c",&rans);
    if(rans=='y')
    {
       printf("\nFlight Charges per Person : 93000/-");
       price=93000;
       amt=2*price*per;
       printf("\nEnter Return Date : ");
     scanf("%s",&rdate);
       printf("Total Amount including Return Flight : %0.2f",amt);
       printf("\nHotel Charges in Advance: 100000");
       printf("\nTotal AMOUNT : %0.2f",amt+100000);
       printf("\nAll the details regarding the Tour and Booking Details will be Shared to the Registered Email");
        printf("\nThank you for Choosing Navbharat Travels");
     printf("\nHave a great Journey!!!\n");
    }
    else{
      
       printf("\nFlight Charges per Person : 1,20,000/-");
       price=93000;
       amt=price*per;
       printf("Total Amount including Return Flight : %0.2f",amt);
       printf("\nHotel Charges in Advance: 100000");
       printf("\nTotal AMOUNT : %0.2f",amt+100000);
       printf("\nAll the details regarding the Tour and Booking Details will be Shared to the Registered Email");
        printf("\nThank you for Choosing Navbharat Travels");
     printf("\nHave a great Journey!!!\n");
    }
}
void usa()
{
   
   printf("\nEnter the Number of Persons : ");
   scanf("%d",&per);
   printf("\nEnter Departure Date : ");
   scanf("%s",&ddate);
   printf("\nAvailable Flights : \n1.Phillipine Airlines - 7:20 pm IST \n2.Qatar Airways - 11:30 am IST");
   printf("\nEnter Convinient Time Slot of Flight : ");
   scanf("%d",&ft);
   if(ft==1)
   {
      printf("\nDestination - USA \nFlight : Phillipine Airlines - 7:20 pm IST");
      printf("\nDeparture Date : %s",ddate);
   }
   else
   {
    printf("\nDestination - USA \nFlight : Qatar Airways - 11:30 am IST");
    printf("\nDeparture Date : %s",ddate);
   }
    printf("\nDo you Want to book the Return Tickets as well ? (y/n) : ");getchar();
    scanf("%c",&rans);
    if(rans=='y')
    {
       printf("\nFlight Charges per Person : 85,400/-");
       price=85400;
       amt=2*price*per;
       printf("\nEnter Return Date : ");
      scanf("%s",&rdate);
       printf("Total Amount including Return Flight : %0.2f",amt);
       printf("\nHotel Charges in Advance: 120000");
       printf("\nTotal AMOUNT : %0.2f",amt+120000);
       printf("\nAll the details regarding the Tour and Booking Details will be Shared to the Registered Email");
        printf("\nThank you for Choosing Navbharat Travels");
     printf("\nHave a great Journey!!!\n");
    }
    else{
      
       printf("\nFlight Charges per Person : 85,400/-");
       price=85400;
       amt=price*per;
       printf("Total Amount including Return Flight : %0.2f",amt);
       printf("\nHotel Charges in Advance: 120000");
       printf("\nTotal AMOUNT : %0.2f",amt+120000);
       printf("\nAll the details regarding the Tour and Booking Details will be Shared to the Registered Email");
        printf("\nThank you for Choosing Navbharat Travels");
     printf("\nHave a great Journey!!!\n");
    }
}
void dubai()
{
   
   printf("\nEnter the Number of Persons : ");
   scanf("%d",&per);
   printf("\nEnter Departure Date : ");
   scanf("%s",&ddate);
   printf("\nAvailable Flights : \n1.Indigo - 3:15 pm IST \n2.Air Arabia - 11:45 pm IST\n3.Qatar Airways - 8:20 am IST");
   printf("\nEnter Convinient Time Slot of Flight : ");
   scanf("%d",&ft);
   if(ft==1)
   {
      printf("\nDestination - Dubai \nFlight : Indigo - 3:15 pm IST");
      printf("\nDeparture Date : %s",ddate);
   }
   else if(ft==2)
   {
      printf("\nDestination - Dubai \nFlight : Air Arabia - 11:45 pm IST");
      printf("\nDeparture Date : %s",ddate);
   }
   else
   {
    printf("\nDestination - Dubai \nFlight : Qatar Airways - 8:20 am IST");
     printf("\nDeparture Date : %s",ddate);
   }
    printf("\nDo you Want to book the Return Tickets as well ? (y/n) : ");getchar();
    scanf("%c",&rans);
    if(rans=='y')
    {
       printf("\nFlight Charges per Person : 7000/-");
       price=7000;
       amt=2*price*per;
       printf("\nEnter Return Date : ");
      scanf("%s",&rdate);
       printf("Total Amount including Return Flight : %0.2f",amt);
       printf("\nHotel Charges in Advance: 50000/-");
       printf("\nTotal AMOUNT : %0.2f",amt+50000);
       printf("\nAll the details regarding the Tour and Booking Details will be Shared to the Registered Email");
        printf("\nThank you for Choosing Navbharat Travels");
     printf("\nHave a great Journey!!!\n");
    }
    else{
      
       printf("\nFlight Charges per Person : 7000/-");
       price=7000;
       amt=price*per;
       printf("Total Amount including Return Flight : %0.2f",amt);
       printf("\nHotel Charges in Advance: 50000");
       printf("\nTotal AMOUNT : %0.2f",amt+50000);
       printf("\nAll the details regarding the Tour and Booking Details will be Shared to the Registered Email");
        printf("\nThank you for Choosing Navbharat Travels");
     printf("\nHave a great Journey!!!\n");
    }
}
void sl()
{
     printf("\nEnter the Number of Persons : ");
   scanf("%d",&per);
   printf("\nEnter Departure Date : ");
   scanf("%s",&ddate);
   printf("\nAvailable Flights : \n1.Indigo - 3:00 am IST \n2.Air Asia - 16:45 pm IST\n3.Singapore Airlines - 5:40 am IST");
   printf("\nEnter Convinient Time Slot of Flight : ");
   scanf("%d",&ft);
   if(ft==1)
   {
      printf("\nDestination - Singapore \nFlight : Indigo - 3:00 am IST");
      printf("\nDeparture Date : %s",ddate);
   }
   else if(ft==2)
   {
      printf("\nDestination - Singapore \nFlight : Air Asia - 16:45 pm IST");
      printf("\nDeparture Date : %s",ddate);
   }
   else
   {
    printf("\nDestination - Singapore \nFlight : Singapore Airlines - 5:40 am IST");
     printf("\nDeparture Date : %s",ddate);
   }
    printf("\nDo you Want to book the Return Tickets as well ? (y/n) : ");getchar();
    scanf("%c",&rans);
    if(rans=='y')
    {
       printf("\nFlight Charges per Person : 12000/-");
       price=12000;
       amt=2*price*per;
       printf("\nEnter Return Date : ");
      scanf("%s",&rdate);
       printf("Total Amount including Return Flight : %0.2f",amt);
       printf("\nHotel Charges in Advance: 70000/-");
       printf("\nTotal AMOUNT : %0.2f",amt+0000);
       printf("\nAll the details regarding the Tour and Booking Details will be Shared to the Registered Email");
        printf("\nThank you for Choosing Navbharat Travels");
     printf("\nHave a great Journey!!!\n");
    }
    else{
      
       printf("\nFlight Charges per Person : 12000/-");
       price=12000;
       amt=price*per;
       printf("Total Amount including Return Flight : %0.2f",amt);
       printf("\nHotel Charges in Advance: 70000");
       printf("\nTotal AMOUNT : %0.2f",amt+70000);
       printf("\nAll the details regarding the Tour and Booking Details will be Shared to the Registered Email");
        printf("\nThank you for Choosing Navbharat Travels");
     printf("\nHave a great Journey!!!\n");
    }
}