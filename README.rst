****************
Conreality Rifle
****************

.. image:: https://img.shields.io/badge/license-Public%20Domain-blue.svg
   :alt: Project license
   :target: https://unlicense.org

.. image:: https://img.shields.io/travis/conreality/conreality-rifle/master.svg
   :alt: Travis CI build status
   :target: https://travis-ci.org/conreality/conreality-rifle

|

https://wiki.conreality.org/Rifle

----

Bill of Materials
=================

.. list-table::
   :widths: 20 65 5 5 5
   :header-rows: 1

   * - Supplier
     - Product
     - SKU
     - MSRP
     - Qty

   * - Conreality
     - Rifle FCU Enclosure
     - N/A
     - TBD
     - 1

   * - Adafruit
     - `Feather nRF52 Pro <https://www.adafruit.com/product/3574>`__
     - 3574
     - $27.50
     - 1

   * - Adafruit
     - `Latching Mini Relay FeatherWing <https://www.adafruit.com/product/2923>`__
     - 2923
     - $7.95
     - 1

   * - Adafruit
     - `Short Headers Kit for Feather - 12-pin + 16-pin Female Headers <https://www.adafruit.com/product/2940>`__
     - 2940
     - $1.50
     - 1

   * - Adafruit
     - `Short Headers Kit for Feather - 12-pin + 16-pin Male Headers <https://www.adafruit.com/product/3002>`__
     - 3002
     - $0.50
     - 1

   * - Adafruit
     - `3.3 V 250 mA Linear Voltage Regulator - L4931-3.3 TO-92 <https://www.adafruit.com/product/2166>`__
     - 2166
     - $0.95
     - 1

   * - Adafruit
     - `10 μF 50 V Electrolytic Capacitors - Pack of 10 <https://www.adafruit.com/product/2195>`__
     - 2195
     - $1.90
     - 1

   * - WS Deans
     - `Ultra Plug <https://www.amazon.com/dp/B000BOTWW2>`__
     - 1300
     - $6.53
     - 1

----

Hardware Specifications
=======================

Features
--------

- 3.3 V Nordic Semiconductor
  `nRF52832 <https://www.nordicsemi.com/eng/Products/Bluetooth-low-energy/nRF52832>`__
  ultra-low-power SoC

- 64 MHz 32-bit ARMv7E-M
  `Cortex-M4F <https://en.wikipedia.org/wiki/ARM_Cortex-M#Cortex-M4>`__
  CPU with included FPU

- 64 KiB SRAM and 512 KiB flash memory

- 2.4 GHz RF transceiver with Bluetooth LE (BLE) support

- 13.56 MHz antenna with NFC-A tag support and touch-to-pair capability

Compatibility
-------------

- 2S (7.4 V) or 3S (11.1 V) lithium-ion polymer battery (LiPo)
  with a Deans Ultra Plug T-connector

- V2 gearbox
  with a Deans Ultra Plug T-connector

Dimensions
----------

51 mm × 22.9 mm × 27.5 mm (estimated)

Datasheets
----------

- `Nordic Semiconductor nRF52832
  <http://infocenter.nordicsemi.com/pdf/nRF52832_PS_v1.4.pdf>`__

----

Hardware Requirements
=====================

1. Must support typical LiPo batteries used in airsoft:
   1-2 Ah, 2S or 3S, 15~25C to 25~50C.

2. Must support measuring the battery voltage level.

----

Firmware Specifications
=======================

- `Apache Mynewt <https://en.wikipedia.org/wiki/Apache_Mynewt>`__ 1.5
  real-time operating system

- `Apache NimBLE <https://mynewt.apache.org/pages/ble/>`__ 1.0
  host/controller stack for Bluetooth 5

----

Firmware Requirements
=====================

TODO

----

Frequently Asked Questions
==========================

TODO
