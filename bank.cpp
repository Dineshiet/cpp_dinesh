// bank program using functions
#include <iostream>
using namespace std;
int balance=200000;
int withdraw();
int check_balance();
int main()

{
int type, select;

cout<<"\t\t==------------------------------------------------------------------------------==\n";
cout<<"\t\t== ==\n";
cout<<"\t\t== WELCOME TO MY BANK PROGRAM ==\n";
cout<<"\t\t== ==\n";
cout<<"\t\t==------------------------------------------------------------------------------==\n";

cout<<"\t\t PLEASE ENTER THE ACCOUNT TYPE \n ";

cout<<"\t\t 1).SAVING ACCOUNT \n ";

cout<<"\t\t 2).CURRENT ACCOUNT \n ";
cin>>type;
if (type==1)
{
cout<<"\t\t\t SAVING ACCOUNT\n";

}
else if (type==2)
{
cout<<"\t\t\t CURRENT ACCOUNT\n";

}
else
cout<<"\t\t\t INVALID! ENTRYY !!!";

cout<<"\t\t PLEASE ENTER 1 OR 2 \n ";

cout<<"\t\t 1).WIDRAW \n ";

cout<<"\t\t 2).CHECK BALANCE \n ";
cin>>select;

if (select==1)
{
withdraw();

}
else if (select==2)
{

check_balance();
}
else
cout<<"\t\t\t INVALID! ENTRYY !!!";
return 0;
}

int withdraw()
{
int n,o;
cout<<"\t\t\t------------------- WITHDRAW----------------- \n";
cout<<"\t\t\t PLEASE ENTER THE AMOUNT TO WITHDRAWE\n";
cin>>n;
if (n>200000)
{
cout<<"\t\t\t YOU DONT HAVE SUFFICIENT AMOUNT \n";

}
if (n>0)
{
o=balance-n;
cout<<"\t\t\t THANKS FOR WIDRAW OF "<<n<<"\n";
cout<<"\t\t\t="" your"" remaining"" balance"" is"" "<<o<<"\n";
}
return 0;
}


int check_balance()

{
    cout<<"\t\t\t---------------------check="" balacne----------------\n";
     cout<<"\t\t\t="" available="" balance="" in="" account="" is="" "<<balance<<"\n";
     return 0;
}