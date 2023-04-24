
// Declare variables to store input
float initInv, monDep, anuInt, months, years;
// Declare variables to store year end total amount, interest, and year end interest
float totalAmt, intAmt, yearTotInt;


void displayForm()
{
    cout << "\n\n Welcome to the Investment Calculator\n\n";
    cout << "********************************\n";
    cout << "********** Data Input **********\n";
    cout << "Initial Investment Amount: \n";
    cout << "Monthly Deposit: \n";
    cout << "Annual Interest: \n";
    cout << "Number of years: \n\n\n";
        }


void getData() {

    // Get data from user
    cout << "********************************\n";
    cout << "********** Data Input **********\n";
    cout << "Initial Investment Amount: $";
    cin >> initInv;
    cout << "Monthly Deposit: $";
    cin >> monDep;
    cout << "Annual Interest: %";
    cin >> anuInt;
    cout << "Number of years: ";
    cin >> years;
    months = years * 12;

    // Set total amount to initial investment to be updated
    totalAmt = initInv;
}

void noMonDeposits() {

    // Display year data without monthly deposits
    cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
    cout << "==============================================================\n";
    cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
    cout << "--------------------------------------------------------------\n";

    for (int i = 0; i < years; i++)
    {

        // Calculate yearly interest
        intAmt = (totalAmt) * ((anuInt / 100));

        // Calculate year end total
        totalAmt = totalAmt + intAmt;

        // Print results to table showcasing only two decimal points
        cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmt << "\t\t\t$" << intAmt << "\n";
    }
}


void monDeposits() {
    // Display year data with monthly deposits
    cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "==============================================================\n";
    cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
    cout << "--------------------------------------------------------------\n";

    for (int i = 0; i < years; i++)
    {

        // Set yearly interest to zero at the start of the year
        yearTotInt = 0;

        for (int j = 0; j < 12; j++)
        {

            // Calculate the monthly interest
            intAmt = (totalAmt + monDep) * ((anuInt / 100) / 12);

            // Calculate the month end interest
            yearTotInt = yearTotInt + intAmt;

            // Calculate the month end total
            totalAmt = totalAmt + monDep + intAmt;
        }

        // Print results to a table with only two decimal points
        cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmt << "\t\t\t$" << yearTotInt << "\n";
    }
}