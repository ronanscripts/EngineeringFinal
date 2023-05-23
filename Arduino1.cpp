//By Ronan Reinhardt 
//Engineering Final for Senior Year of HS 
//Plays PBZ main theme on Arduino board with single buzzer and multiple LED's 

int buzzer = 13;

// Note Frequencies
int notes[] = {
  220, 246, 261, 293, 311, 329, 349, 369, 392, 415, 440, 493,
  523, 554, 587, 622, 659, 698, 783, 880, 987, 1046, 1174
};

// Note PlayTimes
int durations[] = {
  400, 200, 100, 50, 75, 25, 12, 18, 6, 9, 3, 4, 2, 1, 0.5, 0.75, 0.25, 0.375, 0.125, 0.1875, 0.0625, 0.09375
};

void setup() {
  pinMode(buzzer, OUTPUT);
}

void sound(int note, int duration) {
  tone(buzzer, note);
  delay(duration);
  noTone(buzzer);
}

void loop() {
  // Sections 1-6
  for (int i = 0; i < 6; i++) {
    sound(notes[14 + i], durations[10]);
    delay(durations[11]);
    sound(notes[12 + i], durations[10]);
    delay(durations[11]);
    sound(notes[10 + i], durations[10]);
    delay(durations[11]);
    sound(notes[12 + i], durations[10]);
    delay(durations[0]);
    sound(notes[5 + i], durations[10]);
    delay(durations[0]);
    sound(notes[3 + i], durations[14]);
    delay(durations[0]);
  }

  // Sections 7-9
  for (int i = 0; i < 3; i++) {
    sound(notes[9 + i], durations[10]);
    delay(durations[11]);
    sound(notes[10 + i], durations[10]);
    delay(durations[11]);
    sound(notes[9 + i], durations[10]);
    delay(durations[11]);
    sound(notes[10 + i], durations[10]);
    delay(durations[0]);
    sound(notes[7 + i], durations[10]);
    delay(durations[0]);
    sound(notes[5], durations[14]);
    delay(durations[0]);
  }

  // Sections 11-15
  for (int i = 0; i < 5; i++) {
    sound(notes[14 + i], durations[10]);
    delay(durations[11]);
    sound(notes[12 + i], durations[10]);
    delay(durations[11]);
    sound(notes[10 + i], durations[10]);
    delay(durations[11]);
    sound(notes[12 + i], durations[10]);
    delay(durations[0]);
    sound(notes[5 + i], durations[10]);
    delay(durations[0]);
    sound(notes[3 + i], durations[14]);
    delay(durations[0]);
  }

  // Sections 16-18
  for (int i = 0; i < 3; i++) {
    sound(notes[12 + i], durations[10]);
    delay(durations[11]);
    sound(notes[5 + i], durations[10]);
    delay(durations[11]);
    sound(notes[3 + i], durations[10]);
    delay(durations[11]);
    sound(notes[0 + i], durations[10]);
    delay(durations[0]);
  }

  // Sections 19-23
  for (int i = 0; i < 5; i++) {
    sound(notes[7 + i], durations[10]);
    delay(durations[11]);
    sound(notes[3 + i], durations[10]);
    delay(durations[11]);
    sound(notes[11 + i], durations[10]);
    delay(durations[11]);
    sound(notes[18 + i], durations[10]);
    delay(durations[0]);
    sound(notes[14 + i], durations[10]);
    delay(durations[0]);
    sound(notes[12 + i], durations[14]);
    delay(durations[0]);
  }

  // Sections 24-27
  for (int i = 0; i < 4; i++) {
    sound(notes[10 + i], durations[6]);
    delay(durations[7]);
    sound(notes[11 + i], durations[6]);
    delay(durations[7]);
    sound(notes[10 + i], durations[6]);
    delay(durations[7]);
    sound(notes[11 + i], durations[6]);
    delay(durations[0]);
    sound(notes[7 + i], durations[6]);
    delay(durations[0]);
    sound(notes[5 + i], durations[10]);
    delay(durations[0]);
    sound(notes[7 + i], durations[11]);
    delay(durations[0]);
  }

  // Sections 28-30
  for (int i = 0; i < 3; i++) {
    sound(notes[5 + i], durations[10]);
    delay(durations[11]);
    sound(notes[7 + i], durations[10]);
    delay(durations[11]);
    sound(notes[2 + i], durations[10]);
    delay(durations[11]);
    sound(notes[0 + i], durations[10]);
    delay(durations[0]);
    sound(notes[3 + i], durations[10]);
    delay(durations[0]);
    sound(notes[10], durations[14]);
    delay(durations[0]);
  }
}




