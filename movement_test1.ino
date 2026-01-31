  int motor1pin1 = 2;
  int motor1pin2 = 3;

  int motor2pin1 = 4;
  int  motor2pin2 = 5;


  void setup() {
    // put your setup code here, to run once:
    pinMode(motor1pin1, OUTPUT);
    pinMode(motor1pin2, OUTPUT);
    pinMode(motor2pin1,  OUTPUT);
    pinMode(motor2pin2, OUTPUT);


  }

  void loop() {
    // put your main code here, to run repeatedly:
    //(9, 100); //ENA  pin
    //analogWrite(10, 200); //ENB pin
    //(Optional)

    // Straight Line
    
    digitalWrite(motor1pin1,  HIGH);
    digitalWrite(motor1pin2, LOW);

    digitalWrite(motor2pin1, HIGH);
    digitalWrite(motor2pin2, LOW);
    
    delay(3000);


    // Turn 45 Degrees Right

    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, LOW);

    digitalWrite(motor2pin1, HIGH);
    digitalWrite(motor2pin2, LOW)
    delau(300);

    //Turn 45 Degrees Left

    digitalWrite(motor1pin, HIGH);
    digitalWrite(motor1pin, LOW);

    digitalWrite(motor2pin1,LOW);
    digitalWrite(motor2pin2,LOW)
    delau(3000);

  }
