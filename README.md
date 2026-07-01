1.Project Title
Smart Street Light System Using Arduino Uno

2. Abstract
A Smart Street Light System is an automation project that controls street lights based on the surrounding light intensity and vehicle movement. The system uses an
Arduino Uno as the main controller, an LDR (Light Dependent Resistor) to detect day and night, and an IR sensor (or ultrasonic sensor) to detect vehicles or
pedestrians. The street lights turn ON only when it is dark and a vehicle is detected, reducing unnecessary power consumption and improving energy efficiency.
This project demonstrates how embedded systems can be used to create smart city applications.

3. Introduction
Street lights consume a large amount of electricity when they remain ON throughout the night, even when no vehicles are present. A smart street lighting system
helps reduce electricity wastage by automatically controlling the lights according to environmental conditions.
Arduino Uno reads the data from sensors and controls the LEDs, which represent street lights. This project is simple, cost-effective, and suitable for smart city
applications. 

4. Objectives
To reduce electricity consumption.
To automate street light operation.
To detect day and night using an LDR sensor.
To detect vehicles using an IR sensor.
To improve road safety.
To demonstrate an Arduino-based embedded system

5. Component      | Quantity    
 -------------- | ----------- 
 Arduino Uno    | 1           
 LDR Sensor     | 1           
 IR Sensor      | 1 or 2      
 LEDs           | 4–6         
 220Ω Resistors | 4–6         
 Breadboard     | 1           
 Jumper Wires   | As required 
 USB Cable      | 1           
 Power Supply   | 5V
 
6. Working Principle
The LDR continuously measures the surrounding light intensity.
During daytime, the Arduino keeps all street lights OFF.
At night, the Arduino activates the IR sensor.
When a vehicle passes near the IR sensor, it detects motion.
The Arduino turns ON the nearby LEDs.
After the vehicle moves away, the LEDs turn OFF after a short delay.
This process repeats automatically.

7. Advantages
Saves electrical energy.
Reduces electricity bills.
Fully automatic operation.
Low maintenance.
Easy to install.
Environment-friendly.
Suitable for smart city projects.

8. Applications
Highways
Smart cities
Residential streets
College campuses
Industrial areas
Parking lots
Garden pathways

9. Future Scope
IoT-based remote monitoring.
Solar-powered smart street lights.
Wi-Fi or GSM control.
Automatic fault detection.
Brightness control using PWM.
Mobile app monitoring.
AI-based traffic prediction.

10. Conclusion
The Smart Street Light System using Arduino Uno is an energy-efficient and economical solution for modern street lighting. By using an LDR and IR sensor, the
system automatically controls street lights based on environmental conditions and vehicle movement. It reduces power consumption, increases safety, and supports
smart city development. This project is simple to implement and serves as an excellent embedded systems mini project.

11. Features
Automatic ON/OFF operation
Day/Night detection
Vehicle detection
Low power consumption
Easy programming with Arduino IDE
Low-cost implementation
Reliable and efficient

12. Expected Output
Daytime: All LEDs remain OFF.
Nighttime without vehicles: LEDs remain OFF (or dim, depending on the design).
Nighttime with vehicle detection: LEDs turn ON automatically.
After the vehicle passes: LEDs turn OFF after a few seconds.
This mini project clearly demonstrates how embedded systems and sensors can be used to automate public infrastructure while improving energy efficiency.
