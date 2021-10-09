// C++ code
//
int mapRange = 0;
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  for(int i = 0; i<9; ++i)
  {
   pinMode(i, OUTPUT); 
  }
  
}

void loop()
{  
  //Serial.println((99/10));
  mapRange = map(analogRead(A0), 0, 1020, 0, 99);
  //Serial.println(mapRange);
  int tens = mapRange/10;
  int ones = mapRange%10;
  decToBin(tens, 0);
  decToBin(ones, 4);
}
    
void decToBin(int n, int HL)
    {
  	//Serial.println(n);
      int pins[4] = {0,0,0,0};
     if(n >=8)
      {
       n-=8;
        pins[0]= 1;
       //Serial.println("hi"+pins[0]);
      }
      if(n >=4)
      {
       n-=4;
        pins[1] = 1;
      }
      if(n >= 2)
      {
       n-=2;
        pins[2] = 1;
      }
      if(n >= 1)
      {
       n-=1;
        pins[3] = 1;
      }
      
      for(int i = 0; i<4; i++)
      {
        //Serial.print(pins[3-i]);
       digitalWrite((3-i)+2 + HL,pins[i]);
        //Serial.print(pins[i]);
      }
  	//Serial.println();
      
    }
