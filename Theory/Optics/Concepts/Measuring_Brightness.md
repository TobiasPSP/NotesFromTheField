# Converting Energy to Brightness

Electronic devices measure plain light energy so sensor output does not necessarily correspond to subjective brightness.

In order to measure subjective brightness (*Lumen*), you need to take into consideration the specific light sensitivity of the human eye towards the light frequency you are measuring. 

Let's take at monochromatic light at first.

## Calculating Brightness of Light Color (Frequency)

To convert the (objective) energy reading from your photo sensor to a (subjective) *human* brightness, you need correction factors for the light frequency, the *Luminous Efficiency*.

### Luminous Efficiency for Different Wavelengths

The table below lists the empirical correction factors for a given light wavelength (which coincidentally resemble the light sensitivity of the human eye during daylight vision). 

This is a copy of the 1988 updated *CCIE Photopic Luminous Efficiency Function*:

| Wavelength  | +0 | +1 | +2 | +3 | +4 |
| ----------- | -- |-- |-- |-- |-- |
|380 nm|0.0002000|0.0002280|0.0002610|0.0002990|0.0003440|
|385 nm|0.0003960|0.0004550|0.0005250|0.0006040|0.0006960|
|390 nm|0.0008000|0.0009160|0.0010500|0.0012000|0.0013600|
|395 nm|0.0015500|0.0017500|0.0018800|0.0022300|0.0025000|
|400 nm|0.0028000|0.0031200|0.0034600|0.0038300|0.0042300|
|405 nm|0.0046600|0.0051200|0.0056200|0.0061700|0.0067600|
|410 nm|0.0074000|0.0081500|0.0089600|0.0098300|0.0108000|
|415 nm|0.0118000|0.0128000|0.0140000|0.0151000|0.0163000|
|420 nm|0.0175000|0.0186000|0.0196000|0.0207000|0.0217000|
|425 nm|0.0227000|0.0236000|0.0246000|0.0255000|0.0264000|
|430 nm|0.0273000|0.0283000|0.0294000|0.0304000|0.0315000|
|435 nm|0.0326000|0.0337000|0.0347000|0.0358000|0.0369000|
|440 nm|0.0379000|0.0388000|0.0398000|0.0406000|0.0415000|
|445 nm|0.0424000|0.0433000|0.0441000|0.0450000|0.0459000|
|450 nm|0.0468000|0.0477000|0.0487000|0.0498000|0.0509000|
|455 nm|0.0521000|0.0534000|0.0549000|0.0564000|0.0581000|
|460 nm|0.0600000|0.0626000|0.0653000|0.0680000|0.0709000|
|465 nm|0.0739000|0.0770000|0.0803000|0.0837000|0.0872000|
|470 nm|0.0910000|0.0949000|0.0990000|0.1040000|0.1080000|
|475 nm|0.1130000|0.1180000|0.1230000|0.1280000|0.1330000|
|480 nm|0.1390000|0.1450000|0.1500000|0.1560000|0.1630000|
|485 nm|0.1690000|0.1760000|0.1840000|0.1910000|0.1990000|
|490 nm|0.2080000|0.2170000|0.2270000|0.2370000|0.2470000|
|495 nm|0.2590000|0.2700000|0.2822900|0.2950500|0.3085700|
|500 nm|0.3230000|0.3384000|0.3546800|0.3716900|0.3892800|
|505 nm|0.4073000|0.4256200|0.4443000|0.4633900|0.4829300|
|510 nm|0.5030000|0.5235600|0.5445100|0.5656900|0.5869600|
|515 nm|0.6082000|0.6293400|0.6503000|0.6708700|0.6908400|
|520 nm|0.7100000|0.7281800|0.7454600|0.7619600|0.7778300|
|525 nm|0.7932000|0.8081100|0.8224900|0.8363000|0.8494900|
|530 nm|0.8620000|0.8738100|0.8849600|0.8954900|0.9054400|
|535 nm|0.9148500|0.9237300|0.9320900|0.9399200|0.9472200|
|540 nm|0.9540000|0.9602500|0.9660000|0.9712600|0.9760200|
|545 nm|0.9803000|0.9840900|0.9874800|0.9903100|0.9928100|
|550 nm|0.9949500|0.9967100|0.9980900|0.9991100|0.9997400|
|555 nm|1.0000000|0.9998500|0.9993000|0.9983200|0.9968900|
|560 nm|0.9950000|0.9926000|0.9897400|0.9864400|0.9827200|
|565 nm|0.9786000|0.9740800|0.9691700|0.9638500|0.9581300|
|570 nm|0.9520000|0.9454500|0.9384900|0.9311600|0.9234500|
|575 nm|0.9154000|0.9070000|0.8982700|0.8892000|0.8797800|
|580 nm|0.8700000|0.8598600|0.8493900|0.8386200|0.8275800|
|585 nm|0.8163000|0.8047900|0.7930800|0.7811900|0.7691500|
|590 nm|0.7570000|0.7447500|0.7324200|0.7200000|0.7074900|
|595 nm|0.6949000|0.6822100|0.6694700|0.6567400|0.6438400|
|600 nm|0.6310000|0.6181500|0.6053100|0.5924700|0.5796300|
|605 nm|0.5668000|0.5539600|0.5411300|0.5283500|0.5156300|
|610 nm|0.5030000|0.4904600|0.4780300|0.4656700|0.4534000|
|615 nm|0.4412000|0.4290800|0.4170300|0.4050300|0.3930300|
|620 nm|0.3810000|0.3689100|0.3568200|0.3447700|0.3328100|
|625 nm|0.3200000|0.3093300|0.2978500|0.2865900|0.2756200|
|630 nm|0.2650000|0.2547600|0.2448800|0.2353300|0.2260500|
|635 nm|0.2170000|0.2081600|0.1995400|0.1911500|0.1829700|
|640 nm|0.1750000|0.1672200|0.1596400|0.1522700|0.1451200|
|645 nm|0.1382000|0.1315000|0.1250200|0.1187700|0.1127600|
|650 nm|0.1070000|0.1014700|0.0962000|0.0911000|0.0863000|
|655 nm|0.0816000|0.0771000|0.0728000|0.0687000|0.0648000|
|660 nm|0.0610000|0.0574000|0.0540000|0.0507000|0.0475000|
|665 nm|0.0446000|0.0418000|0.0391000|0.0366000|0.0342000|
|670 nm|0.0320000|0.0300000|0.0281000|0.0263000|0.0247000|
|675 nm|0.0232000|0.0218000|0.0205000|0.0193000|0.0181000|
|680 nm|0.0170000|0.0159000|0.0148000|0.0138000|0.0128000|
|685 nm|0.0119000|0.0111000|0.0103000|0.0095300|0.0088500|
|690 nm|0.0082100|0.0076200|0.0070900|0.0065900|0.0061400|
|695 nm|0.0057200|0.0053400|0.0050000|0.0046800|0.0043800|
|700 nm|0.0041000|0.0038400|0.0035900|0.0033500|0.0031300|
|705 nm|0.0029300|0.0027400|0.0025600|0.0023900|0.0022400|
|710 nm|0.0020900|0.0019500|0.0018200|0.0017000|0.0015900|
|715 nm|0.0014800|0.0013800|0.0012900|0.0012000|0.0011200|
|720 nm|0.0010500|0.0009770|0.0009110|0.0008500|0.0007930|
|725 nm|0.0007400|0.0006900|0.0006430|0.0005990|0.0005580|
|730 nm|0.0005200|0.0004840|0.0004500|0.0004180|0.0003890|
|735 nm|0.0003610|0.0003350|0.0003110|0.0002890|0.0002680|
|740 nm|0.0002490|0.0002310|0.0002150|0.0001990|0.0001850|
|745 nm|0.0001720|0.0001510|0.0001490|0.0001380|0.0001290|
|750 nm|0.0001200|0.0001120|0.0001040|0.0000973|0.0000908|
|755 nm|0.0000848|0.0000791|0.0000739|0.0000689|0.0000643|
|760 nm|0.0000600|0.0000560|0.0000522|0.0000487|0.0000454|
|765 nm|0.0000424|0.0000396|0.0000369|0.0000345|0.0000321|
|770 nm|0.0000300|0.0000280|0.0000261|0.0000244|0.0000227|
|775 nm|0.0000212|0.0000198|0.0000185|0.0000172|0.0000161|
|780 nm|0.0000150|||||


