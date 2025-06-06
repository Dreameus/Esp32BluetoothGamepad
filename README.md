# 🎮 ESP32 Bluetooth Gamepad

A simple and functional Bluetooth HID gamepad using an ESP32, one analog joystick, and four buttons. Designed for use with PCs, Android devices, or any platform that supports Bluetooth HID input.
 
## 🚀 Features

- Bluetooth HID Gamepad using ESP32
- One analog joystick (X and Y axes)
- Four digital buttons (A, B, X, Y)
- Compatible with Android, Windows, and Linux
- Minimal latency and smooth input updates

## 🧰 Hardware Requirements

- ESP32 Dev Module (e.g. ESP32-WROOM-32)
- 1 x Analog Joystick Module
- 4 x Push Buttons
- Jumper wires and breadboard

## 🧠 Pin Mapping

| Component      | ESP32 GPIO |
|----------------|------------|
| Joystick X     | 34         |
| Joystick Y     | 35         |
| Button A       | 25         |
| Button B       | 26         |
| Button X       | 27         |
| Button Y       | 14         |

You can change the pin numbers in `main.ino` if needed.

## 🔧 Setup Instructions

### 1. Install Required Library

Install this library via Arduino IDE Library Manager or directly from GitHub:

- **ESP32 BLE Gamepad** by T-vK  
  [https://github.com/T-vK/ESP32-BLE-Gamepad](https://github.com/T-vK/ESP32-BLE-Gamepad)

### 2. Arduino IDE Configuration

- Board: `ESP32 Dev Module`
- Partition Scheme: `Default (2MB APP/2MB SPIFFS)`
- Upload Speed: `921600` (optional)

### 3. Upload Steps

1. Open `main.ino` in Arduino IDE
2. Connect your ESP32 via USB
3. Select correct port and board
4. Click **Upload**

## 📲 How to Use

1. Power up your ESP32
2. Look for a new Bluetooth device named `ESP32 Gamepad`
3. Pair it from your PC/phone
4. Use it like a standard game controller in games or apps

## 📁 Project Structure

├── src/
│ └── main.ino
├── hardware/
│ └── wiring-diagram.png (optional)
├── README.md
├── LICENSE
└── .gitignore

## 📸 Preview

*(Insert photos or screenshots of your setup and Bluetooth connection here)*

## 🧪 Tested On

- Android 12 (via RetroArch)
- Windows 10 (via Gamepad Tester)
- ESP32-WROOM-32 board

## 📜 License

This project is licensed under the MIT License. See the `LICENSE` file for details.

## 🙌 Credits

- [ESP32 BLE Gamepad Library](https://github.com/T-vK/ESP32-BLE-Gamepad) by T-vK
- Inspired by DIY game controller builds from the maker community

---
