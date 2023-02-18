int secunde=0;
int secundezeci=0;
int secundesute=0;
int secundemii=0;
int contor=0;
void displaycifra(int numar){
  if(numar==0)
  {
    digitalWrite(1,LOW);// linie sus
    digitalWrite(2,LOW);//stanga sus
    digitalWrite(5,LOW);// dreapta sus
    digitalWrite(6,LOW);//stanga jos
    digitalWrite(9,LOW);//dreapta jos
    digitalWrite(7,LOW);// linie jos
    digitalWrite(10,HIGH);//mijloc
  }

  if(numar==1)
  {
     digitalWrite(1,HIGH);// linie sus
  digitalWrite(2,HIGH);//stanga sus
  digitalWrite(5,HIGH);// dreapta sus
  digitalWrite(6,HIGH);//stanga jos
  digitalWrite(7,HIGH);// linie jos
  digitalWrite(5,LOW);// dreapta sus
  digitalWrite(9,LOW);// dreapta jos
 

  }

  if(numar==2)
  {
    
  digitalWrite(1,LOW);// linie sus
  digitalWrite(5,LOW);// dreapta sus
  digitalWrite(10,LOW);// mijloc 
  digitalWrite(6,LOW);// stanga jos
  digitalWrite(7,LOW);// linie jos
  digitalWrite(2,HIGH);//stanga sus
  digitalWrite(9,HIGH);//dreapta jos
  
  
  }

  if(numar==3)
  {
  digitalWrite(1,LOW);// linie jos
  digitalWrite(5,LOW);// dreapta sus
  digitalWrite(10,LOW);// mijloc
  digitalWrite(9,LOW);// dreapta jos
  digitalWrite(7,LOW);// linie jos
  digitalWrite(2,HIGH);//stanga sus
  digitalWrite(6,HIGH);//stanga jos
   
  }

  if(numar==4)
  {
  digitalWrite(1,HIGH);// linie jos
  digitalWrite(5,LOW);// dreapta sus
  digitalWrite(10,LOW);// mijloc
  digitalWrite(9,LOW);// dreapta jos
  digitalWrite(7,HIGH);// linie jos
  digitalWrite(2, LOW);//stanga sus
  digitalWrite(6,HIGH);//stanga jos
   
  }

   if(numar==5)
  {
  digitalWrite(1,LOW);// linie jos
  digitalWrite(5,HIGH);// dreapta sus
  digitalWrite(10,LOW);// mijloc
  digitalWrite(9,LOW);// dreapta jos
  digitalWrite(7,LOW);// linie jos
  digitalWrite(2, LOW);//stanga sus
  digitalWrite(6,HIGH);//stanga jos
   
  }

   if(numar==6)
  {
  digitalWrite(1,LOW);// linie jos
  digitalWrite(5,HIGH);// dreapta sus
  digitalWrite(10,LOW);// mijloc
  digitalWrite(9,LOW);// dreapta jos
  digitalWrite(7,LOW);// linie jos
  digitalWrite(2, LOW);//stanga sus
  digitalWrite(6,LOW);//stanga jos
   
  }

  
   if(numar==7)
  {
    
  digitalWrite(5,LOW);// dreapta sus
  digitalWrite(9,LOW);// dreapta jos
  digitalWrite(1,LOW);// linie sus
  digitalWrite(2,HIGH);//stanga sus
  digitalWrite(5,HIGH);// dreapta sus
  digitalWrite(6,HIGH);//stanga jos
  digitalWrite(7,HIGH);// linie jos

  }
  
   if(numar==8)
  {
    digitalWrite(1,LOW);// linie sus
    digitalWrite(2,LOW);//stanga sus
    digitalWrite(5,LOW);// dreapta sus
    digitalWrite(6,LOW);//stanga jos
    digitalWrite(9,LOW);//dreapta jos
    digitalWrite(7,LOW);// linie jos
    digitalWrite(10,LOW);//mijloc
  }
  if(numar==9)
  {
  digitalWrite(1,LOW);// linie jos
  digitalWrite(5,LOW);// dreapta sus
  digitalWrite(10,LOW);// mijloc
  digitalWrite(9,LOW);// dreapta jos
  digitalWrite(7,LOW);// linie jos
  digitalWrite(2, LOW);//stanga sus
  digitalWrite(6,HIGH);//stanga jos
   
  }
  
  
}

void  casutacifra(int cifra)
{
  if(cifra==0)
  {
     digitalWrite(0,HIGH);
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     digitalWrite(11,LOW);
  }

  if(cifra==1)
  {
    digitalWrite(3,HIGH);
    digitalWrite(0,LOW);
    digitalWrite(4,LOW);
    digitalWrite(11,LOW);
  }
  if(cifra==2)
  {
    digitalWrite(4,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(0,LOW);
    digitalWrite(11,LOW);
  }

  if(cifra==3)
  {
     digitalWrite(11,HIGH);
     digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    digitalWrite(0,LOW);
  
  }
}

void setup() {
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(8,LOW);
    digitalWrite(1,HIGH);// linie sus
    digitalWrite(2,HIGH);//stanga sus
    digitalWrite(5,HIGH);// dreapta sus
    digitalWrite(6,HIGH);//stanga jos
    digitalWrite(9,HIGH);//dreapta jos
    digitalWrite(7,HIGH);// linie jos
    digitalWrite(10,HIGH);//mijloc
    digitalWrite(8,HIGH);//punct
        
}

void loop()
{ 
  casutacifra(3);
  displaycifra(secunde);
  delay(1);
  casutacifra(2);
  displaycifra(secundezeci);
  delay(1);
  casutacifra(1);
  displaycifra(secundesute);
  delay(1);
  casutacifra(0);
  displaycifra(secundemii);
  delay(1);
  contor++;
  
  if(contor>=250)
  {
    contor=0;
    secunde++;
    
    if(secunde>=10)
    {
      secunde =0;
      secundezeci++;
    }
    
    if(secunde>=100)
    {
      secundezeci =0;
      secundesute++;
    }
    
  }

  
 

  
}
