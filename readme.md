@mainpage

# Nextion Library for Arduino 

Nextion Arduino library provides an easy-to-use way to manipulate Nextion serial displays. 
Users can use the libarry freely, either in commerical projects or open-source prjects,  without any additional condiitons. 

For more information about the Nextion display project, please visit [the wiki。](http://wiki.iteadstudio.com/Nextion_HMI_Solution)  
The wiki provdies all the necessary technical documnets, quick start guide, tutorials, demos, as well as some useful resources.

To get your Nextion display, please visit [iMall.](http://imall.itead.cc/display/nextion.html)

To discuss the project?  Request new features?  Report a BUG? please visit the [Forums](http://support.iteadstudio.com/discussions/1000058038)

​
# Source 

Latest source code can be download at https://github.com/itead/ITEADLIB_Arduino_Nextion.

You can clone it by:

    git clone https://github.com/itead/ITEADLIB_Arduino_Nextion

# Documentation
Online API documentation can be reached at <http://docs.iteadstudio.com/ITEADLIB_Arduino_Nextion/>.

Offline API documentation can be found under directory 
[doc](https://github.com/itead/ITEADLIB_Arduino_Nextion/tree/master/doc).

# Hareware requirement 

  - RAM: not less than 2KBytes
  - Serial: two serial (communication and debug)

# Serial configuration

If you want to change the default serial to debug or communicate with Nextion ,you need to modify the line in file NexSerialConfig.h:

	#define dbSerial Serial    ---> #define dbSerial Serialxxx
    #define nexSerial Serial2  ---> #define dbSerial Serialxxx
If you want to close the debug information,you need to modify the line in file NexSerialConfig.h:

    #define DEBUG_SERIAL_ENABLE ---> //#define DEBUG_SERIAL_ENABLE
# Suppported Mainboards:

  - Iteaduino MEGA2560
  - Arduino MEGA2560

-------------------------------------------------------------------------------


 DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE 
        Version 2, December 2004 

 Copyright (C) 2014 ITEAD Studio

 Everyone is permitted to copy and distribute verbatim or modified 
 copies of this license document, and changing it is allowed as long 
 as the name is changed. 

        DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE 
        
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION 

  0. You just DO WHAT THE FUCK YOU WANT TO.


-------------------------------------------------------------------------------
