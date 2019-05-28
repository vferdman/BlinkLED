#include "application.h"
#line 1 "c:/Users/Vladimir/Documents/Particle_IO/Photon/BlinkLED/src/BlinkLED.ino"
// ------------
// Blink an LED
// ------------

// First, we're going to make some variables.
// This is our "shorthand" that we'll use throughout the program:

void setup();
void loop();
#line 8 "c:/Users/Vladimir/Documents/Particle_IO/Photon/BlinkLED/src/BlinkLED.ino"
int led1 = D0; // Instead of writing D0 over and over again, we'll write led1
// You'll need to wire an LED to this one to see it blink.

int led2 = D7; // Instead of writing D7 over and over again, we'll write led2
// This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.

// Define delay constants
#define ON_DELAY  1000
#define OFF_DELAY 1000


void setup() {

  // We are going to tell our device that D0 and D7 (which we named led1 and led2 respectively) are going to be output
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

// Next we have the loop function, the other essential part of a microcontroller program.
// This routine gets repeated over and over, as quickly as possible and as many times as possible, after the setup function is called.
// Note: Code that blocks for too long (like more than 5 seconds), can make weird things happen (like dropping the network connection).  The built-in delay function shown below safely interleaves required background activity, so arbitrarily long delays can safely be done if you need them.

void loop() {
  // To blink the LED, first we'll turn it on...
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);

  // We'll leave it on for 1 second...
  delay(ON_DELAY);

  // Then we'll turn it off...
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);

  // Wait 1 second...
  delay(OFF_DELAY);
}

