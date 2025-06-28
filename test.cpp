void showDeviceEstimates() {

	system("CLS");

	cout<<"=== Device Power Estimates ==="<<endl;

    cout << "\n--- Average Power Ratings for Common Devices ---\n";
    cout << "1. LED Light Bulb     : 10 - 15 Watts\n";
    cout << "2. Laptop             : 50 - 100 Watts\n";
    cout << "3. Fan                : 75 - 120 Watts\n";
    cout << "4. Television         : 100 - 150 Watts\n";
    cout << "5. Refrigerator       : 150 - 300 Watts\n";
    cout << "6. Air Conditioner    : 1000 - 2000 Watts\n";
    cout << "7. Washing Machine    : 400 - 1000 Watts\n";
    cout << "--------------------------------------------------\n";
}


void calculateWaterUsage(){

    cout << "\n ===Water Usage===" << endl;

    double shower, dishwashing, laundry;

    cout << "Enter daily shower time (minutes):";
    cin >> shower;
    cout << "Enter weekly dishwashing loads:";
    cin >> dishwashing;
    cout << "Enter weekly laundry loads:";
    cin >> laundry;

    //water usage calculations

    double dailyWater = (shower*13) + (dishwashing*12/7) + (laundry*26/7);
    double monthlyWater = dailyWater*30;
    double waterCost = monthlyWater*0.0005;


    cout << "\n===Water Usage Results==="<<endl;
    cout << "Daily Water Usage: " << dailyWater << " liters" << endl;
    cout << "Monthly Water Usage: " << monthlyWater << " liters" << endl;
    cout << "Estimated Monthly Water Cost: RM" << waterCost << endl;

    //warning
    if (dailyWater > 80) {
            cout << "\nWARNING: High water usage detected!" << endl;
            cout << "Tip: Install low-flow fixtures to reduce usage by 30%" << endl;
        }
}
