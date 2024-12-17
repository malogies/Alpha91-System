
# Alpha91 Automated Fire Suppression System Overview

## System Functionality
The **Alpha91 Fire Suppression System** is an IoT-based automated control solution utilizing the **Alpha91 Mainboards (V1.2, V1.3, V1.4)**. It integrates advanced control logic, real-time monitoring, and cloud connectivity for efficient and reliable fire suppression.

## 1. Solenoid Valve Control
The system supports solenoid valves for **fire suppression deployment**:
- **12V output** for **V1.2** boards.  
- **12/24V outputs** for **V1.3 and V1.4** boards.  

These outputs are ideal for activating valves, alarms, or other suppression devices.

## 2. Sensor Integration
The Alpha91 system is compatible with multiple sensor types, including:
- **Plug-and-Play Temperature Sensors**:  
  - Digital sensors provided by Alpha91.  
  - Universal **Dallas Digital Sensors** for broader compatibility.  
- **Gas Sensors**: Detect hazardous gases.  
- **Thermal Sensors**: Read and monitor thermal temperatures.  
- **Smoke Sensors**: Trigger alarms or solenoids upon detection.  
- **Button/Switch Inputs**: Manually activate or reset systems.

### Trigger Logic
- When **temperature thresholds**, **button inputs**, **gas**, or **smoke sensors** are activated, the system triggers solenoid valves.  
- Trigger settings, delays, and sensor types are fully configurable during the platform setup.

## 3. Configuration and Setup
The Alpha91 controller includes a **local web interface** for configuration. Installers can access this interface by visiting the default IP address **192.168.4.1**.  

### Settings Saved to Onboard Flash
- **Sensor Configuration**:  
  - Total number of sensors.  
  - Sensor types: **Temperature**, **Gas**, **Thermal**, **Smoke**, or **Button**.  
- **Trigger Conditions**:  
  - Temperature thresholds for each channel.  
  - Solenoid activation durations.  
  - Channel-specific solenoid trigger sequences with delays.  
- **Input Types**: Select between **Temperature**, **Gas**, **Switch/Button**, or **Smoke Sensors**.  
- **RS485 Communication**: Enable or disable communication with other devices.  

## 4. Connectivity
The Alpha91 system connects to networks via:
- **Ethernet** for reliable wired communication.  
- **Wi-Fi** for flexible remote connectivity.  

The controller can send real-time data to a **cloud server** (requires an API key) for logging, alerts, and incident management.

## 5. Onboard Display and Features
- **LCD/OLED Displays**: Real-time display of temperatures, gas levels, and thermal readings.  
- **Daisy-Chained Sensors**: Sensors can be replaced without additional updates—only a system reboot is required.  
- **RS485 Integration**:  
   - Send data to or receive data from other systems (e.g., LoRa networks).  
   - Integrate with external monitoring or control systems.  

## 6. Cloud Server Capabilities
The cloud server enhances system management with the following features:
- **Push Notifications**: Instant alerts for triggers, faults, or incidents.  
- **Audit Logs**: Store real-time data such as:  
   - Temperature readings.  
   - Charger status.  
   - Sensor health and status.  
- **Incident Reporting**:  
   - Auto-generate incident reports and send via **email** or **push notifications**.  
   - Notify administrators of faulty sensors or trigger conditions.  

## 7. Web Application
The Alpha91 web app provides comprehensive monitoring and management tools:
- **Live Dashboard**: View real-time sensor readings, including temperature, gas, and thermal data.  
- **Thermal Imaging**: 3D-rendered thermal images are displayed every 5 seconds.  
- **Data History**: View logs, temperature history, and incident reports.  
- **Custom Applications**:  
   - Alpha91 provides a **WebView URL** for clients to create their own branded applications.  
   - **Paid Licenses** allow commercial clients to customize logos and branding.  

## 8. Installer Platform for Commercial Clients
The **Alpha91 Installer Platform** simplifies setup and ongoing maintenance for commercial clients:
- Configure and update controllers remotely.  
- Perform resets and firmware updates.  
- Manage public user access for monitoring and data retrieval.  
- Centralized management for multiple controllers.  

## 9. Custom Features and Commercial Support
Alpha91 offers **custom software development** and support for commercial clients:
- New features tailored to unique industry requirements.  
- Ongoing technical support for system integration and optimization.  

## 10. Summary of Key Features
| **Feature**                       | **Description**                                      |
|-----------------------------------|------------------------------------------------------|
| **Solenoid Control**              | 12V (V1.2) / 12/24V (V1.3, V1.4) output activation.  |
| **Sensor Compatibility**          | Temp, Gas, Thermal, and Smoke Sensors supported.     |
| **Web Interface**                 | Local setup at 192.168.4.1.                          |
| **Connectivity**                  | Ethernet and Wi-Fi for cloud communication.          |
| **Cloud Server Integration**      | Push notifications, audit logs, and incident reports.|
| **Display**                       | LCD/OLED for real-time monitoring.                   |
| **RS485/Serial Communication**    | Send and receive data from external systems.         |
| **Daisy-Chained Sensors**         | Plug-and-play with easy replacement.                 |
| **Web App**                       | Real-time monitoring, logs, and thermal images.      |
| **Installer Platform**            | Commercial-grade remote management and updates.      |