### Correction Factor for Lumen Calculation

Since we really want to convert *W/m2* to *Lumen*, where do we get the *Lumen* though? Above table simply lists the sensitivities of the human eye for different light wavelengths. 

At 555 nm (the wavelength with the maximum sensitivity to the human eye), a radiant power of 1W corresponds to a luminous flux of 683 lm. Or put differently, a light with the wavelength of 555nm has a defined (constant) value of 683 lm/W. This constant is also known as *Km*.

So to convert a light energy of 1W/m2 of light of color red with 640nm, you would have to look up the specific *luminous efficiency* of that wavelength in the table above (returning a value of 0.175), then multiply it with *Km* (683 lm/W) to change the unit to *lm (Lumen): 119.525.

Here is an updated table that directly returns the correction factor for a given wavelength to convert *W/m2* to *lm/W*:

| Wavelength  | +0 | +1 | +2 | +3 | +4 |
| ----------- | -- |-- |-- |-- |-- |
|380 nm|0.14|0.16|0.18|0.2|0.23|
|385 nm|0.27|0.31|0.36|0.41|0.48|
|390 nm|0.55|0.63|0.72|0.82|0.93|
|395 nm|1.06|1.2|1.28|1.52|1.71|
|400 nm|1.91|2.13|2.36|2.62|2.89|
|405 nm|3.18|3.5|3.84|4.21|4.62|
|410 nm|5.05|5.57|6.12|6.71|7.38|
|415 nm|8.06|8.74|9.56|10.31|11.13|
|420 nm|11.95|12.7|13.39|14.14|14.82|
|425 nm|15.5|16.12|16.8|17.42|18.03|
|430 nm|18.65|19.33|20.08|20.76|21.51|
|435 nm|22.27|23.02|23.7|24.45|25.2|
|440 nm|25.89|26.5|27.18|27.73|28.34|
|445 nm|28.96|29.57|30.12|30.74|31.35|
|450 nm|31.96|32.58|33.26|34.01|34.76|
|455 nm|35.58|36.47|37.5|38.52|39.68|
|460 nm|40.98|42.76|44.6|46.44|48.42|
|465 nm|50.47|52.59|54.84|57.17|59.56|
|470 nm|62.15|64.82|67.62|71.03|73.76|
|475 nm|77.18|80.59|84.01|87.42|90.84|
|480 nm|94.94|99.04|102.45|106.55|111.33|
|485 nm|115.43|120.21|125.67|130.45|135.92|
|490 nm|142.06|148.21|155.04|161.87|168.7|
|495 nm|176.9|184.41|192.8|201.52|210.75|
|500 nm|220.61|231.13|242.25|253.86|265.88|
|505 nm|278.19|290.7|303.46|316.5|329.84|
|510 nm|343.55|357.59|371.9|386.37|400.89|
|515 nm|415.4|429.84|444.15|458.2|471.84|
|520 nm|484.93|497.35|509.15|520.42|531.26|
|525 nm|541.76|551.94|561.76|571.19|580.2|
|530 nm|588.75|596.81|604.43|611.62|618.42|
|535 nm|624.84|630.91|636.62|641.97|646.95|
|540 nm|651.58|655.85|659.78|663.37|666.62|
|545 nm|669.54|672.13|674.45|676.38|678.09|
|550 nm|679.55|680.75|681.7|682.39|682.82|
|555 nm|683|682.9|682.52|681.85|680.88|
|560 nm|679.58|677.95|675.99|673.74|671.2|
|565 nm|668.38|665.3|661.94|658.31|654.4|
|570 nm|650.22|645.74|640.99|635.98|630.72|
|575 nm|625.22|619.48|613.52|607.32|600.89|
|580 nm|594.21|587.28|580.13|572.78|565.24|
|585 nm|557.53|549.67|541.67|533.55|525.33|
|590 nm|517.03|508.66|500.24|491.76|483.22|
|595 nm|474.62|465.95|457.25|448.55|439.74|
|600 nm|430.97|422.2|413.43|404.66|395.89|
|605 nm|387.12|378.35|369.59|360.86|352.18|
|610 nm|343.55|334.98|326.49|318.05|309.67|
|615 nm|301.34|293.06|284.83|276.64|268.44|
|620 nm|260.22|251.97|243.71|235.48|227.31|
|625 nm|218.56|211.27|203.43|195.74|188.25|
|630 nm|181|174|167.25|160.73|154.39|
|635 nm|148.21|142.17|136.29|130.56|124.97|
|640 nm|119.52|114.21|109.03|104|99.12|
|645 nm|94.39|89.81|85.39|81.12|77.02|
|650 nm|73.08|69.3|65.7|62.22|58.94|
|655 nm|55.73|52.66|49.72|46.92|44.26|
|660 nm|41.66|39.2|36.88|34.63|32.44|
|665 nm|30.46|28.55|26.71|25|23.36|
|670 nm|21.86|20.49|19.19|17.96|16.87|
|675 nm|15.85|14.89|14|13.18|12.36|
|680 nm|11.61|10.86|10.11|9.43|8.74|
|685 nm|8.13|7.58|7.03|6.51|6.04|
|690 nm|5.61|5.2|4.84|4.5|4.19|
|695 nm|3.91|3.65|3.42|3.2|2.99|
|700 nm|2.8|2.62|2.45|2.29|2.14|
|705 nm|2|1.87|1.75|1.63|1.53|
|710 nm|1.43|1.33|1.24|1.16|1.09|
|715 nm|1.01|0.94|0.88|0.82|0.76|
|720 nm|0.72|0.67|0.62|0.58|0.54|
|725 nm|0.51|0.47|0.44|0.41|0.38|
|730 nm|0.36|0.33|0.31|0.29|0.27|
|735 nm|0.25|0.23|0.21|0.2|0.18|
|740 nm|0.17|0.16|0.15|0.14|0.13|
|745 nm|0.12|0.1|0.1|0.09|0.09|
|750 nm|0.08|0.08|0.07|0.07|0.06|
|755 nm|0.06|0.05|0.05|0.05|0.04|
|760 nm|0.04|0.04|0.04|0.03|0.03|
|765 nm|0.03|0.03|0.03|0.02|0.02|
|770 nm|0.02|0.02|0.02|0.02|0.02|
|775 nm|0.01|0.01|0.01|0.01|0.01|
|780 nm|0.01|0|0|0|0|


