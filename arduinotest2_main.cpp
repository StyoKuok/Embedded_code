#include <Arduino.h>
// put function declarations here:
int myFunction(int, int);
#define LED1 8
#define LED2 9

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  delay(1000); 
}

void loop() {
  // put your main code here, to run repeatedly:
   if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n'); // 读取串口发送的字符串
    if (command == "1") {
      digitalWrite(LED1, !digitalRead(LED1));
       delay(1000); // 切换LED1状态
       if (digitalRead(LED1)==HIGH)
       {Serial.println("LED1亮"); }// 发送反馈}
        if(digitalRead(LED1)==LOW) 
        {Serial.println("LED1灭"); }
    } else if (command == "2") {
      digitalWrite(LED2, !digitalRead(LED2)); 
       delay(1000);// 切换LED2状态
      if (digitalRead(LED2)==HIGH)
       {Serial.println("LED2亮"); }// 发送反馈}
        if(digitalRead(LED2)==LOW) 
        {Serial.println("LED2灭"); }
    } else if (command >="3"&4&command <"9"){
      Serial.println("没有相应的指令"); // 发送反馈
    }
  }
}
// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}