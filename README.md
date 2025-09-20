# SJ413-clock
**DISCLAMER** 
The PCB dimensions are approximate, the position of the screw holes is not correct, feel free to contribute in this regard.<br />
You must have the original plastic casing to assemble the clock.<br />
Pointers are much appreciated(i'm still an amateur in electronics).<br />
This project is not complete(it may change and improve in the future).
<img width="681" height="763" alt="immagine" src="https://github.com/user-attachments/assets/98e6de28-094b-4de6-9a5e-ae5b6f957bfd" />

The project is a replacement of the original suzuki sj-413 dashboard clock. All code on these repository is made using platformIO, leveraging the inexpensive wch ch32v003f4p6 MCU.<br />
List of components(lcsc part numbers):<br />
C1(100nf): C14663, <br />
C2(1uf): C28322, <br />
C3(470uf):C5162352, <br />
C4(330uf):C3032175, <br />
C5(12pf):C76948, <br />
C6(100nf):C14663, <br />
D1:C5357977, <br />
D2:C552776, <br />
J1(oled display connector), <br />
J2(wch-linke interface), <br />
J4(molex connector for rtc), <br />
J5(power connector), <br />
L1(47uh/2A): C5189938, <br />
R1(4k7):C99782, <br />
R2(4k7):C99782, <br />
U1(mcu):C5187096, <br />
U2(buck converter):C2681226, <br />
U3(real time clock):C7440, <br />
Y1:C90945, <br />
display used: C5248081, <br />
# external connection
![connector](https://github.com/user-attachments/assets/f634ac46-edff-462f-b546-d8d522e51234)
you should use only the top row of the connector: the left one is positive, the right one is negative
#Images(from previous iteration, without reverse current protection):
<img width="1200" height="1599" alt="immagine" src="https://github.com/user-attachments/assets/d58e53ff-826d-4cfd-9c15-e057bd8b9c3c" />
<img width="1599" height="1200" alt="immagine" src="https://github.com/user-attachments/assets/8dba869d-be28-4118-909e-52b747826991" />