## Converting Sensor Readings to Lumens

Your electronic sensor measures light energy. We first need to convert this energy to the unit *W/m2*:

*  **Sensor Area**: since *W/m2* is energy per surface, you need the surface area of your sensor chip (the photoactive surface)
*  **Sensor Sensitivity**: you need to also know the sensitivity of your chip in *W/m2* (often other units are used such as *uW/cm2* which can be easily converted)


\- or -


* **Voltage-to-W/m2**: the chip data sheet contains tables that let you correlate the sensor output to a measured energy in *W/m2*, already taking into account the sensor specifics such as the sensor size

Next, in the table above, look up the correction factor for the light wavelength you are measuring. For example, if you are measuring the brightness of *blue* LED (450nm), the table returns a correction factor of 31.96lm/W.

Then, multiply your light energy reading from *W/m2* to *Lumen* by multiplying it with the factor you just found.

### Luminous Efficiency Function

In essence, you just used the *Luminous Efficiency Function*:

```
Xv = Xl * V(l) * Km
```

* *X1* is the light energy measured by your device, normalized to the unit *W/m2* (during the normalization outlined above, you accounted for sensor size and its specific sensitivity to light wavelengths).
* *V(l)* is the specific sensitivity of the human eye to the wavelength you are measuring (**Table 1**)
* *Km* is a fixed constant of 683lm/W (see above for details)

Since you got [**Table 2**](./Measuring_Brightness.md#correction-factor-for-lumen-calculation) above with the ready-to-use correction factors for light wavelengths, the formula is even easier:

```
Xv = Xl * correctionFactor
```

Simply take your normalized sensor reading and multiply it with the correction factor for the wavelength you measured.

## Monochromatic vs. Natural Light

Since the sensitivity of the human eye varies greatly between different light colors (wavelengths), measuring and calculating "brightness" for monochromatic light (as outlined above) is trivial whereas judging the brightess of natural light or mixed colors of different wavelengths is much harder.

When you look at [**Table 2**](./Measuring_Brightness.md#correction-factor-for-lumen-calculation), you can easily see that even slight variations of wavelength make dramatic increases to brightness: red light of 670ns wavelength has just 1/5 (20%) of the brightness of red light at wavelength 640nm.

Since it is impossible by all practical means to split up light into its wavelengths and calculate brightness individually, typically what is done instead is using a gaussian formula and approximate the correct value.

Emergency lights typically use distinctly colored light, so for our purposes we will not dive deeper into the subject and stick with the formulas and conversion factors for monochromatic light as discussed above.
