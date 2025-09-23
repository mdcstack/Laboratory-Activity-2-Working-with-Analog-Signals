
int pins[5]={12,11,10,9,8};
int brightness[5] = {130,145,150,200,255}; 

void setup(){ 
  int i = 0;
  while(i < 5){
    pinMode(pins[i], OUTPUT);
    i++;
  }
}

 
void loop(){
 int on = 0;
 while (on < 5){
 	analogWrite(pins[on], brightness[on]);
 	delay(1000);
 	on++;
 }
 
 int off = 0;
 while (off < 5){
 	analogWrite(pins[off], LOW);
 	delay(1000);
 	off++;
 }
   
}
          
       
    
