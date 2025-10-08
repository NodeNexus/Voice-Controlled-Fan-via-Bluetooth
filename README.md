# 🔊 Voice Controlled Fan

Control your fan wirelessly through simple voice commands sent via Bluetooth.  
An engaging automation project combining IoT and embedded systems.

---

## ⚙️ Components
| Component | Description |
|------------|-------------|
| Arduino Uno | Main controller |
| HC-05 Bluetooth Module | Wireless communication |
| Relay Module | Fan control |
| DC Fan | Load device |

---

## 🧠 Working Principle
- The Arduino communicates with the smartphone via Bluetooth.  
- The user sends “ON” or “OFF” voice commands through any Bluetooth terminal app.  
- Arduino interprets these commands and toggles the relay accordingly.

---

## 🔌 Circuit Connections
| Arduino Pin | Connected To |
|--------------|--------------|
| D10 | HC-05 TX |
| D11 | HC-05 RX |
| D8 | Relay IN |
| 5V, GND | Power Supply |

---

## 💻 Usage
1. Upload `voice_fan.ino`.  
2. Pair HC-05 with your phone (PIN: 1234).  
3. Open a Bluetooth terminal and send “ON” or “OFF”.  
4. Observe fan operation.

---

## 🌟 Features
- Wireless fan control  
- Works with any smartphone  
- Simple two-word command system  

---

## 🔮 Future Ideas
- Add Blynk or IoT dashboard  
- Include speed control via PWM  

---

**Developer — NodeNexus (Vaishnav Balpande)**
