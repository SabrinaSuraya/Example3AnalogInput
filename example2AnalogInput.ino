char *admux = (char*) 0x7C;
char *adcra = (char*) 0x7A;
volatile unsigned char *adch = (unsigned char*) 0x79;
volatile unsigned char *adcl = (unsigned char*) 0x78;

void setup() {

 *admux = 0b01000011;
 *adcra = 0b11100111;

 Serial.begin(9600);

 while(1){
    int lowbyte = (*adcl);
    int highbyte = (*adch);

    int value = (highbyte << 8) | lowbyte;
    Serial.println(value);
 }

}

void loop() {
 

}
