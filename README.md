# TDS-Meter
This project is used to measure the Total Dissolved Solid Contents in a solvent and present the output into a serial monitor via Arduino UNO.

# Conductivity :

Conductivity is a measure of the concentration of ions in solution.
Increasing the number of ions in solution will increase the amount of charge in the solution and will increase the conductivity.
The units microSiemens/cm (uS/cm) and milliSiemens/cm (mS/cm) are most commonly used to describe the conductivity of aqueous solutions.

# Measurement Method :

A  pair of metal plates placed at opposites sides in an electrolyte solution, and a Voltage Source is connected. 
The positive ions move toward the plate connected to the negative terminal of the battery, and the negative ions move toward the plate connected to the positive terminal of the battery, and thus electric current flows through the solution. When a voltage is applied, the ions move straight toward the respective oppositely charged metal plates, 
Since conductivity is inversely of resistivity, the conductivity can be known if the resistance is measured as per the  Ohm’s law.

Conductivity σ = 1 / Resistance(R) * Length(L) / Area(S)

We get ,

Conductivity σ= rho (ρ)* Length(L) / Area(S)

ppm_conversion=0.5
ppm=(EC25)*(ppm_conversion*1000);

L    = length of electrode
S   = area of electrode
ρ   = resistivity 
R   = resistance
K‘  = cell constant
EC = electrical conductivity



## Authors
- [@Aswin](https://github.com/aswin-dot-R)
- [@Charan](https://github.com/Charan0502)
- [@Kishore](https://github.com/kishoreparanthaman)
