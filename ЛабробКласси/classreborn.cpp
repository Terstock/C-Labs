#include <iostream>
#include <string>
#include <cstring>
using namespace std;
/*
class Plane2
{
   private:
   char model;
   unsigned year2, 
        	power2,
			speed2,
		    capacity2;
	
};
*/
class Planus{
    string model;     
    unsigned year;
	unsigned power;
	unsigned speed;
	unsigned capacity;      
public:
    Planus(string model="unknown", unsigned year = 0, unsigned power = 0, unsigned speed = 0, unsigned capacity = 0);
    //Planus(string, unsigned int, unsigned int, unsigned int, unsigned int);   
 
    string get_model() const {return model;}   
    unsigned   get_year()  const {return year; }
    unsigned   get_power()  const {return power; }
	unsigned   get_speed()  const {return speed; }    
	unsigned   get_capacity()  const {return capacity; }    
	
	void Setmodel(string Model){
		model = Model;
	} 
	void Setyear(int Year){
		year = Year;
	}
	void Setpower(int Power){
		power = Power;
	}
	void Setspeed(int Speed){
		speed = Speed;
	}
	void Setcapacity(int Capacity){
		capacity = Capacity;
	}    
	

};


Planus::Planus(string model_, unsigned year_, unsigned power_,unsigned speed_, unsigned capacity_ )
{
    model = model_;    
    year = year_;
	power = power_;    
	speed = speed_;    
	capacity = capacity_;    
	      
};



