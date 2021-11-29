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
    	
        cout << "Источник с описанием всех самолётов: https://ru.wikipedia.org/wiki/Список_Самолётов_(А-Я) \n";
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
        cout << "Введенные данные лет. средства для анализа: \n" <<
		 "Модель:  " << model << "\n" <<
		 "Год производства:  " << year << " год" << "\n" << 
		 "Мощность:  " << power << " лошадиных сил" << "\n" <<
		 "Скорость:  " << speed << " км/ч" << "\n" <<
		 "Грузоподьемность:  " << capacity << " кг" << endl;
		 
		cout << "         " << endl;
		cout << "Выводы экспертизы:" << endl;
		cout << "         " << endl;
		if (year <= 2002)
		{
    		cout << "Самолёт считается старым и подлежит утилизации" << endl;

		}
		else
		{
    		cout << "Самолёт пригоден для использования" << endl;
    	}
    	if (power < 30000)
		{
    		cout << "Самолёт является гражданским" << endl;

		}
		else
		{
    		cout << "Самолёт является военным" << endl;
    	}
    	if (speed <= 800)
		{
    		cout << "Самолёт является пассажирским или же самолетом иного вида" << endl;

		}
		else
		{
    		cout << "Самолёт является военным" << endl;
    	}
    	if(speed > 1224){
    		cout << "Самолёт является сверхзвуковым" << endl;
		}
		if (capacity <= 9)
		{
    		cout << "Самолёт является пассажирским или еще более легким" << endl;
		}
		if (capacity >= 250){
			cout << "Самолёт является сверхтяжелым транспортником" << endl;
		}
	}
		//if (model == "мрия")
		//{
    	//cout << "Модель: Ан-225" << endl;
    	//cout << "Год производства: 1989 год" << endl;
    	//cout << "Мощность: 12 500 л. с." << endl;
    	//cout << "Скорость: 850 км/ч" << endl;
    	//cout << "Грузоподьемность: 250 т." << endl;
		//} 	
    /*
    void Parameterchanger(string model_p, int year_p, int power_p, int speed_p, int capacity_p)
	{
    	model = "Рок";
    	year = 1943;
    	power = 20000;
    	speed = 600;
    	capacity = 70;
    	cout << "         " << endl;
    	cout << "Модель: " << model << endl;
    	cout << "Год выпуска: " << year << " год" << endl;
    	cout << "Мощность: " << power << " л.с." << endl;
    	cout << "Скорость: " << speed << " км/ч" << endl;
    	cout << "Грузоподьемность: " << capacity << " кг" << endl;
    	cout << "         " << endl;
    
	}
};
	*/
	void Changemodel(string model_p){
		model = "Рок";
		cout << "Модель: " << model << endl;
	}
	void Changeyear(int year_p){
		year = 1943;
		cout << "Год выпуска: " << year << " год" << endl;
	}
	void Changepower(int power_p){
		power = 20000;
		cout << "Мощность: " << power << " л.с." << endl;
	}
	void Changespeed(int speed_p){
		speed = 600;
		cout << "Скорость: " << speed << " км/ч" << endl;
	}
	void Changecapacity(int capacity_p){
		capacity = 70;
		cout << "Грузоподьемность: " << capacity << " кг" << endl;
	}
};

 
int main()
{
    setlocale(LC_ALL, "rus");
    string model;
    int year, power, speed, capacity;
    cout << "Введите нужные вам параметры:\n";
    cout << "         " << endl;
    cout << "Модель: ";     cin >> model;
    cout << "Год выпуска: ";    cin >> year;
    cout << "Мощность: ";  cin >> power;
    cout << "Скорость: ";  cin >> speed;
    cout << "Грузоподьемность: ";  cin >> capacity;
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
    model = "Гладиатор";
    year = 1941;
    power = 12000;
    speed = 500;
    capacity = 50;
    cout << "         " << endl;

    
    cout << "         " << endl;
    cout << "Модель: " << model << endl;
    cout << "Год выпуска: " << year << " год" << endl;
    cout << "Мощность: " << power << " л.с." << endl;
    cout << "Скорость: " << speed << " км/ч" << endl;
    cout << "Грузоподьемность: " << capacity << " кг" << endl;
    cout << "         " << endl;
    cout << "Замена переменных..." << endl;
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
