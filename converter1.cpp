#include <iostream>
using namespace std;

int main() {
    int choice;
    float value, result;
    char again;
    
    cout << "**************************************\n";
    cout << "          UNIT CONVERTER\n";
    cout << "**************************************\n";
    
    do {
        cout << "\nChoose conversion type:\n";
        cout << "1. Length\n";
        cout << "2. Temperature\n";
        cout << "3. Weight\n";
        cout << "4. Digital Storage\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        
        if(choice == 6) {
            cout << "Goodbye!\n";
            break;
        }
        
        if(choice < 1 || choice > 6) {
            cout << "Invalid choice! Please try again.\n";
            continue;
        }
        
        cout << "Enter value to convert: ";
        cin >> value;
        
        // Length conversions
        if(choice == 1) {
            int lenChoice;
            cout << "\nLength Conversions:\n";
            cout << "1. Kilometers to Miles\n";
            cout << "2. Miles to Kilometers\n";
            cout << "3. Meters to Feet\n";
            cout << "4. Feet to Meters\n";
            cout << "Enter your choice: ";
            cin >> lenChoice;
            
            if(lenChoice == 1) {
                result = value * 0.621371;
                cout << value << " km = " << result << " miles\n";
            }
            else if(lenChoice == 2) {
                result = value * 1.60934;
                cout << value << " miles = " << result << " km\n";
            }
            else if(lenChoice == 3) {
                result = value * 3.28084;
                cout << value << " meters = " << result << " feet\n";
            }
            else if(lenChoice == 4) {
                result = value * 0.3048;
                cout << value << " feet = " << result << " meters\n";
            }
            else {
                cout << "Invalid choice!\n";
            }
        }
        
        // Temperature conversions
        else if(choice == 2) {
            int tempChoice;
            cout << "\nTemperature Conversions:\n";
            cout << "1. Celsius to Fahrenheit\n";
            cout << "2. Fahrenheit to Celsius\n";
            cout << "3. Celsius to Kelvin\n";
            cout << "Enter your choice: ";
            cin >> tempChoice;
            
            if(tempChoice == 1) {
                result = (value * 9/5) + 32;
                cout << value << "°C = " << result << "°F\n";
            }
            else if(tempChoice == 2) {
                result = (value - 32) * 5/9;
                cout << value << "°F = " << result << "°C\n";
            }
            else if(tempChoice == 3) {
                result = value + 273.15;
                cout << value << "°C = " << result << "K\n";
            }
            else {
                cout << "Invalid choice!\n";
            }
        }
        
        // Weight conversions
        else if(choice == 3) {
            int weightChoice;
            cout << "\nWeight Conversions:\n";
            cout << "1. Kilograms to Pounds\n";
            cout << "2. Pounds to Kilograms\n";
            cout << "3. Grams to Ounces\n";
            cout << "Enter your choice: ";
            cin >> weightChoice;
            
            if(weightChoice == 1) {
                result = value * 2.20462;
                cout << value << " kg = " << result << " lbs\n";
            }
            else if(weightChoice == 2) {
                result = value * 0.453592;
                cout << value << " lbs = " << result << " kg\n";
            }
            else if(weightChoice == 3) {
                result = value * 0.035274;
                cout << value << " grams = " << result << " oz\n";
            }
            else {
                cout << "Invalid choice!\n";
            }
        }
        
        // Digital storage conversions
        else if(choice == 4) {
            int digitalChoice;
            cout << "\nDigital Storage Conversions:\n";
            cout << "1. Megabytes to Gigabytes\n";
            cout << "2. Gigabytes to Megabytes\n";
            cout << "3. Gigabytes to Terabytes\n";
            cout << "Enter your choice: ";
            cin >> digitalChoice;
            
            if(digitalChoice == 1) {
                result = value / 1024;
                cout << value << " MB = " << result << " GB\n";
            }
            else if(digitalChoice == 2) {
                result = value * 1024;
                cout << value << " GB = " << result << " MB\n";
            }
            else if(digitalChoice == 3) {
                result = value / 1024;
                cout << value << " GB = " << result << " TB\n";
            }
            else {
                cout << "Invalid choice!\n";
            }
        }
        
        
        
        cout << "\nDo another conversion? (y/n): ";
        cin >> again;
        
    } while(again == 'y' || again == 'Y');
    
    cout << "Thanks for using the converter!\n";
    
    return 0;
}