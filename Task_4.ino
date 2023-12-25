void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT); 
  pinMode(11,OUTPUT); 
  pinMode(2,OUTPUT);  
  pinMode(3,OUTPUT);  
  pinMode(6,OUTPUT);  
  pinMode(7,OUTPUT);  
  pinMode(8,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(1500);

  // Display 8 on the seven-segment-display
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(1500);

  // Display 7 on the seven-segment-display
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  delay(1500);

  // Display 6 on the seven-segment-display
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(1500);

  // Display 5 on the seven-segment-display
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(1500);

  // Display 4 on the seven-segment-display
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  delay(1500);

  // Display 3 on the seven-segment-display
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(1500);

  // Display 2 on the seven-segment-display
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(1500);

  // Display 1 on the seven-segment-display
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(1500);

  // Display 0 on the seven-segment-display
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(1500);

}
