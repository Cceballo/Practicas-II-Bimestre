
#include <LiquidCrystal.h>

  
LiquidCrystal CARLOS(12,11,5,4,3,2);
  
void setup() 
{
  CARLOS.begin(16,2);
    
    CARLOS.print("carlos ceballos");
    CARLOS.setCursor(0,1);
    CARLOS.print("2022337");
  }
    
    void loop() 
    
   { 
  
  }
