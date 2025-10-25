# ESP32 4WD RC Car

> ⚙️ **Note:** This project is part of my personal engineering portfolio.  
> It is shared for **educational and demonstration purposes only**, not as a build guide.  
> The design, code, and documentation are provided *as-is* to showcase engineering and development skills.

> 🚧 **Status:** Work in progress – current stage focuses on design and documentation.

A DIY, 3D-printed, ESP32-controlled RC car, powered via DC motors, and steered with a servo motor


## Table of Contents
- [Features](#features)
- [Planned Features](#planned-features)
- [Hardware](#hardware)
    - [Bill of Materials (BOM)](#bill-of-materials-bom)
    - [Recommended Tools](#recommended-tools)
- [Disclaimer](#disclaimer)


## Features
- ESP32 microcontroller, with Wi-Fi and Bluetooth options
- 4WD with TT yellow DC motors
- TB6612 H-Bridge driver for motor controls
- DS3218 servo for steering capabilities
- 3D-printed chassis (PETG for body, TPU for tires)

## Planned Features
- iOS app as an HMI (Human Machine Interface), with communication via Bluetooth
- Design exterior vehicle body for cosmetic purposes


## Hardware

### Bill of Materials (BOM)
| Qty | Part | Notes | Link |
|---:|---|---|:---:|
| 1 | **ESP32-DevKitC-32E** | Main controller | [🌐](https://www.mouser.com/ProductDetail/Espressif-Systems/ESP32-DevKitC-32E?qs=GedFDFLaBXFpgD0kAZWDrQ%3D%3D&srsltid=AfmBOorIxaI1YQNErr3PUuSqxhEdNI8vGSmanfLeIb-81fLB0SOtxyCM) |
| 2 | **TT Yellow DC Gearbox Motor** | Powers the wheels| [🌐](https://www.mouser.com/ProductDetail/Adafruit/3777?qs=wUXugUrL1qweKcY9Lv7Qqg%3D%3D) |
| 1 | **DS3218 Servo Motor** | Steering motor | [🌐](https://www.amazon.com/ZOSKAY-DS3218-Digital-Waterproof-Control/dp/B01MU7TQV8) |
| 1 | **TB6612 Breakout Board** | H-Bridges for TT motors | [🌐](https://www.mouser.com/ProductDetail/Adafruit/2448?qs=GURawfaeGuCkWVI5OMiFVg%3D%3D) |
| 1 | **AA NiMH Batteries 8-Pack** | Supply Power | [🌐](https://www.amazon.com/AmazonBasics-Rechargeable-Batteries-8-Pack-Pre-charged/dp/B00CWNMV4G/?th=1) |
| 1 | **AA Battery Holder** | Supply 4.8V and Secure Batteries| [🌐](https://www.amazon.com/VWEICYY-Battery-Holder-housing-Without/dp/B0DZX39MHK) |

### Recommended Tools

## Disclaimer
This project is shared for **educational and demonstration purposes only**.  
It is intended to showcase design and engineering work, not to serve as a build guide.  
If others choose to replicate it, they do so **at their own risk**.  
The author assumes **no responsibility** for injury, damage, or misuse of the information provided.
