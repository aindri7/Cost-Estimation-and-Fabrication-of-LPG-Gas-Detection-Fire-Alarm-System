# Cost Estimation and Fabrication of LPG gas detection and fire alarm system
This system deals with the detection of LPG gas leakage and fire. Then protect the place with the help of water sprinkler and sending the location via sms to the multiple devices and giving emergency calls.
## Introduction
Fire hazard is the most common hazard, which is present in all areas of life. Fire hazard can be occurs from Lpg gas, Unattended cooking, Electrical systems that are overloaded, Poorly maintained or defective, Flammable liquids or vapour, Dust, Objects that generate heat and from many more sources. Kitchen fires and fires from Lpg gas are most common fire hazard for residence home nowadays. Fire accidents caused an average of 62 deaths per day in the last 5 years. The National Crime Records Bureau data indicates that a total of 113961 people lost their lives due to fire accidents from 2010 to 2014. This is an average of 62 deaths a day. Maharashtra alone accounted for 24293 deaths or 21.3% of all the deaths due to fire accidents. That’s why learning about fire safety and applying proper equipments for own safety is important. Our project will help us to minimise fire hazards. This project is a complete protection system. If any gas leakage occurs then it will detect the gas with the help of MQ2 sensor. And alert anyone near to the incident by using of buzzer. Even if fire hazard occurs it will detect it quickly and the alarming system will work again. We can quickly get the information of the hazard by sms or emergency call and also come to know about the exact location of the incident. This automatic protection system will automatically spread water after occurring any kind of fire hazard.
## Components Required
All the required components are:
1) MICROCONTROLLER
2) LCD DISPLAY
3) LPG GAS SENSOR
4) TEMPERATURE SENSOR
5) BUZZER
6) NODE MCU ESP8266
7) MINI MOTOR
8) RESISTORS
9) LED INDICATORS
10) NPN TRANSISTOR
11) DIODE
## Flow chart
![Screenshot (1)](https://github.com/aindri7/Cost-Estimation-and-Fabrication-of-LPG-Gas-Detection-Fire-Alarm-System/assets/75011539/d3214f57-599e-43b3-97e0-9e690e238676)
## Circuit diagram
For LPG gas detection system:
![Screenshot (2) lpg](https://github.com/aindri7/Cost-Estimation-and-Fabrication-of-LPG-Gas-Detection-Fire-Alarm-System/assets/75011539/56e3a6ca-7a16-40c0-a8bd-06ad91dc9471)
For Flame detection with water sprinkler system:
![Screenshot (2) flame](https://github.com/aindri7/Cost-Estimation-and-Fabrication-of-LPG-Gas-Detection-Fire-Alarm-System/assets/75011539/8d928782-af7c-4df9-a104-405e143af001)
## Working Principle
This project is a complete protection system. If any LPG gas leakage, methane, Butane, smoke or flammable gasses present in the atmosphere then it will detect the gas with the help of MQ2 sensor. And alert anyone near to the incident by using of buzzer. Even if fire hazard occurs it will detect it quickly and the alarming system will work again. We can quickly get the information of the hazard by sms or emergency call and also come to know about the exact location of the incident. This automatic protection system will automatically spread water after occurring any kind of fire hazard. At first we have to collect hardware. If LPG or any kind of toxic gas present in the atmosphere and the value is above 400 then the LPG gas sensor will activate. Red LED will be high and green LED will be low. That means only red LED will activate. “ALERT”, “EVACUATE”, and “LPG GAS PRESENT” and value will display on LCD. The alarming system will work automatically and alert everyone near to the incident. Then it will send sms with exact location quickly and give emergency call also. If fire occurs from the toxic gas or LPG and the value of the temperature is above 60℃ then the temperature sensor will activate. Red and Blue LED will high and green LED will low. That means only Red and Blue LED will activate. “HIGH FLAME”, “EVACUATE” and value will display on LCD. Alarming system will work again. Again we will get sms with exact location and emergency call from the system. Then the mini motor will activate automatically and it will spread water and extinguish the fire. If the LPG Gas is not present then the value will be below 400. Green LED will be high and Red LED will be low. That means only green LED will activate.”SAFE”, “ALL CLEAR” and value will display on LCD. The buzzer will be off. If the temperature is below 60℃ then Green LED will be high and Red and Blue LED will be low. That means only Green LED will activate. Again “SAFE”, “ALL CLEAR” and value will display on LCD. The buzzer and water sprinkler will be off.