/*
 	Planus * search(Planus * mass){
 		Planus * p;
 		p = mass;
 		int i = 0; int mode = 0;
 		cout << "??????? ???????? ??????!" << endl;
 		cout << "1 - ??????" << endl;
 		cout << "2 - ???" << endl;
 		cout << "3 - ????????" << endl;
 		cout << "4 - ????????" << endl;
 		cout << "5 - ????????????????" << endl;
 		cin >> mode;
 		switch(mode) {
 			case 1:
 				string radok;
 				cin >> radok;

 				for (i=0; i<=10;i++){
 					if (*(p + i * sizeof(Planus)).get_model() == radok){
 						cout << "?????? ?? ????? ???????" << endl;
 						cout << (*(p + i * sizeof(Planus))).get_capacity();
 						break;
					 }
				 }
		 }
	 }
	 */
   //int masEl(Planus)
    //{
      // cout << plan_arr[0];
    //}
 	
 	/*
	void searchel(){
			cout << "Enter element that you want to find: " << endl;
    		cout << "Model: ";
    		cout << plan_arr[i-1].get_model() << endl;
    		cout << "Year of production: ";
    		cout << plan_arr[i-1].get_year() << endl;
    		cout << "Power: ";
    		cout << plan_arr[i-1].get_power() << endl;
    		cout << "Speed: ";
    		cout << plan_arr[i-1].get_speed() << endl;
    		cout << "Capacity: ";
    		cout << plan_arr[i-1].get_capacity() << endl;
}

*/
int main()
{
	const size_t max_size = 5;
	Planus * p = new Planus;
	//Planus * plan_arr[max_size];
    

    Planus plan_arr[max_size] = {  
        Planus("Rock", 1941, 900, 600, 200),
        Planus("Gladiator", 1940, 800, 540, 300),
        Planus("Boston", 1943, 760, 700, 220),
        Planus("Invader", 1942, 910, 590, 310),
        Planus("Maroder", 1938, 1100, 730, 400)
    };

 
  for (size_t i=0; i<max_size; i++) {
  	cout  << "Model: ";
    cout << plan_arr[i].get_model(); 
    cout << ";  "<< "Year of production: ";
    cout << plan_arr[i].get_year();
    cout << ";  " << "Power: ";
    cout << plan_arr[i].get_power();
    cout << ";  " << "Speed: ";
    cout << plan_arr[i].get_speed();
    cout << ";  " << "Capacity: ";
    cout << plan_arr[i].get_capacity();
    cout << ".";
    cout << '\n';
  }
  
  int i = 0;
  int c;
  
  while(1){
  cout << "         " << endl;
  cout << "Enter number of command: " << endl;
  cout << "         " << endl;
  cout << "1. Search element: " << endl;
  cout << "2. Delete element: " << endl;
  cout << "3. Change element: " << endl;
  cout << "4. Show massive: " << endl;
  cout << "         " << endl;
  cin >> c;
  
  int k = 0;
  int k1 = 0;
  string model = "Spitfire";
  unsigned year = 1920;
  unsigned power = 770;
  unsigned speed = 500;
  unsigned capacity = 80;
  switch(c)
  {
         case 1:
         	cout << "Enter element that you want to find: " << endl;
    		cin >> i;
    		cout << "Model: ";
    		cout << plan_arr[i-1].get_model() << endl;
    		cout << "Year of production: ";
    		cout << plan_arr[i-1].get_year() << endl;
    		cout << "Power: ";
    		cout << plan_arr[i-1].get_power() << endl;
    		cout << "Speed: ";
    		cout << plan_arr[i-1].get_speed() << endl;
    		cout << "Capacity: ";
    		cout << plan_arr[i-1].get_capacity() << endl;
    		break;

            //cout << plan_arr[i+3].get_model() << endl;
            //cout << plan_arr[i+3].get_year() << endl;
         case 2:

         	cout << "Enter element that you want to delete: " << endl;
    		cin >> i;
    	
    		switch(i)
  			{
  				case 1:
  					plan_arr[i-1].Setmodel("unknown");
    				//cout << plan_arr[i-1].get_model() << endl;
    				break;
    			case 2:
    				plan_arr[i-1].Setyear(0);
    				//cout << plan_arr[i-1].get_year() << endl;
    				break;
    			case 3:
    				plan_arr[i-1].Setpower(0);
    				//cout << plan_arr[i-1].get_power() << endl;
    				break;
    			case 4:
    				plan_arr[i-1].Setspeed(0);
    				//cout << plan_arr[i-1].get_speed() << endl;
    				break;
    			case 5:
    				plan_arr[i-1].Setcapacity(0);
    				//cout << plan_arr[i-1].get_capacity() << endl;
    				break;
    			}
    		//cout << plan_arr[i-1].get_year() << endl;
    		//cout << plan_arr[i-1].get_power() << endl;
    		//cout << plan_arr[i-1].get_speed() << endl;
    		//cout << plan_arr[i-1].get_capacity() << endl;
         	break;
        case 3:
        	cout << "Enter element that you want to change: " << endl;
        	cout << "         " << endl;
        	cout << "1 - Model: " << endl;
        	cout << "2 - Year of production: " << endl;
        	cout << "3 - Power: " << endl;
        	cout << "4 - Speed: " << endl;
        	cout << "5 - Capacity: " << endl;
        	cout << "         " << endl;
    		cin >> k;
        	switch(k)
			{
        		case 1:
        			cout << "Enter model that you want to change: " << endl;
        			cin >> k1;
        			switch(k1){
        			
        				case 1:
        					plan_arr[k1-1].Setmodel(model);
        					break;
        				case 2:
        					plan_arr[k1-1].Setmodel(model);
        					break;
        				case 3:
        					plan_arr[k1-1].Setmodel(model);
        					break;
        				case 4:
        					plan_arr[k1-1].Setmodel(model);
        					break;
        				case 5:
        					plan_arr[k1-1].Setmodel(model);
        					break;
					}
					break;
  				case 2: 
  					cout << "Enter year that you want to change: " << endl;
        			cin >> k1;
        			switch(k1){
        			
        				case 1:
        					plan_arr[k1-1].Setyear(year);
        					break;
        				case 2:
        					plan_arr[k1-1].Setyear(year);
        					break;
        				case 3:
        					plan_arr[k1-1].Setyear(year);
        					break;
        				case 4:
        					plan_arr[k1-1].Setyear(year);
        					break;
        				case 5:
        					plan_arr[k1-1].Setyear(year);
        					break;
					}
					break;
  				case 3: 
  					cout << "Enter power that you want to change: " << endl;
        			cin >> k1;
        			switch(k1){
        			
        				case 1:
        					plan_arr[k1-1].Setpower(power);
        					break;
        				case 2:
        					plan_arr[k1-1].Setpower(power);
        					break;
        				case 3:
        					plan_arr[k1-1].Setpower(power);
        					break;
        				case 4:
        					plan_arr[k1-1].Setpower(power);
        					break;
        				case 5:
        					plan_arr[k1-1].Setpower(power);
        					break;
					}
  					break;
  				case 4: 
  					cout << "Enter speed that you want to change: " << endl;
        			cin >> k1;
        			switch(k1){
        			
        				case 1:
        					plan_arr[k1-1].Setspeed(speed);
        					break;
        				case 2:
        					plan_arr[k1-1].Setspeed(speed);
        					break;
        				case 3:
        					plan_arr[k1-1].Setspeed(speed);
        					break;
        				case 4:
        					plan_arr[k1-1].Setspeed(speed);
        					break;
        				case 5:
        					plan_arr[k1-1].Setspeed(speed);
        					break;
					}
					break;
  				case 5: 
  					cout << "Enter capacity that you want to change: " << endl;
        			cin >> k1;
        			switch(k1){
        			
        				case 1:
        					plan_arr[k1-1].Setcapacity(capacity);
        					break;
        				case 2:
        					plan_arr[k1-1].Setcapacity(capacity);
        					break;
        				case 3:
        					plan_arr[k1-1].Setcapacity(capacity);
        					break;
        				case 4:
        					plan_arr[k1-1].Setcapacity(capacity);
        					break;
        				case 5:
        					plan_arr[k1-1].Setcapacity(capacity);
        					break;
  						}
  						break;
  		}
  		case 4:
		for (size_t i=0; i<max_size; i++) {
	cout << "Model: ";
    cout << plan_arr[i].get_model(); 
    cout << ";  "<< "Year of production: ";
    cout << plan_arr[i].get_year();
    cout << ";  " << "Power: ";
    cout << plan_arr[i].get_power();
    cout << ";  " << "Speed: ";
    cout << plan_arr[i].get_speed();
    cout << ";  " << "Capacity: ";
    cout << plan_arr[i].get_capacity();
    cout << ".";
    cout << '\n';
  }
  		break;
}
}
}


