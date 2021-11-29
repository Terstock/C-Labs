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
    	
        cout << "�������� � ��������� ���� ��������: https://ru.wikipedia.org/wiki/������_��������_(�-�) \n";
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
        cout << "��������� ������ ���. �������� ��� �������: \n" <<
		 "������:  " << model << "\n" <<
		 "��� ������������:  " << year << " ���" << "\n" << 
		 "��������:  " << power << " ��������� ���" << "\n" <<
		 "��������:  " << speed << " ��/�" << "\n" <<
		 "����������������:  " << capacity << " ��" << endl;
		 
		cout << "         " << endl;
		cout << "������ ����������:" << endl;
		cout << "         " << endl;
		if (year <= 2002)
		{
    		cout << "������ ��������� ������ � �������� ����������" << endl;

		}
		else
		{
    		cout << "������ �������� ��� �������������" << endl;
    	}
    	if (power < 30000)
		{
    		cout << "������ �������� �����������" << endl;

		}
		else
		{
    		cout << "������ �������� �������" << endl;
    	}
    	if (speed <= 800)
		{
    		cout << "������ �������� ������������ ��� �� ��������� ����� ����" << endl;

		}
		else
		{
    		cout << "������ �������� �������" << endl;
    	}
    	if(speed > 1224){
    		cout << "������ �������� �������������" << endl;
		}
		if (capacity <= 9)
		{
    		cout << "������ �������� ������������ ��� ��� ����� ������" << endl;
		}
		if (capacity >= 250){
			cout << "������ �������� ������������ ��������������" << endl;
		}
	}
		//if (model == "����")
		//{
    	//cout << "������: ��-225" << endl;
    	//cout << "��� ������������: 1989 ���" << endl;
    	//cout << "��������: 12 500 �. �." << endl;
    	//cout << "��������: 850 ��/�" << endl;
    	//cout << "����������������: 250 �." << endl;
		//} 	
    /*
    void Parameterchanger(string model_p, int year_p, int power_p, int speed_p, int capacity_p)
	{
    	model = "���";
    	year = 1943;
    	power = 20000;
    	speed = 600;
    	capacity = 70;
    	cout << "         " << endl;
    	cout << "������: " << model << endl;
    	cout << "��� �������: " << year << " ���" << endl;
    	cout << "��������: " << power << " �.�." << endl;
    	cout << "��������: " << speed << " ��/�" << endl;
    	cout << "����������������: " << capacity << " ��" << endl;
    	cout << "         " << endl;
    
	}
};
	*/
	void Changemodel(string model_p){
		model = "���";
		cout << "������: " << model << endl;
	}
	void Changeyear(int year_p){
		year = 1943;
		cout << "��� �������: " << year << " ���" << endl;
	}
	void Changepower(int power_p){
		power = 20000;
		cout << "��������: " << power << " �.�." << endl;
	}
	void Changespeed(int speed_p){
		speed = 600;
		cout << "��������: " << speed << " ��/�" << endl;
	}
	void Changecapacity(int capacity_p){
		capacity = 70;
		cout << "����������������: " << capacity << " ��" << endl;
	}
};

 
int main()
{
    setlocale(LC_ALL, "rus");
    string model;
    int year, power, speed, capacity;
    cout << "������� ������ ��� ���������:\n";
    cout << "         " << endl;
    cout << "������: ";     cin >> model;
    cout << "��� �������: ";    cin >> year;
    cout << "��������: ";  cin >> power;
    cout << "��������: ";  cin >> speed;
    cout << "����������������: ";  cin >> capacity;
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
    model = "���������";
    year = 1941;
    power = 12000;
    speed = 500;
    capacity = 50;
    cout << "         " << endl;

    
    cout << "         " << endl;
    cout << "������: " << model << endl;
    cout << "��� �������: " << year << " ���" << endl;
    cout << "��������: " << power << " �.�." << endl;
    cout << "��������: " << speed << " ��/�" << endl;
    cout << "����������������: " << capacity << " ��" << endl;
    cout << "         " << endl;
    cout << "������ ����������..." << endl;
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
