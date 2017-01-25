/*
 Name:		CancionAlana.ino
 Created:	25/01/2017 21:26:59
 Author:	jcala
*/
#include "Pitches.h" 
// the setup function runs once when you press reset or power the board
int melody[] = {
	NOTE_G4, NOTE_G4, NOTE_C5, NOTE_G4, NOTE_E4,
	NOTE_E4, NOTE_G4, NOTE_A5, NOTE_AS5, NOTE_C5, NOTE_E5,
	NOTE_F5, NOTE_C5, NOTE_A5, NOTE_C5, NOTE_F4,
	NOTE_FS4, NOTE_A5, NOTE_D5, NOTE_FS5, NOTE_A6,NOTE_FS5,
	NOTE_G5, NOTE_D5, NOTE_B5,NOTE_D5,NOTE_F5,
	NOTE_E5, NOTE_C5, NOTE_G4, NOTE_C5, NOTE_D5, NOTE_E5,
	NOTE_F5, NOTE_CS5, NOTE_GS5, NOTE_CS5, NOTE_F5,
	NOTE_FS5, NOTE_C5, NOTE_A5, NOTE_D5, NOTE_FS5,
	NOTE_GS5,NOTE_E5,NOTE_CS5,NOTE_GS5,
	NOTE_A6,NOTE_G5,NOTE_F5,NOTE_E5,NOTE_D5,NOTE_C5,
	NOTE_B5, NOTE_A5, NOTE_B5, NOTE_D5,
	NOTE_E5,NOTE_D5,NOTE_C5,NOTE_B5,NOTE_A5,NOTE_B5,
	NOTE_C5,NOTE_B5,NOTE_A5,NOTE_G4,NOTE_F4,NOTE_G4,
	NOTE_A5,NOTE_G4,NOTE_F4,NOTE_E4,NOTE_F4,NOTE_A5,
	NOTE_GS4,NOTE_E4,NOTE_F4,NOTE_E4,NOTE_GS4,NOTE_E4,
	NOTE_A5, 0
	
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
	4, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8,
	4, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8,
	4, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8,
	4, 8, 8, 8, 8,
	4, 8, 8, 8, 8,
	4, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8,
	8, 8, 3, 8,
	8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8,
	8, 2
};
int tamano = 84;
int pinBuzzer = 3;

void setup() {

}

void loop() {
	for (int thisNote = 0; thisNote < tamano; thisNote++) {

		int noteDuration = 1000 / noteDurations[thisNote];
		tone(pinBuzzer, melody[thisNote], noteDuration);
		int pauseBetweenNotes = noteDuration * 1.30;
		delay(pauseBetweenNotes);
		noTone(pinBuzzer);
	}
	delay(3000);
}