



#define NOTE_B0  31

#define NOTE_C1  33

#define NOTE_CS1 35

#define NOTE_D1  37

#define NOTE_DS1 39

#define NOTE_E1  41

#define NOTE_F1  44

#define NOTE_FS1 46

#define NOTE_G1  49

#define NOTE_GS1 52

#define NOTE_A1  55

#define NOTE_AS1 58

#define NOTE_B1  62

#define NOTE_C2  65

#define NOTE_CS2 69

#define NOTE_D2  73

#define NOTE_DS2 78

#define NOTE_E2  82

#define NOTE_F2  87

#define NOTE_FS2 93

#define NOTE_G2  98

#define NOTE_GS2 104

#define NOTE_A2  110

#define NOTE_AS2 117

#define NOTE_B2  123

#define NOTE_C3  131

#define NOTE_CS3 139

#define NOTE_D3  147

#define NOTE_DS3 156

#define NOTE_E3  165

#define NOTE_F3  175

#define NOTE_FS3 185

#define NOTE_G3  196

#define NOTE_GS3 208

#define NOTE_A3  220

#define NOTE_AS3 233

#define NOTE_B3  247

#define NOTE_C4  262

#define NOTE_CS4 277

#define NOTE_D4  294

#define NOTE_DS4 311

#define NOTE_E4  330

#define NOTE_F4  349

#define NOTE_FS4 370

#define NOTE_G4  392

#define NOTE_GS4 415

#define NOTE_A4  440

#define NOTE_AS4 466

#define NOTE_B4  494

#define NOTE_C5  523

#define NOTE_CS5 554

#define NOTE_D5  587

#define NOTE_DS5 622

#define NOTE_E5  659

#define NOTE_F5  698

#define NOTE_FS5 740

#define NOTE_G5  784

#define NOTE_GS5 831

#define NOTE_A5  880

#define NOTE_AS5 932

#define NOTE_B5  988

#define NOTE_C6  1047

#define NOTE_CS6 1109

#define NOTE_D6  1175

#define NOTE_DS6 1245

#define NOTE_E6  1319

#define NOTE_F6  1397

#define NOTE_FS6 1480

#define NOTE_G6  1568

#define NOTE_GS6 1661

#define NOTE_A6  1760

#define NOTE_AS6 1865

#define NOTE_B6  1976

#define NOTE_C7  2093

#define NOTE_CS7 2217

#define NOTE_D7  2349

#define NOTE_DS7 2489

#define NOTE_E7  2637

#define NOTE_F7  2794

#define NOTE_FS7 2960

#define NOTE_G7  3136

#define NOTE_GS7 3322

#define NOTE_A7  3520

#define NOTE_AS7 3729

#define NOTE_B7  3951

#define NOTE_C8  4186

#define NOTE_CS8 4435

#define NOTE_D8  4699

#define NOTE_DS8 4978

#define melodyPin 9
//me quede sin ideas porque se me olvido la hoja en el carro jajajajaja (es enserio[lo que use en su lugar https://gist.github.com/mikeputnam/2820675])
int SDLG_melody[] = {
  NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_E5 , NOTE_E5,
  NOTE_E5, NOTE_E5, NOTE_G5, NOTE_C5, NOTE_D5,
  NOTE_E5,
  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5,
  NOTE_F5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_E5,
  NOTE_D5, NOTE_G5};
int SDLG_tempo[] = {
    8, 8, 4,
    8, 8, 8,
    8, 8, 8, 8, 8,
    2,
    8, 8, 8, 8,
    8, 8, 8, 16, 16,
    8, 8, 8, 8, 8,
    4,4 };
//cancion 2 o 3 o 4 ya ni se aaa
int canciong_melody[] = {
  NOTE_B3,//SABEN NO SE QUE HAGO
  NOTE_F4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4,
  NOTE_D4, NOTE_D4, NOTE_D4,
  NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4,NOTE_F4,
  NOTE_E4, NOTE_E4 , NOTE_E4,
  NOTE_A4, NOTE_A4, NOTE_B4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_D4, NOTE_B3, NOTE_B3,
  NOTE_D4, NOTE_G4, NOTE_E4,
  NOTE_F4};
