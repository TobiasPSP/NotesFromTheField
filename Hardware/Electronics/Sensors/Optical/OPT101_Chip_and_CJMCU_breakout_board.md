# Optical Sensor OPT101 on CJMCU Breakout Board

This article discusses the practical aspects of the **OPT101** *photodiode and transimpedance amplifier* chip and the **CJMCU** breakout board that is commonly available as a simple ways of wiring up the chip.

## The OPT101 Sensor

The optical sensor **OPT101** from *Texas Instruments* is a monolithic [Photodiode plus Transimpedance Amplifier](https://www.ti.com/lit/ds/symlink/opt101.pdf) designed to measure light emissions in the visible range with a peak in the infrared spectrum.

This chip is fairly expensive and widely used in industry and medical equiment primarily for these reasons:

* **Fast Real-Time Results**: Measurements are quick and take only a few microseconds. Typical cheap photoresistors as well as digital boards have a much higher latency and often provide a resolution of 16ms or worse. This is perfectly ok to measure ambient light but the **OPT101** excels at measuring quickly changing light emissions, i.e. human pulse or quality control in industrial assembly lines.
* **Analog Signal**: When trying to obtain real-time measurements, there is nothing faster than analog signals. While digital chips and interfaces such as I2C may be convenient, the A/D-processing adds extensive latency to measurements.
* **Wide Operating Voltage Range**: The **OPT101** operates in a wide voltage range from 2.6V to 36V. When it comes to DIY and microelectronics, **OPT101** is equally suited for 5V Arduinos and 3.3V ESP32.
* **Low Power Consumption**: When not delivering a signal, the current is just 120μA.
* **Full Human Light Spectrum**: the chip can detect the entire range of human visible light and has an even higher sensitivity in the Infrared spectrum (welcomed by medical applications).
* **Linear Output with Logarithmic Increase**: the chips sensor voltage corresponds in a linear fashion with the logarithmic increase in brightness (W/m2). That's good because it resembles how we humans recognize brightness. So when brightness increases 10fold, we "think" brightness has just doubled. The chip output thus correlates with the brightness humans "feel". Since signal output is linear from darkness to full brightness, it is trivial to calculate actual light intensity in various units, i.e. lux.
* **Adjustable Sensitivity**:  via external resistors and capacitors, the chip sensitivity to light can both be lowered and increased, based on use case. The default setup measures light intensity from 0.001W/m2 to 5W/m2.

## The CJMCU Breakout Board

There is a board available called **CJMCU** that typically comes as a set with the **OPT101** chip and some header pins and needs to be soldered by yourself. Warning: great care needs to be taken to solder the **OPT101** chip on the right side of the PCB (the side with a small white square; the soldering jumper needs to remain accessible on the other side and *not* be covered by the chip), and in the correct direction (a barely visible half circle on the chip surface needs to face away from the boards' connection pins). It is very simple in numerous ways to place the chip wrongly on the PCB and thus destroy it or make the setup non-functional.

Prices vary greatly. Individually purchased, the set runs around **5-10€**. When purchased in larger quantities, a total of **20€** for five sets is common (**4€** per piece). When ordering directly in China via *AliExpress*, a unit price of **2.30€** can be expected).


