Source Code
#define ENA  11
#define ENB  9
#define  IN1  12
#define  IN2  13
#define  IN3  10
#define IN4 8 #define IR1 A0 #define IR2 A1 #define IR3 A2 #define IR4 A3 #define IR5 A4 void  setup()  {
// put your setup code here, to run once: Serial.begin(9600);
pinMode(IR1,INPUT); pinMode(IR2,INPUT);
 
void  forward()
{
analogWrite(ENA,255); digitalWrite(IN1,HIGH); digitalWrite(IN2,LOW); analogWrite(ENB,255); digitalWrite(IN3,HIGH); digitalWrite(IN4,LOW);
}
void backward()
{
analogWrite(ENA,255); digitalWrite(IN1,LOW); digitalWrite(IN2,HIGH); analogWrite(ENB,255); digitalWrite(IN3,LOW); digitalWrite(IN4,HIGH);
}
void f_right()
{
analogWrite(ENA,0); digitalWrite(IN1,LOW); digitalWrite(IN2,LOW);
 
analogWrite(ENB,255); digitalWrite(IN3,HIGH); digitalWrite(IN4,LOW);
}
void  f_left()
{
analogWrite(ENA,255); digitalWrite(IN1,HIGH); digitalWrite(IN2,LOW); analogWrite(ENB,0); digitalWrite(IN3,LOW); digitalWrite(IN4,LOW);
}
void b_right()
{
analogWrite(ENA,0); digitalWrite(IN1,LOW); digitalWrite(IN2,LOW); analogWrite(ENB,255); digitalWrite(IN3,LOW); digitalWrite(IN4,HIGH);
}
void  b_left()
{
analogWrite(ENA,255); digitalWrite(IN1,LOW); digitalWrite(IN2,HIGH); analogWrite(ENB,0); digitalWrite(IN3,LOW); digitalWrite(IN4,LOW);
}
}