//SABEN NO CONFIO EN MI SOMBRA ASI QUE EEEEEEEE ♋︎⍓︎◆︎♎︎♋︎♋︎♋︎♋︎♋︎♋︎♋︎♋︎♋︎♋︎♋︎ ❍︎♏︎ ♎︎◆︎♏︎●︎♏︎ ⧫︎□︎♎︎□︎ ⍓︎ ♏︎⬧︎⧫︎□︎⍓︎ ♋︎❑︎◆︎♓︎ ♋︎◆︎■︎ ♋︎♋︎♋︎♋︎♋︎♋︎♋︎♋︎♋︎ 
int canciong_tempo[] = {
  4,
  4, 8, 8, 8, 8,
  4, 4, 4,
  4, 8, 8, 8, 8,
  4, 4, 4,
  4, 8, 8, 8, 8,
  4, 4, 8, 8,
  4, 4, 4,
  2};
  //♏︎●︎ ⬧︎♋︎■︎⧫︎♋︎ ⬧︎♏︎ ❖︎♓︎■︎□︎ ♏︎■︎ ●︎♋︎ ♍︎♓︎◆︎♎︎♋︎♎︎
int santa_melody[] = {
  NOTE_G4,
  NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4,
  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, NOTE_C5,
  NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4,
  NOTE_A4, NOTE_G4, NOTE_F4, NOTE_F4,
  NOTE_E4, NOTE_G4, NOTE_C4, NOTE_E4,
  NOTE_D4, NOTE_F4, NOTE_B3,
  NOTE_C4};
int santa_tempo[] = {
  8,
  8, 8, 4, 4, 4, 
  8, 8, 4, 4, 4,
  8, 8, 4, 4, 4,
  8, 8, 4, 2,
  4, 4, 4, 4,
  4, 2, 4,
  1};
int switchOne = 0;
int switchTwo = 0;
int switchthree = 0;
void setup(void){
  pinMode(9,OUTPUT);//ESTO ES LO DEL VIBRADOR
  pinMode(13,OUTPUT); //lo del led
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);}
void loop(){
  switchOne = digitalRead(2);
  switchTwo = digitalRead(3);
  switchthree =  digitalRead(4);
  if(switchOne == HIGH){
    sing(1);
}else if(switchTwo == HIGH){
    sing(2);
}else if (switchthree){
    sing(3);
}
}
int song = 0;
void sing(int s){
  song = s;
  if(song == 3){
    Serial.println("'We wishus a Merry christmas'");
    int size = sizeof(canciong_melody)/sizeof(int);
    for (int thisNote = 0;thisNote < size;thisNote++){
      int noteDuration = 1000 / canciong_tempo[thisNote];
      buzz(melodyPin,canciong_melody[thisNote],noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      buzz(melodyPin, 0, noteDuration);
}
} else if (song == 2){
  Serial.println("'Santa Clos is coming to town'");
  int size = sizeof(santa_melody)/sizeof(int);
  for (int thisNote = 0;thisNote < size;thisNote++){
    int noteDuration = 900 / santa_tempo[thisNote];
    buzz (melodyPin,santa_melody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration *1.30;
    delay(pauseBetweenNotes);
    buzz(melodyPin, 0, noteDuration);
}
} else if (song == 2){
  Serial.println("'JINGLE BELLS'");
  int size = sizeof(SDLG_melody)/sizeof(int);
  for (int thisNote = 0;thisNote < size;thisNote++){
    int noteDuration = 1000 / SDLG_tempo[thisNote];
    buzz (melodyPin,SDLG_melody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration *1.30;
    delay(pauseBetweenNotes);
    buzz(melodyPin, 0, noteDuration);
}
}
}
void buzz(int targetPin, long frequency, long length){
  digitalWrite(13,HIGH);
  long delayValue = 1000000 / frequency / 2;
  long numCycles = frequency * length /1000;
  for (long i = 0; i < numCycles;i++){
    digitalWrite(targetPin,HIGH);
    delayMicroseconds(delayValue);
    digitalWrite(targetPin, LOW);
    delayMicroseconds(delayValue);
  }
  digitalWrite(13,LOW);
} 






