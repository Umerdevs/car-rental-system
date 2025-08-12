#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, residence, phone, color, carName, cnic, carCompany;
    int purposeChoice, companyChoice, categoryChoice, carChoice, days, driverChoice, licenseHolder, paymentMethod, confirm, cancelBooking;
    double rentPerDay = 0, originalTotalRent = 0, finalAmount = 0, driverCharge = 0;

    cout << "====================================\n";
    cout << "      Welcome to Premium Wheels!\n";
    cout << "====================================\n";
    
    cout << "\nSelect purpose of visit:\n1. Rent a Car\n2. Return a Car\nEnter choice: ";
    cin >> purposeChoice;
    
    if (purposeChoice == 2) {
        cin.ignore();
        cout << "\nEnter your details:";
        cout << "\nName: ";
        getline(cin, name);
        cout << "Residence: ";
        getline(cin, residence);
        do {
            cout << "Phone No (11 digits): ";
            getline(cin, phone);
            if (phone.length() != 11 || phone.find_first_not_of("0123456789") != string::npos) {
                cout << "Invalid phone number. Please enter exactly 11 digits.\n";
            }
        } while (phone.length() != 11 || phone.find_first_not_of("0123456789") != string::npos);

        do {
            cout << "CNIC No (13 digits): ";
            getline(cin, cnic);
            if (cnic.length() != 13 || cnic.find_first_not_of("0123456789") != string::npos) {
                cout << "Invalid CNIC number. Please enter exactly 13 digits.\n";
            }
        } while (cnic.length() != 13 || cnic.find_first_not_of("0123456789") != string::npos);

        cout << "\n====================================\n";
        cout << "          RETURN RECEIPT\n";
        cout << "====================================\n";
        cout << "Name: " << name << endl;
        cout << "Residence: " << residence << endl;
        cout << "Phone No: " << phone << endl;
        cout << "CNIC No: " << cnic << endl;
        cout << "Car Returned Successfully!\n";
        cout << "Thank you for using Premium Wheels!\n";
        cout << "We hope you had a great experience.\n";
        cout << "====================================\n";

        int rating;
        string comments;
        cout << "\nWe value your feedback!\n";
        cout << "Please rate your experience (1 to 5 stars): ";
        cin >> rating;
        cin.ignore(); 
        if (rating >= 1 && rating <= 5) {
            cout << "Thank you for your rating!\n";
            if (rating >= 4) {
                cout << "We're glad you enjoyed your experience with us!\n";
            } else {
                cout << "We're sorry to hear that. We'll work on improving our services.\n";
            }
            cout << "Would you like to provide additional comments? (Type your comments or press Enter to skip): ";
            getline(cin, comments);
            if (!comments.empty()) {
                cout << "Thank you for your feedback: \"" << comments << "\"\n";
            }
        } else {
            cout << "Invalid rating. Feedback skipped.\n";
        }

        return 0;
    }
    
    cout << "\nSelect a company:\n1. Honda\n2. Toyota\n3. Audi\n4. Nissan\n5. Suzuki\n6. Changan\nEnter choice: ";
    cin >> companyChoice;
    
    if (companyChoice == 1) {
        carCompany = "Honda";
        cout << "\nSelect a category:\n1. Sedan\n2. SUV\n3. Hatchback\nEnter choice: ";
        cin >> categoryChoice;
        
        if (categoryChoice == 1) {
            cout << "\nSelect a car:\n1. Civic (6000/day)\n2. Accord (7500/day)\n3. City (5000/day)\n4. Inspire (7200/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 6000 : (carChoice == 2) ? 7500 : (carChoice == 3) ? 5000 : 7200;
            carName = (carChoice == 1) ? "Civic" : (carChoice == 2) ? "Accord" : (carChoice == 3) ? "City" : "Inspire";
        } else if (categoryChoice == 2) {
            cout << "\nSelect a car:\n1. BR-V (7000/day)\n2. CR-V (9000/day)\n3. HR-V (8500/day)\n4. Pilot (12000/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 7000 : (carChoice == 2) ? 9000 : (carChoice == 3) ? 8500 : 12000;
            carName = (carChoice == 1) ? "BR-V" : (carChoice == 2) ? "CR-V" : (carChoice == 3) ? "HR-V" : "Pilot";
        } else {
            cout << "\nSelect a car:\n1. Fit (4500/day)\n2. N-WGN (4000/day)\n3. Civic (5000/day)\n4. City (4500/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 4500 : (carChoice == 2) ? 4000 : (carChoice == 3) ? 5000 : 4500;
            carName = (carChoice == 1) ? "Fit" : (carChoice == 2) ? "N-WGN" : (carChoice == 3) ? "Civic" : "City";
        }
    } else if (companyChoice == 2) {
        carCompany = "Toyota";
        cout << "\nSelect a category:\n1. Sedan\n2. SUV\n3. Hatchback\n4. Crossover\nEnter choice: ";
        cin >> categoryChoice;
        
        if (categoryChoice == 1) {
            cout << "\nSelect a car:\n1. Grande (5500/day)\n2. Mark X (7000/day)\n3. Crown (7800/day)\n4. Prius (4500/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 5500 : (carChoice == 2) ? 7000 : (carChoice == 3) ? 7800 : 4500;
            carName = (carChoice == 1) ? "Grande" : (carChoice == 2) ? "Mark X" : (carChoice == 3) ? "Crown" : "Prius";
        } else if (categoryChoice == 2) {
            cout << "\nSelect a car:\n1. Fortuner (8500/day)\n2. Land Cruiser LC200 (15000/day)\n3. Harrier (10000/day)\n4. Cross (7800/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 8500 : (carChoice == 2) ? 15000 : (carChoice == 3) ? 10000 : 7800;
            carName = (carChoice == 1) ? "Fortuner" : (carChoice == 2) ? "Land Cruiser LC200" : (carChoice == 3) ? "Harrier" : "Cross";
        } else if (categoryChoice == 3) {
            cout << "\nSelect a car:\n1. Vitz (5000/day)\n2. Passo (4500/day)\n3. Aqua (4000/day)\n4. Yaris (5600/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 5000 : (carChoice == 2) ? 4500 : (carChoice == 3) ? 4000 : 5600;
            carName = (carChoice == 1) ? "Vitz" : (carChoice == 2) ? "Passo" : (carChoice == 3) ? "Aqua" : "Yaris";
        } else {
            cout << "\nSelect a car:\n1. CHR (6000/day)\n2. Sienta (6500/day)\n3. Revo (9000/day)\n4. Tundra (12000/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 6000 : (carChoice == 2) ? 6500 : (carChoice == 3) ? 9000 : 12000;
            carName = (carChoice == 1) ? "CHR" : (carChoice == 2) ? "Sienta" : (carChoice == 3) ? "Revo" : "Tundra";
        }
    } else if (companyChoice == 3) {
        carCompany = "Audi";
        cout << "\nSelect a category:\n1. Sedan\n2. SUV\n3. Hatchback\n4. Crossover\nEnter choice: ";
        cin >> categoryChoice;
        
        if (categoryChoice == 1) {
            cout << "\nSelect a car:\n1. Audi A3 (9000/day)\n2. Audi A4 (11000/day)\n3. Audi A5 (13000/day)\n4. Audi A6 (15000/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 9000 : (carChoice == 2) ? 11000 : (carChoice == 3) ? 13000 : 15000;
            carName = (carChoice == 1) ? "Audi A3" : (carChoice == 2) ? "Audi A4" : (carChoice == 3) ? "Audi A5" : "Audi A6";
        } else if (categoryChoice == 2) {
            cout << "\nSelect a car:\n1. Audi Q3 (14000/day)\n2. Audi Q5 (16000/day)\n3. Audi Q7 (20000/day)\n4. Audi Q8 (25000/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 14000 : (carChoice == 2) ? 16000 : (carChoice == 3) ? 20000 : 25000;
            carName = (carChoice == 1) ? "Audi Q3" : (carChoice == 2) ? "Audi Q5" : (carChoice == 3) ? "Audi Q7" : "Audi Q8";
        } else if (categoryChoice == 3) {
            cout << "\nSelect a car:\n1. Audi A1 (8000/day)\n2. Audi A3 (9000/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 8000 : 9000;
            carName = (carChoice == 1) ? "Audi A1" : "Audi A3";
        } else {
            cout << "\nSelect a car:\n1. Audi Q2 (10000/day)\n2. Audi Q4 e-tron (18000/day)\n3. Audi e-tron (22000/day)\n4. Audi e-tron GT (28000/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 10000 : (carChoice == 2) ? 18000 : (carChoice == 3) ? 22000 : 28000;
            carName = (carChoice == 1) ? "Audi Q2" : (carChoice == 2) ? "Audi Q4 e-tron" : (carChoice == 3) ? "Audi e-tron" : "Audi e-tron GT";
        }
    } else if (companyChoice == 4) {
        carCompany = "Nissan";
        cout << "\nSelect a category:\n1. Sedan\n2. SUV\n3. Hatchback\n4. Crossover\nEnter choice: ";
        cin >> categoryChoice;
        
        if (categoryChoice == 1) {
            cout << "\nSelect a car:\n1. Sunny (5000/day)\n2. Fuga (7200/day)\n3. Teana (6800/day)\n4. Maxima (7500/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 5000 : (carChoice == 2) ? 7200 : (carChoice == 3) ? 6800 : 7500;
            carName = (carChoice == 1) ? "Sunny" : (carChoice == 2) ? "Fuga" : (carChoice == 3) ? "Teana" : "Maxima";
        } else if (categoryChoice == 2) {
            cout << "\nSelect a car:\n1. X-Trail (8000/day)\n2. Patrol (14000/day)\n3. Terrano (8500/day)\n4. Murano (9000/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 8000 : (carChoice == 2) ? 14000 : (carChoice == 3) ? 8500 : 9000;
            carName = (carChoice == 1) ? "X-Trail" : (carChoice == 2) ? "Patrol" : (carChoice == 3) ? "Terrano" : "Murano";
        } else if (categoryChoice == 3) {
            cout << "\nSelect a car:\n1. March (4500/day)\n2. Note (4800/day)\n3. Dayz (4000/day)\n4. Tiida (4700/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 4500 : (carChoice == 2) ? 4800 : (carChoice == 3) ? 4000 : 4700;
            carName = (carChoice == 1) ? "March" : (carChoice == 2) ? "Note" : (carChoice == 3) ? "Dayz" : "Tiida";
        } else {
            cout << "\nSelect a car:\n1. Juke (6200/day)\n2. Kicks (6800/day)\n3. Qashqai (7800/day)\n4. Rogue (8800/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 6200 : (carChoice == 2) ? 6800 : (carChoice == 3) ? 7800 : 8800;
            carName = (carChoice == 1) ? "Juke" : (carChoice == 2) ? "Kicks" : (carChoice == 3) ? "Qashqai" : "Rogue";
        }
    } else if (companyChoice == 5) {
        carCompany = "Suzuki";
        cout << "\nSelect a category:\n1. Sedan\n2. SUV\n3. Hatchback\n4. Crossover\nEnter choice: ";
        cin >> categoryChoice;
        
        if (categoryChoice == 1) {
            cout << "\nSelect a car:\n1. Ciaz (4800/day)\n2. Kizashi (7000/day)\n3. Baleno (4500/day)\n4. SX4 (5000/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 4800 : (carChoice == 2) ? 7000 : (carChoice == 3) ? 4500 : 5000;
            carName = (carChoice == 1) ? "Ciaz" : (carChoice == 2) ? "Kizashi" : (carChoice == 3) ? "Baleno" : "SX4";
        } else if (categoryChoice == 2) {
            cout << "\nSelect a car:\n1. Vitara (7500/day)\n2. Jimny (6800/day)\n3. Grand Vitara (9000/day)\n4. XL7 (9500/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 7500 : (carChoice == 2) ? 6800 : (carChoice == 3) ? 9000 : 9500;
            carName = (carChoice == 1) ? "Vitara" : (carChoice == 2) ? "Jimny" : (carChoice == 3) ? "Grand Vitara" : "XL7";
        } else if (categoryChoice == 3) {
            cout << "\nSelect a car:\n1. Alto (3500/day)\n2. Mehran (Boss) (3200/day)\n3. Cultus (4000/day)\n4. Swift (4800/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 3500 : (carChoice == 2) ? 3200 : (carChoice == 3) ? 4000 : 4800;
            carName = (carChoice == 1) ? "Alto" : (carChoice == 2) ? "Mehran (Boss)" : (carChoice == 3) ? "Cultus" : "Swift";
        } else {
            cout << "\nSelect a car:\n1. S-Cross (6500/day)\n2. Ignis (5000/day)\n3. Ertiga (7000/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 6500 : (carChoice == 2) ? 5000 : 7000;
            carName = (carChoice == 1) ? "S-Cross" : (carChoice == 2) ? "Ignis" : "Ertiga";
        }
    } else if (companyChoice == 6) {
        carCompany = "Changan";
        cout << "\nSelect a category:\n1. Sedan\n2. SUV\n3. Hatchback\n4. Crossover\nEnter choice: ";
        cin >> categoryChoice;
        
        if (categoryChoice == 1) {
            cout << "\nSelect a car:\n1. Alsvin (4500/day)\n2. Eado (6000/day)\n3. Raeton (5500/day)\n4. Lamore (6500/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 4500 : (carChoice == 2) ? 6000 : (carChoice == 3) ? 5500 : 6500;
            carName = (carChoice == 1) ? "Alsvin" : (carChoice == 2) ? "Eado" : (carChoice == 3) ? "Raeton" : "Lamore";
        } else if (categoryChoice == 2) {
            cout << "\nSelect a car:\n1. Oshan X7 (7500/day)\n2. CS35 Plus (7000/day)\n3. CS55 Plus (8000/day)\n4. CS75 Plus (9000/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 7500 : (carChoice == 2) ? 7000 : (carChoice == 3) ? 8000 : 9000;
            carName = (carChoice == 1) ? "Oshan X7" : (carChoice == 2) ? "CS35 Plus" : (carChoice == 3) ? "CS55 Plus" : "CS75 Plus";
        } else if (categoryChoice == 3) {
            cout << "\nSelect a car:\n1. BenBen (3800/day)\n2. Star (4000/day)\n3. Lumin (3700/day)\n4. CX20 (4200/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 3800 : (carChoice == 2) ? 4000 : (carChoice == 3) ? 3700 : 4200;
            carName = (carChoice == 1) ? "BenBen" : (carChoice == 2) ? "Star" : (carChoice == 3) ? "Lumin" : "CX20";
        } else {
            cout << "\nSelect a car:\n1. UNI-T (6500/day)\n2. UNI-K (7500/day)\n3. Hunter (8000/day)\n4. X5 Plus (8500/day)\nEnter choice: ";
            cin >> carChoice;
            rentPerDay = (carChoice == 1) ? 6500 : (carChoice == 2) ? 7500 : (carChoice == 3) ? 8000 : 8500;
            carName = (carChoice == 1) ? "UNI-T" : (carChoice == 2) ? "UNI-K" : (carChoice == 3) ? "Hunter" : "X5 Plus";
        }
    }
    
    cout << "\nSelect a color:\n1. Black\n2. Blue\n3. White\n4. Red\n5. Silver\nEnter choice: ";
    int colorChoice;
    cin >> colorChoice;
    color = (colorChoice == 1) ? "Black" : 
            (colorChoice == 2) ? "Blue" : 
            (colorChoice == 3) ? "White" : 
            (colorChoice == 4) ? "Red" : "Silver";
    
    cout << "\nDynamic Discount Information:\n";
    cout << "1. 5-10 days: 5% discount\n";
    cout << "2. 10-15 days: 10% discount\n";
    cout << "3. 15+ days: 15% discount\n";
    
    cout << "\nEnter number of days: ";
    cin >> days;
    
    cout << "\nDo you need a driver?\n1. Yes (+7% charge)\n2. No\nEnter choice: ";
    cin >> driverChoice;
    
    if (driverChoice == 2) {
        cout << "\nAre you a Driving License Holder?\n1. Yes\n2. No\nEnter choice: ";
        cin >> licenseHolder;
        if (licenseHolder != 1) {
            cout << "You are not eligible for car rental without a driver.\n";
            return 0;
        }
    }
    
    originalTotalRent = rentPerDay * days;
    finalAmount = originalTotalRent;
    
    if (driverChoice == 1) {
        driverCharge = originalTotalRent * 0.07;
        finalAmount += driverCharge;
    }
    
    double dynamicDiscount = 0;
    if (days >= 5 && days < 10) {
        dynamicDiscount = finalAmount * 0.05; 
    } else if (days >= 10 && days < 15) {
        dynamicDiscount = finalAmount * 0.10; 
    } else if (days >= 15) {
        dynamicDiscount = finalAmount * 0.15; 
    }
    finalAmount -= dynamicDiscount;
    
    cout << "\nConfirm booking?\n1. Yes\n2. No\nEnter choice: ";
    cin >> confirm;
    if (confirm != 1) {
        cout << "\nBooking cancelled.\n";
        return 0;
    }
    
    cin.ignore();
    cout << "\nEnter your personal details:";
    cout << "\nName: ";
    getline(cin, name);
    cout << "Residence: ";
    getline(cin, residence);
    
    do {
        cout << "Phone No (11 digits): ";
        getline(cin, phone);
        if (phone.length() != 11 || phone.find_first_not_of("0123456789") != string::npos) {
            cout << "Invalid phone number. Please enter exactly 11 digits.\n";
        }
    } while (phone.length() != 11 || phone.find_first_not_of("0123456789") != string::npos);

    do {
        cout << "CNIC No (13 digits): ";
        getline(cin, cnic);
        if (cnic.length() != 13 || cnic.find_first_not_of("0123456789") != string::npos) {
            cout << "Invalid CNIC number. Please enter exactly 13 digits.\n";
        }
    } while (cnic.length() != 13 || cnic.find_first_not_of("0123456789") != string::npos);
    
    cout << "\nSelect payment method:\n1. Cash\n2. Bank Transfer\nEnter choice: ";
    cin >> paymentMethod;
    if (paymentMethod == 2) {
        cout << "\nBank Transfer is not available at this time.\n";
        cout << "1. Cancel Booking\n2. Select Cash\nEnter choice: ";
        cin >> cancelBooking;
        if (cancelBooking == 1) {
            cout << "\nThanks for visiting.\n";
            return 0;
        } else {
            paymentMethod = 1;
        }
    }
    
    
    cout << "\n====================================\n";
    cout << "          RENTAL RECEIPT\n";
    cout << "====================================\n";
    cout << "Car Company: " << carCompany << endl;
    cout << "Car Name: " << carName << endl;
    cout << "Car Color: " << color << endl;
    cout << "Name: " << name << endl;
    cout << "Residence: " << residence << endl;
    cout << "Phone No: " << phone << endl;
    cout << "CNIC No: " << cnic << endl;
    cout << "Total Rent: " << originalTotalRent << " (" << days << " days)" << endl;
    if (driverChoice == 1) {
        cout << "Driver Charge (7%): " << driverCharge << endl;
    }
    if (dynamicDiscount > 0) {
        cout << "Dynamic Discount: " << dynamicDiscount << endl;
    }
    cout << "Payment Method: " << (paymentMethod == 1 ? "Cash" : "Bank Transfer") << endl;
    cout << "Final payable Amount: " << finalAmount << endl;
    cout << "\n\nNote: If the car is taken for extra days, additional charges will be applied.\n";
    cout << "\n====================================\n";

    int rating;
    string comments;
    cout << "\nWe value your feedback!\n";
    cout << "Please rate your experience (1 to 5 stars): ";
    cin >> rating;
    cin.ignore(); 
    if (rating >= 1 && rating <= 5) {
        cout << "\nThank you for your rating!\n";
        if (rating >= 4) {
            cout << "We're glad you enjoyed your experience with us!\n";
        } else {
            cout << "\nWe're sorry to hear that. We'll work on improving our services.\n";
        }
        cout << "\nWould you like to provide additional comments? (Type your comments or press Enter to skip): ";
        getline(cin, comments);
        if (!comments.empty()) {
            cout << "Thank you for your feedback: \"" << comments << "\"\n";
        }
    } else {
        cout << "Invalid rating. Feedback skipped.\n";
    }
    
    return 0;
}