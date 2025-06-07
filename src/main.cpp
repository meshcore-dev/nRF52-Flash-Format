#include <Adafruit_LittleFS.h>
#include <InternalFileSystem.h>
#include <Adafruit_TinyUSB.h>

using namespace Adafruit_LittleFS_Namespace;

void setup() {
  delay(500);
  InternalFS.begin();

  delay(500);
  InternalFS.format();

  delay(500);
  enterUf2Dfu();
}

void loop() {
  // do nothing
  delay(100);
}