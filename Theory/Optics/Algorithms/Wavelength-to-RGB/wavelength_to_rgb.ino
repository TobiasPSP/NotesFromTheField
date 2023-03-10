

void setup() {
  Serial.begin(115200);
  
  float gamma = 0.8;
  float max_intensity = 255;
  // put your main code here, to run repeatedly:
  for (int nm = 380; nm <= 780; nm++) 
  {
    //  derived from http://www.physics.sfasu.edu/astro/color/spectra.html
    
    float factor = 0;
    float R = 0;
    float G = 0;
    float B = 0;

    if (nm>=380.0 && nm< 440.0)
    {
      R = ((nm - 440.0)*-1.0) / 60.0;
      G = 0.0;
      B = 1.0;
    }
    else if (nm < 490.0)
    {
      R = 0.0;
      G = (nm - 440.0) / 50.0;
      B = 1.0;
    }
    else if (nm < 510.0)
    {
      R = 0.0;
      G = 1.0;
      B = ((nm - 510)*-1.0) / 20.0;
    }
    else if (nm < 580.0)
    {
      R = (nm - 510.0) / 70.0;
      G = 1.0;
      B = 0.0;
    }
    else if (nm < 645.0)
    {
      R = 1.0;
      G = ((nm - 645.0)*-1.0) / 65;
      B = 0.0;
    }
    else if (nm <= 780.0)
    {
      R = 1.0;
      G = 0.0;
      B = 0.0;
    }

    if (nm >= 380.0 && nm < 420.0)
    {
      factor = 0.3 + 0.7 * (nm - 380.0) / 40.0;
    }
    else if (nm <= 700.0)
    {
      factor = 1.0;
    }
    else if (nm <= 780.0)
    {
      factor = 0.3 + 0.7 * (780 - nm) / 80.0;
    }

    if (R > 0)
    {
      R = round(max_intensity * pow((R * factor),gamma));
    }
    
    if (G > 0)
    {
      G = round(max_intensity * pow((G * factor),gamma));
    }

    if (B > 0)
    {
      B = round(max_intensity * pow((B * factor),gamma));
    }

    Serial.print(nm);
    Serial.print(",");
    Serial.print((int)R);
    Serial.print(",");
    Serial.print((int)G);
    Serial.print(",");
    Serial.println((int)B);    
  }
}

void loop() {
  
}