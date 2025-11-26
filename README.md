# Lab 10 Power
Status Badge: ![Lab10 Status](https://github.com/uofu-adv-emb-25/Lab10_groupE_Hiram_Kasey/actions/workflows/main.yml/badge.svg)

By Hiram Perez and Kasey Kemp


## Data Collection:
**Program Power Table:**
| Program               | Current Draw | Power Consumption |
| --------------------- | ------------ | ----------------- |
| Blink LED w/ sleep_ms | mA | W |
| Blink LED w/ sleep_ms | mA | W |
| Blink LED w/ sleep_ms | mA | W |

**Demo Power Table:**
| Type | Min | Max | Mean | StdDev | Wave Count |
| ---- | --- | --- | ---- | ------ | ---------- |
| Period | 199.9996 ms | 200.0027 ms | 200.0027 ms | 1.302 us | 268 |
| Frequency | 4.99996 Hz | 5.00003 Hz | 4.99996 Hz | 35.1 uHz | 85 |
| Duty-Cycle | 50.00 % | 50.00 % | 50.00 % | 0.00 % | 74 |

**rts.c:**
| Starting Time Offset | After 5 mins | Extrapolated Drift |
| -------------------- | ------------ | ------------------ |
| 472.16 ms | 475.2 ms | -36.48 ms/hour |

| Type | Min | Max | Mean | StdDev | Wave Count |
| ---- | --- | --- | ---- | ------ | ---------- |
| Period | 1.999998 s | 1.999998s s | 1.999998 s | 0 s | 80 |
| Frequency | 500.002 mHz | 500.002 mHz | 500.001 mHz | 0 Hz | 80 |
| Duty-Cycle | 50.00 % | 50.00 % | 50.00 % | 0.00 % | 80 |

**task_delay.c**
| Starting Time Offset | After 5 mins | Extrapolated Drift |
| -------------------- | ------------ | ------------------ |
| 52.2698 ms | 55.1908 ms | 35.052 ms/hour |

| Type | Min | Max | Mean | StdDev | Wave Count |
| ---- | --- | --- | ---- | ------ | ---------- |
| Period | 200.0034 ms | 200.0034 ms | 200.0034 ms | 46 ns | 834 |
| Frequency | 4.99993 Hz | 4.99993 Hz | 4.99996 Hz | 1.14 uHz | 834 |
| Duty-Cycle | 50.00 % | 50.00 % | 50.00 % | 0.00 % | 834 |

**timer.c**
| Starting Time Offset | After 5 mins | Extrapolated Drift |
| -------------------- | ------------ | ------------------ |
| 41.3362 ms | 44.239 ms | -34.8336 ms/hour |

| Type | Min | Max | Mean | StdDev | Wave Count |
| ---- | --- | --- | ---- | ------ | ---------- |
| Period | 199.998 ms | 199.998 ms | 199.998 ms | 0s ns | 265 |
| Frequency | 4.99999 Hz | 4.99999 Hz | 4.99999 Hz | 410 uHz | 265 |
| Duty-Cycle | 50.00 % | 50.00 % | 50.00 % | 0.00 % | 265 |