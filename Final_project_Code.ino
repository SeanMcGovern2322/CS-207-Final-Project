#include <MusicBuzzer.h>

/*
  Author: Everton Ramires
  More Tutorial: https://www.youtube.com/channel/UC7zG4YQJc8v-9jNGQknOx5Q

  Based on the great work of robsoncouto at github (https://github.com/robsoncouto/arduino-songs).

  CURRENT SONG OPTIONS:
  (PT-BR)OPÇÕES ATUAIS DE MUSICAS:


  music.asabranca();
  music.babyelephantwalk();
  music.bloodytears();
  music.brahmslullaby();
  music.cannonind();
  music.cantinaband();
  music.doom();
  music.furelise();
  music.gameofthrones();
  music.greenhill();
  music.greensleeves();
  music.happybirthday();
  music.harrypotter();
  music.imperialmarch();
  music.jigglypuffsong();
  music.keyboardcat();
  music.merrychristmas();
  music.miichannel();
  music.minuetg();
  music.nevergonnagiveyouup();
  music.odetojoy();
  music.pinkpanther();
  music.princeigor();
  music.professorlayton();
  music.pulodagaita();
  music.silentnight();
  music.songofstorms();
  music.startrekintro();
  music.starwars();
  music.supermariobros();
  music.takeonme();
  music.tetris();
  music.thegodfather();
  music.thelick();
  music.thelionsleepstonight();
  music.vampirekiller();
  music.zeldaslullaby();
  music.zeldatheme();
*/

#define BUZZER_PIN 13

int ledPins[] = {2, 3, 4, 5, 6, 7, 8};
const int BUTTON1Pin = 9 ;
const int BUTTON2Pin = 10 ;
const int BUTTON3Pin = 11 ;
const int BUTTON4Pin = 12 ;

int BUTTON1State = 0;
int BUTTON2State = 0;
int BUTTON3State = 0;
int BUTTON4State = 0;

void setup()
{


  for (int i = 0; i < 7; i++) {
    pinMode(ledPins[i], OUTPUT);

    pinMode(BUTTON1Pin, INPUT);
    pinMode(BUTTON2Pin, INPUT);
    pinMode(BUTTON3Pin, INPUT);
    pinMode(BUTTON4Pin, INPUT);

    music.init(BUZZER_PIN);
  }
}

  void loop()
  {
    BUTTON1State = digitalRead(BUTTON1Pin);
    BUTTON2State = digitalRead(BUTTON2Pin);
    BUTTON3State = digitalRead(BUTTON3Pin);
    BUTTON4State = digitalRead(BUTTON4Pin);

    if (BUTTON1State == HIGH) {
      music.starwars();
      larsonScanner();
    }

    if (BUTTON2State == HIGH) {
      music.vampirekiller();
      larsonScanner();
    }

    if (BUTTON3State == HIGH) {
      music.startrekintro();
      larsonScanner();
    }

    if (BUTTON4State == HIGH) {
      music.zeldaslullaby();
      larsonScanner();
    }

  }

  void larsonScanner()
  {
    int delayTime = 100; 
   

    for (int i = 0; i <= 6; i++) {
      int offLED = i - 1;  
      if (i == 0) {        
        offLED = 1;        
      }                    
      
      digitalWrite(ledPins[i], HIGH);     
      digitalWrite(ledPins[offLED], LOW); 
      delay(delayTime);
    }

    for (int i = 5; i >= 1; i--) {
      int offLED = i + 1;  
      digitalWrite(ledPins[i], HIGH);     
      digitalWrite(ledPins[offLED], LOW); 
      delay(delayTime);
    }
  }
