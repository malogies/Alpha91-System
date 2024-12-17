# **Alpha91 LCD Display Module Usage Guide**

## **Overview**
The **Alpha91 LCD Display Module** provides real-time monitoring and visual feedback for your Alpha91 Main Controller system. It is designed for quick integration, allowing users to view sensor data, system status, and operational logs directly on the display.

The module supports **128x64 LCD** and **OLED displays** with clear and concise visuals for various applications.

---

## **Key Features**
1. **Real-Time Display**: Monitor temperatures, gas levels, and system triggers live.
2. **Error and Fault Notifications**: Display alerts when sensors, solenoids, or inputs fail.
3. **Customizable Layout**: Show relevant data based on the configuration (e.g., fire suppression, automation, or monitoring).
4. **Plug-and-Play Support**: Connect directly to the Alpha91 Main Controller without additional configuration.

---

## **Supported Displays**
- **128x64 LCD Screens**
- **OLED Display Modules**

These displays provide high-contrast visuals for both indoor and outdoor environments.

---

## **Default Display Information**
The LCD module will display the following information by default:

1. **Temperature Readings**
   - Real-time temperature values from all connected sensors.
   - Example: `Temp 1: 28°C | Temp 2: 30°C`

2. **Gas and Smoke Levels**
   - Display live gas sensor values or smoke detection statuses.
   - Example: `Gas: Normal | Smoke: Alert`

3. **Trigger and Solenoid Status**
   - Visualize which solenoid valves are active and their operational duration.
   - Example: `Solenoid 1: ON | Solenoid 2: OFF`

4. **System Logs and Faults**
   - Display system logs such as errors, warnings, and completed triggers.
   - Example: `Sensor 3: Fault | System OK`

---

## **Wiring and Connection**
### **Pinout Configuration**
The Alpha91 LCD Display Module connects to the **LCD/OLED display pinout** on the Alpha91 Main Controller:
- **VCC**: Power Supply (5V/3.3V)
- **GND**: Ground
- **SDA**: Data Line (I2C)
- **SCL**: Clock Line (I2C)

### **Wiring Diagram**
| **LCD Pin** | **Alpha91 Controller Pin** |
|------------|---------------------------|
| VCC        | VCC (5V/3.3V)             |
| GND        | GND                       |
| SDA        | SDA Pin                   |
| SCL        | SCL Pin                   |

Ensure proper alignment and secure connections to avoid display errors.

---

## **Configuration Steps**
1. **Connect the Display**
   - Connect the **LCD/OLED display** to the designated pinouts on the Alpha91 Main Controller.

2. **Power Up the System**
   - Ensure the controller is powered via the **DC input**.

3. **Verify Display Output**
   - Upon powering the system, the display will automatically initialize and show real-time data.

4. **Customize Display**
   - Use the Alpha91 web interface (`192.168.4.1`) to configure which data appears on the LCD:
     - Enable/disable temperature or gas readings.
     - Set triggers or fault notifications.

---

## **Common Use Cases**
1. **Fire Suppression Systems**
   - Display current temperatures and trigger statuses for solenoid valves.
   - Fault notifications for sensor errors.

2. **Industrial Automation**
   - Show sensor data for machinery, valves, and safety triggers.

3. **Home Automation**
   - Monitor HVAC systems, lighting triggers, and security statuses.

4. **Custom DIY Projects**
   - Real-time feedback for hobbyist IoT and automation projects.

---

## **Troubleshooting**
| **Issue**                  | **Solution**                                      |
|----------------------------|--------------------------------------------------|
| Display not turning on     | Check power connections to VCC and GND.          |
| Data not displaying        | Verify SDA/SCL connections and pin alignment.    |
| Display showing garbage    | Ensure I2C address is correct in configuration.  |
| Faulty display             | Replace display module and re-test connections.  |

---

## **Conclusion**
The Alpha91 LCD Display Module enhances the usability of your Alpha91 Main Controller system by providing real-time feedback and monitoring capabilities. Its seamless integration, customizable layout, and plug-and-play design make it an essential tool for fire suppression, automation, and IoT applications.

---

For further support and documentation, visit [Alpha91 Documentation](#).
