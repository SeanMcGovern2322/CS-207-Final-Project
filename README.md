# CS-207-Final-Project  

### Table of Contents
1. Showcase  
2. Manifest
3. Components
4. Install instructions
5. Build instructions
6. What is it for?  
8. Bugs List
9. License
10. Credits
11. Thanks 

### Showcase 

For this project I turned an infant's highchair into a musical toy using some lights, a few arcade buttons, a paizo buzzer, and an Arduino Uno.  When the child pushes one of the arcade button the buzzer will play one of the songs selected from the musicbuzzer library and then play a Larson Scanner pattern across the lights.  Hopefully keeping the child happy and entertainted.

### Manifest
1. Circuit Diagram - Final Project.fzz, a basic diagram of the circuit, showing the components and how they are wired up.  Drawn in the fritzing software.
2. Final_project_Code.ino, the code of the project, managing how all the components of the build function.  Writting in the Arduino Software (IDE).
3. README.md, the readme file you are currently reading. Details the process of the build, it's purpose, and it's issues.  Writting in Github.

### Components
1. Arduino Uno
2. Batterypack for Arduino
3. Infant Highchair
4. x7 LEDS, prefferably of multiple colors
5. x4 Arcade buttons, prefferably of multiple colors
6. x4 Arcade button quick connect wires
7. Multiple pin connector wires, both male to male and male to female
8. Rubbermaid containers

### Install Instructions
1. Install the IDE software onto your computer, can be found at this link: <https://www.arduino.cc/en/Main/Software_>
2. Open the code provided in the repository in the IDE software.
3. Connect Arduino Uno to computer and upload code.

### Build Instructions
1. Examine high chair table, removine the table tray.
2. Examine tray and release mechanisms.
3. Remove screws from the housing covering the tray's release mechanisms.
4. Carefully remove the housing.
5. Examine amount of open space and the extent of the tray's release mechanisms.
6. Put the housing back on, but do not screw back into place.  Test fit Arduino Uno, Batterypack and Breadboard to determine the best fit, marking with a marker when decided upon.
7. Test fit the buttons and lights to determine the best fits, marking with a marker when decided upon.
8. Remove the housing and release mechanisms.
9. Drill holes in the tray for the lights and buttons.
10. Place the buttons and lights into their designated holes, gluing them into place.
11. Mount the Arduino on the top of the housing, mount the battery pack underneath it on the top of the inside of the housing, and the bread board on the bottom of the tray.
12. Replace housing and release mechanisms.
13. Holding the housing in place test the release mechanisms to insure they still work, properly free from instruction.
14. Screw housing back into the tray.
15. Wire up the arduino, the breadboard, and the components.
16. Bundle wires together neatly.
17. Cut Rubbermaid containers to cover compnents and tape containers down.

### What is it for?

The primary purpose of this project is for the entertainment of my soon to be born second son.  Keeping his older brother entertained while waiting for feedings was difficult so I thought that this project would have some success in keeping the new little one entertained while we get his food ready when he's old enough to eat solids.

It is used by placing baby in chair, strapping them in, placing the tray, and letting them push buttons and enjoy the songs and lights that are played.


### Bugs List

The only and most problematic bug that I was unable to fix causes the project to not work.  For some reason the songs play whether or not a button has been placed and the light pattern either plays incorrectly or not at all.  I am unfortunately not a very experienced coder and could not see if there was an issue with the code.  Besides the code, the problem could also be with the arcade buttons wiring or the memory of the Arduino Uno almost being filled by the code.  I tried wiring the buttons in multiple ways but none of them led to a working result.  If anyone recreates the project and figures it out, please let me know.


