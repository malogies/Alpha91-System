# **Alpha91 Controller Features**

## **Overview**
The Alpha91 series of controllers (V1.2, V1.3, and V1.4) are modular IoT-based automation and monitoring platforms. Built on the powerful ESP32-S3 microcontroller, they are equipped with advanced features for seamless integration into various industries such as fire suppression, industrial automation, home automation, and IoT applications. 

---

## **Key Features of Alpha91 Controllers**

### **1. High-Performance Microcontroller**
- Powered by **ESP32-S3**, providing:
   - Dual-core performance for multitasking.
   - Built-in **Wi-Fi (2.4 GHz)** and **Bluetooth 5.0** for wireless communication.
   - Low power consumption for efficient operation.

---

### **2. Power Management**
- **24V DC Input** (V1.3 & V1.4) and **12V DC Input** (V1.2) for flexible power options.
- Integrated **LiFePO4 Battery Charger**:
   - V1.2: **15.6V charger** for backup batteries.
   - V1.3 & V1.4: **25.6V charger** for robust battery redundancy.
- Ensures uninterrupted operation in critical systems.

---

### **3. Digital Outputs**
- Configurable **Digital Outputs** for automation control:
   - V1.2: **9 x 12V Outputs**.
   - V1.3 & V1.4: **5 x 12V/24V Outputs**.
- **Switch-Selectable** for easy configuration.
- Supports up to **3A per channel**, ideal for:
   - Solenoid valves.
   - Relays and alarms.
   - Actuators.

---

### **4. Digital Inputs/Outputs**
- Configurable **Digital IN/OUT Pins**:
   - V1.2: **8 Channels** (3.3V support).
   - V1.3 & V1.4: **4 Channels** (2-pin and 3-pin supported).
- Compatible with:
   - Temperature sensors.
   - Gas sensors.
   - Smoke sensors.
   - Manual triggers such as buttons and switches.

---

### **5. Communication Options**
- **RS485 Communication**:
   - Seamlessly integrates with SCADA, PLCs, and industrial devices.
   - Enables two-way communication for automation and monitoring.
- **Ethernet Port** (V1.3 & V1.4):
   - Provides a wired connection for real-time communication with cloud or local systems.
- **Wi-Fi and Bluetooth**:
   - Wireless communication for configuration, monitoring, and control.
- **2G SIM Module Compatibility**:
   - Provides cellular connectivity in remote or network-limited areas.
   - Transmits real-time data to cloud servers.

---

### **6. Cloud Functionality**
- Alpha91 controllers support real-time **cloud integration** for remote monitoring and control.
- **Cloud Features Include**:
   - **Data Logging**: Logs sensor readings, outputs, and trigger events for audits and analysis.
   - **Push Notifications**: Sends alerts for:
      - Sensor triggers (temperature, gas, smoke).
      - Fault detection.
      - Solenoid activation.
   - **Incident Reporting**: Auto-generates reports with timestamps and sensor data.
   - **Secure API Integration**: Allows integration with custom applications for viewing logs and real-time events.
   - **System Monitoring**: Logs power status, sensor health, and system uptime.

---

### **7. Web Interface Configuration**
- Built-in **web interface** accessible at `192.168.4.1`.
- Allows users to:
   - Configure **trigger thresholds** for inputs (temperature, gas, or manual).
   - Assign delays, durations, and output sequences.
   - Enable/disable **RS485** communication.
   - Configure cloud API key for secure server communication.
   - Monitor real-time sensor and system statuses.

---

### **8. Real-Time Monitoring and Display**
- Supports external **LCD/OLED Displays**:
   - Display temperature, gas levels, fault alerts, and solenoid statuses.
- **Local Monitoring**:
   - View system performance without accessing a remote interface.
   - Provides critical feedback in environments like server rooms, factories, or greenhouses.

---

### **9. Fault Detection and Alerts**
- **Sensor Fault Detection**:
   - Automatically identifies faulty or disconnected sensors.
- **System Alerts**:
   - Sends push notifications and logs for system faults, such as:
      - Low battery status.
      - Faulty solenoids.
      - Overcurrent conditions.

---

### **10. Modular and Scalable Design**
- Alpha91 controllers are designed to be modular:
   - Easily integrate additional sensors, solenoids, or modules (e.g., thermal cameras).
   - Replace sensors or components without reprogramming.
- Scalable for small and large installations with support for **daisy-chaining temperature sensors**.

---

## **Summary Table of Features**
| **Feature**                  | **V1.2**            | **V1.3**            | **V1.4**            |
|------------------------------|---------------------|---------------------|---------------------|
| **Microcontroller**          | ESP32-S3            | ESP32-S3            | ESP32-S3            |
| **Power Input**              | 12V DC              | 24V DC              | 24V DC              |
| **Battery Charger**          | 15.6V LiFePO4       | 25.6V LiFePO4       | 25.6V LiFePO4       |
| **Digital Outputs**          | 9 x 12V Outputs     | 5 x 12V/24V Outputs | 5 x 12V/24V Outputs |
| **Digital IN/OUT Channels**  | 8 Channels          | 4 Channels          | 4 Channels          |
| **RS485 Communication**      | Yes                 | Yes                 | Yes                 |
| **Ethernet Port**            | No                  | Yes                 | Yes                 |
| **Wi-Fi/Bluetooth**          | Yes                 | Yes                 | Yes                 |
| **2G SIM Support**           | Yes                 | Yes                 | Yes                 |
| **LCD/OLED Display Support** | Yes                 | Yes                 | Yes                 |

---

## **Conclusion**
The Alpha91 controllers (V1.2, V1.3, and V1.4) deliver advanced automation, monitoring, and communication features for various applications. Whether you are automating fire suppression systems, industrial controls, home automation, or IoT projects, the Alpha91 series offers robust connectivity, modular scalability, and user-friendly configuration for seamless operation.

For more information and support, visit [Alpha91 Documentation](#).
