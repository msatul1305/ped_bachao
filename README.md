# ped_bachao

ABSTRACT/INTRODUCTION
The proposed system designed will of an app, a database and a few sensors which send data to the database. Users have to upload the location of the sapling which they planted in the app and is later viewed using google maps for geotagging purpose. Sensors to detect vibration have also been proposed to know if miscreants are cutting down the tree. Different components communicate with the database using an Arduino and data is sent to cloud using NodeMCU module which connects to the internet and send/Receive data. Alternatively, they will be allowed to communicate over cellular network. A provision has been kept where user is also alerted through SMS if any abnormal inputs are provided by the sensor.
SOLUTION
Each user will login through the app and maintain its own profile and details of the planted saplings and will get updates from the sensors.
Users will get option to add their farms’ coordinates along with image and other necessary data.
The app will also contain basic information about how to prevent plant death and information about what nutrients and conditions are proper for plant growth.
The farm location is to be uploaded by the user in the app which can then be accessed using the app through google maps for geotagging.
This data will be transferred to the database over a cellular network/Wi-Fi which will be accessible through the app.
The app will be designed to remind the user regularly water the plant and check its health and report if any irregularity is detected.
Accelerometer and vibration sensors are employed to detect if the tree is being cut down or any other damage being done in real time.
These sensors will be designed to send data every hour to the database.
Immediate alert will be issued to the user to take action if any discrepancies are found in the collected data.
It will also regularly update the user with the weather data fetched from the meteorological department website or any other relevant sources.
Soil/moisture sensors will be used to detect whether proper amount of moisture is present in the soil or not and know the humidity of soil to find if it is proper for the plant’s growth.
Soil Temperature Sensor to detect the proper temperature of the soil, electrochemical sensors to monitor the pH and soil nutrients.
The sensors will be connected in an IOT network so that their data can be collected regularly and can be monitored remotely.
Through edge computing, common data is filtered and any anomaly is sent to the cloud which is then notified through the app.
A smart sprinkler for drip irrigation will be placed in the soil so that whenever the soil water level drops below a threshold value, the sprinkler becomes on and automatically waters the field. When the nutrient level goes low the user will get a notification about which nutrient/mineral is deficient and how to resolve it.
Solar cells can be used to run the components.
Materials to be used:
Arduino, Sensors, NodeMCU, Solar Panels
ADVANTAGES
•	Smart Agriculture, Automatic Irrigation Management, Water Management, use of advanced technology like GIS towards Agriculture and Agricultural Ontologies to provide semantic understanding for computing devices.
•	Water conservation
•	Automated system for longer lasting solution.
•	Wireless network to solve the issues.
•	More sensor integration and cost effective.
•	Range of sensors is more and more sensors can be added for triggering applications.
•	Design of proper base station.
•	Cellular structure and frequency planning to give better coverage.
•	Use of GPS and GNSS to allow farmers to locate their precise position in a field allows for the creation of maps of the spatial variability of as many variables as can be measured (e.g. crop yield, terrain features/topography, organic matter content, moisture levels, nitrogen levels, pH, EC, Mg, K, and others). Similar data is collected by sensor arrays mounted on GPS-equipped combine harvesters. These arrays consist of real-time sensors that measure everything from chlorophyll levels to plant water status, along with multispectral imagery.
•	Precision agriculture is used along with IOT .
•	
KNOWN ISSUES
•	Lack of expertise might lead to wrong coordinates of tree’s position being uploaded, which might lead to more errors when satellites are used to locate the trees and monitor their health.
•	Internet Connectivity is required.
Use Cases
1. Farmers – Use the app to monitor health of plant, and know current status of various conditions like humidity, pH, soil type and nutrients and manage them using the app.
2. Social Workers – monitor farms
3. Agriculture Research Department – collect data about various farms, soil and know the reasons for failure.
4. Government – help the farmers in case of emergency 
<br>List of Sensors<br>
<ol>
  <li>Node MCU</li>
  <li>DHT sensor</li>
  <li>Soil Moisture Sensor</li>
  <li>Sprinkler</li>
  <li>Ultrasonic Sensor</li>
  <li>Motor Driver</li>
 </ol>
  
