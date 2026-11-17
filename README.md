# Microcontroller Interfacing 🚀

This repository contains standard, modular, bare-metal C drivers for the **PIC18F4620** microcontroller. 

## Architecture Overview
The project follows a professional layered software architecture to ensure modularity and code reusability:
* **MCAL (Microcontroller Abstraction Layer):** Contains drivers for internal MCU peripherals (e.g., GPIO).
* **ECU (Electronic Control Unit Abstraction Layer):** Contains drivers for external interfacing components (e.g., Push Buttons, LEDs).

## Tools & Environment
* **Language:** C 
* **IDE:** MPLAB X IDE
* **Compiler:** XC8 Compiler
