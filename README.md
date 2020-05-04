# Matrix Keypad library

* http://www.github.com/NimaLTD   
* https://www.instagram.com/github.nimaltd/   
* https://www.youtube.com/channel/UCUhY7qY1klJm1d2kulr9ckw   

I hope use it and enjoy.
<br />
I use Stm32f103vc and Keil Compiler and Stm32CubeMX wizard.
 <br />
Please Do This ...
<br />
<br />
1) Select "General peripheral Initalizion as a pair of '.c/.h' file per peripheral" on project settings.
<br />
2) Select your Column Pins as pushpull output and Row Pins as pullup input.
<br />
3) Config your KeyPadConfig.h.
<br />
4) Call KeyPad_Init() function after sturtup.
<br />
5) You can use read keyPad with KeyPad_WaitForKey(timeout) function.
<br />
6) if Timeout==0, Wait forever to pressed a key.
<br />
7) Returned value :  0x0101,0x0201,0x0401,0x0102 and ...  .High Byte is Row value,Low Byte is Column Value. 
