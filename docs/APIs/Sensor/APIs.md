### DHT


**Constructor**

		DHT(int plot_num, int gpio_in); //Number of plot, pin where is conected.
		
		
**Compulsory function**

		virtual int update_value();
		
   
 **Basic functions**
 
    	float get_hum();
    
   		float get_temp();
    
	
### Moisture sensor


**Constructor**

		Moisture_sensor(int plot_num, int gpio_in); //Number of plot, pin where is conected.
		

  **Compulsory funcion**
  
		virtual void update_value();
		
		
### Photoresistance


**Constructor**

		Photoresistance(int plot_num, int gpio_in); //Number of plot, pin where is conected.
		

**Compulsory funcion**

		virtual void update_value();
