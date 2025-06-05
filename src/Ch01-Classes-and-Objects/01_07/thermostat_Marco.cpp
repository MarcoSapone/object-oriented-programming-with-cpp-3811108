#include <iostream>
using namespace std;

//Class definition
class Thermostat{

public:    //for member functions



Thermostat(float temp, unsigned int m, const string &loc ) { //Constructor
  mode = m;
  temperature = temp;
  location = loc;
  cout << "Thermostat object created with default values." << std::endl;
}

~Thermostat()
{
  cout << "Thermostat object is being deleted." << std::endl;
}

void displayStatus() const {
    cout << "Location: " << location << endl;
    cout << "Current temperature: " << temperature << "°C" << endl;
    cout << "Mode: " << (mode == 0 ? "Off" : (mode == 1 ? "Heating" : "Cooling")) << endl; //ternary operator
}

    private:  //for memver varaiables
    float temperature;  //in degrees Celsius
    unsigned int mode;
    string location;

} ;



int main(){
 

// Create a Thermostat object
// Initialize it with a temperature, location, and mode
Thermostat thermostat_1(22.5, 0, "Living Room");
// Display its status
thermostat_1.displayStatus();
  return 0;

}