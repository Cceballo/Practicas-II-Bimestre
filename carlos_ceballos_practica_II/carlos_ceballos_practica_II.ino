/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: menu de comida
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 13/04/2023
*/

int contador=1;  //Se define una variable, que servira como el contador  

struct productos    // estructura de datos
{
  char items[25];   //Definimos el tipo de variable que usaremos
  float precio;
  int stock;
  int cantidad;
};
productos P1 = {"poporopos",15.00,14,18.50};  //Estos son nuestros productos los cuales son parte del struc: productos
productos P2 = {"tortrix",1.00,5,10};
productos P3 = {"ruffitas",5.00,2,12};
productos P4 = {"Azucaritas",30.00,10,10};
productos chucherias []= {P1,P2,P3,P4}; // Aqui definimos cuantos productos tenemos a partir de los datos anteriores

void setup() {
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  Serial.begin(9600);
                    //Menu de inicio
 
  Serial.println("Bienvenido");
}
void loop() {
  
         if(digitalRead(4)==HIGH) //DigitalRead leera si el pin 4 esta prendido o apagado
                                    // y el If hace que si el boton esta en HIGH
                                    //se ejecutara lo que se encuentra entre llaves{}
          {
            delay(100); // antirebote
         contador++;
          if(contador>4) contador=0;

          Serial.println("Productos disponibles");
          Serial.println("Nombre De Producto:");
          Serial.println(chucherias[contador].items);  //Es el struct con la variables
          Serial.println("Precio:");
          Serial.println(chucherias[contador].precio);
          Serial.println("Stock:");
          Serial.println(chucherias[contador].stock);
          Serial.println("Cantidad:");
          Serial.println(chucherias[contador].cantidad);
          delay(1000);  
    }

     if(digitalRead(5)==HIGH)      //DigitalRead leera si pin 5 esta prendido o apagado
                                    // y el If hace que si el boton esta en HIGH
                                    //se ejecutara lo que se encuentra entre llaves{}
     {
      delay(100); //es el antirebote 
      contador--;
     
      if(contador<-2)  contador=3;
          Serial.println("Productos disponibles");
          Serial.println("Nombre De Producto:");
          Serial.println(chucherias[contador].items); //Es el struct con la variables
          Serial.println("Precio:");
          Serial.println(chucherias[contador].precio);
          Serial.println("Stock:");
          Serial.println(chucherias[contador].stock);
          Serial.println("Cantidad:");
          Serial.println(chucherias[contador].cantidad);
          delay(1000);
     
     }
}
