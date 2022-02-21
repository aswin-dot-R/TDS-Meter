int R1=1000;
int Ra=25;
int EcPin= A1;
int EcGround= A0;
int EcPower= A4;

const unsigned long eventintreval = 3000;
unsigned long previousTime=0;

float ppm_conversion=0.5;
float Temp_Coef = 0.019;

float K=5;

float temp;
float Temperature=27;
float EC=0;
float EC25=0;
int ppm=0;

int ppm_input;

float voltage=0;
float Vref=5;
float Vdrop=0;
float Rc=0;// R of liquid

void setup()
{
    Serial.begin(9600);
    pinMode(EcPin,INPUT);
    pinMode(EcPower,OUTPUT);
    pinMode(EcGround,OUTPUT);
    digitalWrite(EcGround,LOW);
    delay(100);
    R1=R1+Ra;
};

void loop()
{
    unsigned long currentTime=millis();
    if(currentTime-previousTime >= eventintreval)

    {
        digitalWrite(EcPower,HIGH);
        voltage=analogRead(EcPin);
        voltage=analogRead(EcPin);
        digitalWrite(EcPower,LOW);

        Vdrop=(Vref*voltage)/1024.0;
        Rc=(Vdrop*R1)/(Vref-Vdrop);
        Rc=Rc-Ra;
        EC=(1/(Rc*K))*1000;
        EC25=EC/(1+Temp_Coef*(Temperature-25));
        ppm=(EC25)*(ppm_conversion*1000);

        Serial.print("Ec = ");
        Serial.print(EC25);
        Serial.print("mS/cm");
        Serial.print("TDS : ");
        Serial.print(ppm);
        Serial.print("ppm ");
        previousTime = currentTime;


    }

}