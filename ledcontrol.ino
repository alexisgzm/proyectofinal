//modulacion de intencidad del led

const int led =3; //led conectado al pin 3
const int pot=0; //DECLARAMOS EL POTENCIOMETRO EN EL PIN 0
int brillo;

void setup() {
  pinMode(led, OUTPUT); // declaramos el led como salida
//los pines analogicos se declaran como entradas automaticamente
}

void loop() {
brillo = analogRead(pot)/4; //leemos el valor del potenciometro y lo dividimos entre para
analogWrite(led, brillo);  //usarlo en el analogWrite
  
  
 /*led desvanecido y encendido modulado automatico
  * for(brillo =0; brillo < 256; brillo++) {
    analogWrite (led, brillo);
    delay(10);
    }// desvanecido en el brillo del led
for(brillo =255; brillo >=0; brillo--){
  analogWrite(led, brillo);
  delay(10);
  }*/
}
