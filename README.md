# SJ413-clock
**DISCLAMER** 
1.The PCB dimensions are approximate, the position of the screw holes is not correct, feel free to contribute in this regard.
2.You must have the original plastic casing to assemble the clock
3.Pointers are much appreciated(i'm still an amateur in electronics)
4.this project is not complete(it may change and improve in the future)

The project is a replacement of the original suzuki sj-413 dashboard clock. All code on these repository is made using platformIO, leveraging the inexpensive wch ch32v003f4p6 MCU.
List of components(lcsc part numbers):
1.C1(100nf): C14663, 
2.C2(1uf): C28322, 
3.C3(470uf):C5162352, 
4.C4(330uf):C3032175, 
5.C5(12pf):C76948, 
6.C6(100nf):C14663, 
7.D1:C5357977, 
8.D2:C552776, 
9.J1(oled display connector), 
10.J2(wch-linke interface), 
11.J4(molex connector for rtc), 
12.J5(power connector), 
13.R1(4k7):C99782, 
14.R2(4k7):C99782, 
15.U1(mcu):C5187096, 
16.U2(buck converter):C2681226, 
17.U3(real time clock):C7440, 
18.Y1:C90945, 

display used: C5248081, 

#external connection
![connector](https://github.com/user-attachments/assets/f634ac46-edff-462f-b546-d8d522e51234)
you should use only the top row of the connector: the left one is positive, the right one is negative
#Images(from previous iteration, without reverse current protection):
<img width="1200" height="1599" alt="immagine" src="https://github.com/user-attachments/assets/d58e53ff-826d-4cfd-9c15-e057bd8b9c3c" />
<img width="1599" height="1200" alt="immagine" src="https://github.com/user-attachments/assets/8dba869d-be28-4118-909e-52b747826991" />

