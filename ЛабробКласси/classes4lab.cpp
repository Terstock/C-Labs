#include <iostream>
#include <string>

using namespace std;


class Plane
{
private:
	string model; 
    int year, 
        power,
		speed,
		capacity;
public: 
    void message() 
    {
    	
        cout << "A source with description af all the raw materials: https://ru.wikipedia.org/wiki/Ñïèñîê_Ñàìîë¸òîâ_(À-ß) \n";
    }
    Plane(string model_p, int year_p, int power_p, int speed_p, int capacity_p ) 
    {
        setParameter(model_p, year_p, power_p, speed_p, capacity_p); 
    }
    
    Plane(){
    	setParameter("none", 0, 0, 0, 0);
	}
	
	string Getmodel(){
		return model;
	}
	void Setmodel(string Model){
		model = Model;
	}
	
	int Getyear(){
		return year;
	}
	void Setyear(int Year){
		year = Year;
	}
	
	int Getspeed(){
		return speed;
	}
	void Setspeed(int Speed){
		speed = Speed;
	}
	
	int Getcapacity(){
		return capacity;
	}
	void Setcapacity(int Capacity){
		capacity = Capacity;
	}
	
    void setParameter(string model_p, int year_p, int power_p, int speed_p, int capacity_p) 
    {
        model   = model_p; 
        year = year_p; 
        power  = power_p;
        speed = speed_p;
        capacity = capacity_p;
    }
    //~Plane() 
//	{
		//cout << 
	//}
    void getParameter() 
    {
        cout << "Input info of plane: \n" <<
		 "Model:  " << model << "\n" <<
		 "Year of production:  " << year << " ãîä" << "\n" << 
		 "Power:  " << power << " ëîøàäèíûõ ñèë" << "\n" <<
		 "Speed:  " << speed << " êì/÷" << "\n" <<
		 "Capacity:  " << capacity << " êã" << endl;
		 
		cout << "         " << endl;
		cout << "Conclusions:" << endl;
		cout << "         " << endl;
		if (year <= 2002)
		{
    		cout << "Plane is too old and should be destroyed" << endl;

		}
		else
		{
    		cout << "Plane is able to use" << endl;
    	}
    	if (power < 30000)
		{
    		cout << "Plane is civil" << endl;

		}
		else
		{
    		cout << "Plane is military" << endl;
    	}
    	if (speed <= 800)
		{
    		cout << "Plane is passenger or other" << endl;

		}
		else
		{
    		cout << "Plane is military again" << endl;
    	}
    	if(speed > 1224){
    		cout << "Plane is supersonic" << endl;
		}
		if (capacity <= 9)
		{
    		cout << "Plane is passenger or other" << endl;
		}
		if (capacity >= 250){
			cout << "Plane is very heavy transport plane" << endl;
		}
	}
		//if (model == "ìðèÿ")
		//{
    	//cout << "Ìîäåëü: Àí-225" << endl;
    	//cout << "Ãîä ïðîèçâîäñòâà: 1989 ãîä" << endl;
    	//cout << "Ìîùíîñòü: 12 500 ë. ñ." << endl;
    	//cout << "Ñêîðîñòü: 850 êì/÷" << endl;
    	//cout << "Ãðóçîïîäüåìíîñòü: 250 ò." << endl;
		//} 	
    /*
    void Parameterchanger(string model_p, int year_p, int power_p, int speed_p, int capacity_p)
	{
    	model = "Ðîê";
    	year = 1943;
    	power = 20000;
    	speed = 600;
    	capacity = 70;
    	cout << "         " << endl;
    	cout << "Ìîäåëü: " << model << endl;
    	cout << "Ãîä âûïóñêà: " << year << " ãîä" << endl;
    	cout << "Ìîùíîñòü: " << power << " ë.ñ." << endl;
    	cout << "Ñêîðîñòü: " << speed << " êì/÷" << endl;
    	cout << "Ãðóçîïîäüåìíîñòü: " << capacity << " êã" << endl;
    	cout << "         " << endl;
    
	}
};
	*/
	void Changemodel(string model_p){
		model = "Rock";
		cout << "Model: " << model << endl;
	}
	void Changeyear(int year_p){
		year = 1943;
		cout << "Year of production: " << year << " ãîä" << endl;
	}
	void Changepower(int power_p){
		power = 20000;
		cout << "Power: " << power << " ë.ñ." << endl;
	}
	void Changespeed(int speed_p){
		speed = 600;
		cout << "Speed: " << speed << " êì/÷" << endl;
	}
	void Changecapacity(int capacity_p){
		capacity = 70;
		cout << "Capacity: " << capacity << " êã" << endl;
	}
};

 
int main()
{
    setlocale(LC_ALL, "rus");
    string model;
    int year, power, speed, capacity;
    cout << "Enter tour parameters:\n";
    cout << "         " << endl;
    cout << "Model: ";     cin >> model;
    cout << "Year of production: ";    cin >> year;
    cout << "Power: ";  cin >> power;
    cout << "Speed: ";  cin >> speed;
    cout << "Capacity: ";  cin >> capacity;
    //Plane objPlane ("as", 1991, 10000, 1200, 100);
    Plane objPlane;
    
    cout << "         " << endl;
    objPlane.setParameter(model, year, power, speed, capacity);
    objPlane.getParameter();
    cout << "         " << endl;
    objPlane.message();
    cout << "         " << endl;
    
    cout << "__________________________________________________________________________" << endl;
    
   
    cout << "         " << endl;
    model = "Gladiator";
    year = 1941;
    power = 12000;
    speed = 500;
    capacity = 50;
    cout << "         " << endl;

    
    cout << "         " << endl;
    cout << "Model: " << model << endl;
    cout << "Year of production: " << year << " ãîä" << endl;
    cout << "Power: " << power << " ë.ñ." << endl;
    cout << "Speed: " << speed << " êì/÷" << endl;
    cout << "Capacity: " << capacity << " êã" << endl;
    cout << "         " << endl;
    cout << "Changing variables..." << endl;
    cout << "         " << endl;
    
    //objPlane.Parameterchanger(model, year, power, speed, capacity);
    cout << "         " << endl;
    
    cout << "__________________________________________________________________________" << endl;
    cout << "         " << endl;
    
	objPlane.Changemodel(model);
	objPlane.Changeyear(year);
	objPlane.Changepower(power);
	objPlane.Changespeed(speed);
	objPlane.Changecapacity(capacity);
    
    return 0;
}
