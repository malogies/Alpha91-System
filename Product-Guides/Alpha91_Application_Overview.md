# **Alpha91 Application Overview**

## **Overview**
The Alpha91 ecosystem provides a comprehensive suite of applications and tools that enable seamless monitoring, control, and configuration of Alpha91 systems. Designed for end-users, installers, and administrators, Alpha91 applications ensure real-time performance, secure communication, and user-friendly access to system features.

This document outlines the key components of the Alpha91 application ecosystem, including the **WebApp**, **Android WebView App**, **Installer Platform**, and the security features implemented for safe and reliable communication.

---

## **1. Alpha91 WebApp**
The **Alpha91 WebApp** provides a real-time, browser-based interface for users to monitor and control their Alpha91 systems.

### **Key Features:**
- **Dashboard View**:
   - Displays live data for all connected sensors, including temperature, gas levels, and system statuses.
   - Visualize thermal images (when thermal cameras are connected).
- **Real-Time Monitoring**:
   - View sensor data, system triggers, and solenoid statuses.
   - Display fault notifications and error logs.
- **Historical Logs**:
   - Retrieve historical data for analysis, including temperature logs, event triggers, and alerts.
- **Configuration Management**:
   - Set temperature, gas, or smoke thresholds for solenoid triggers.
   - Configure delays, durations, and output channels.
   - Enable/disable cloud API communication.
- **Push Notifications**:
   - Receive real-time notifications for critical events such as:
     - Fault detection (e.g., sensor errors or power failures).
     - High-temperature or gas triggers.
- **Secure Access**:
   - Accessible over HTTPS for encrypted and secure communication.

**Benefits:**
- Platform-independent: Access from any device with a web browser.
- User-friendly interface for monitoring and configuration.

---

## **2. Android WebView App**
The **Alpha91 Android WebView App** extends the functionality of the WebApp to mobile devices, providing real-time access to Alpha91 systems through a native Android application.

### **Key Features:**
- **Mobile Dashboard**:
   - Access live sensor data, system triggers, and logs on the go.
- **Push Notifications**:
   - Instant alerts for faults, triggers, and events directly to mobile devices.
- **Cloud Integration**:
   - Syncs with Alpha91 cloud servers for remote monitoring.
- **Offline Cache**:
   - Temporarily stores critical data for offline viewing.
- **Custom Branding**:
   - Commercial license holders can customize the app branding and interface for clients.

**Benefits:**
- Optimized for mobile devices for quick access and control.
- Real-time notifications ensure critical events are never missed.
- Customizable for commercial clients to provide branded solutions.

---

## **3. Installer Platform**
The **Alpha91 Installer Platform** is a dedicated tool for commercial installers and system integrators. It allows for streamlined configuration, monitoring, and management of multiple Alpha91 systems.

### **Key Features:**
- **Controller Configuration**:
   - Set up and manage multiple Alpha91 systems remotely.
   - Configure inputs, outputs, thresholds, and delays.
- **Bulk Updates**:
   - Perform firmware updates and settings changes for multiple controllers simultaneously.
- **Remote Troubleshooting**:
   - Diagnose system faults, sensor errors, and connectivity issues.
- **User Management**:
   - Add or remove public or private user access to individual systems.
   - Assign roles for monitoring or controlling specific functions.
- **Audit Logs**:
   - Monitor system performance and historical logs for all managed controllers.
- **Customizable Access**:
   - Restrict access based on roles (e.g., administrator, technician, or client).

**Benefits:**
- Centralized management of multiple systems for efficiency.
- Reduced downtime with remote troubleshooting and updates.
- Streamlined client onboarding with role-based access management.

---

## **4. Security Over HTTPS**
Alpha91 prioritizes security and data protection for all its applications and communication protocols. By implementing **HTTPS encryption**, Alpha91 ensures that all data transmitted between devices, web apps, and cloud servers remains secure.

### **Security Features:**
1. **HTTPS Communication**:
   - All connections to the Alpha91 WebApp, cloud servers, and APIs are encrypted using **TLS (Transport Layer Security)**.
   - Prevents unauthorized access and data interception.

2. **API Key Protection**:
   - Secure API keys authenticate and encrypt communication between Alpha91 controllers and cloud servers.
   - Users must configure API keys for secure data logging and cloud integration.

3. **User Authentication**:
   - Role-based authentication ensures that only authorized users can access or control Alpha91 systems.
   - Password-protected access to sensitive configuration settings.

4. **Secure Cloud Storage**:
   - All logs, notifications, and configuration data are securely stored on cloud servers.
   - Data integrity and access control are maintained for compliance and audits.

5. **Firmware Security**:
   - Secure firmware updates prevent unauthorized changes to Alpha91 systems.
   - Verifiable updates ensure system reliability.

### **Benefits of HTTPS Security:**
- Protects user data from unauthorized access and cyberattacks.
- Ensures safe communication between devices, apps, and servers.
- Provides compliance with industry-standard security protocols.

---

## **Summary of Applications**
| **Application**         | **Key Features**                                                                 | **Benefits**                                |
|-------------------------|---------------------------------------------------------------------------------|--------------------------------------------|
| **WebApp**              | Real-time monitoring, historical logs, configuration, and push notifications.    | Platform-independent, user-friendly access.|
| **Android WebView App** | Mobile dashboard, push notifications, cloud sync, offline cache, and branding.   | Optimized for mobile with real-time alerts.|
| **Installer Platform**  | Centralized management, bulk updates, troubleshooting, and user management.      | Streamlined management for installers.     |
| **HTTPS Security**      | Encrypted communication, secure APIs, user authentication, and secure storage.   | Ensures data privacy and system integrity. |

---

## **Conclusion**
The Alpha91 system's applications, including the **WebApp**, **Android WebView App**, and **Installer Platform**, provide robust tools for monitoring, control, and configuration. Coupled with **industry-standard HTTPS security**, Alpha91 ensures secure, scalable, and user-friendly solutions for automation, fire suppression, home automation, and industrial systems.

For more details and documentation, visit [Alpha91 Documentation](#).
