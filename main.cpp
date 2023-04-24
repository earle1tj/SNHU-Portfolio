#include "invest.h"
#include "invest.cpp"

using namespace std;

//Initialize main program 
int main()
{

    // Display program title
    displayForm();
    //Get data from user
    getData();


    //Display interest without monthly deposits
    noMonDeposits();

    // Reset total amount to initial investment to be updated
    totalAmt = initInv;
    
    //Display interest with monthly deposits
    monDeposits();

return 0;
}

