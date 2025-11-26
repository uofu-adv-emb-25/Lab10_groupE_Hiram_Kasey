# Lab 10 Power
Status Badge: ![Lab10 Status](https://github.com/uofu-adv-emb-25/Lab10_groupE_Hiram_Kasey/actions/workflows/main.yml/badge.svg)

By Hiram Perez and Kasey Kemp


## Data Collection:
**Power Table:**
| Program                   | Average Current Draw | Average Power Consumption |
| ------------------------- | -------------------- | ------------------------- |
| Blink LED w/ sleep_ms     | 29.56 mA             | 97.548 mW                 |
| Blink LED w/ task_delay   | 36.4 mA              | 120.12 mW                 |
| cpu_intensive             | 37.05 mA             | 122.265 mW                |
| gpio_interrupt 1k         | 32.7 mA              | 107.91 mW                 |
| gpio_interrupt 100k       | 35.0 mA              | 115.5 mW                  |
| gpio_interrupt  500k      | 38.0 mA              | 125.4 mW                  |
| gpio_interrupt 1M         | 37.1 mA              | 122.4 mW                  |
| sleep_demo  pre 10s       | 29.7 mA              | 98.0 mW                   |
| sleep_demo  post 10s      | 1.73 mA              | 5.71 mW                   |
| dormant_demo  pre gpio10  | 32.0 mA              | 105.6 mW                  |
| dormant_demo  post gpio10 | 0.971 mA             | 3.20 mW                   |