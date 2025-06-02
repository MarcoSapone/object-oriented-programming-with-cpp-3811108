#include <iostream>
using namespace std;

//Class definition
class Thermostat{

    public:    //for member functions
    Thermostat(float temp, unsigned int m, const std::string &loc ) { //Constructor
  mode = m;
  temperature = temp;
  location = loc;
}

~Thermostat()
{
  std::cout << "Thermostat object is being deleted." << std::endl;
}

void displayStatus() const {
    cout << "Location: " << location << endl;
    cout << "Current temperature: " << temperature << "°C" << endl;
    cout << "Mode: " << (mode == 0 ? "Off" : (mode == 1 ? "Heating" : "Cooling")) << endl;
    
}

    private:  //for memver varaiables
    float temperature;  //in degrees Celsius
    unsigned int mode;
    string location;

} ;



int main(){
 

// Create a Thermostat object
Thermostat thermostat_1(22.5F, "Living Room", 1);
// Display its status
thermostat_1.displayStatus();
  return 0;

}