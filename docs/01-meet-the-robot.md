# 1. Meet the Robot

Every robot, from a vacuum cleaner to a Mars rover, does the same three things:

```
   SENSE  ------->  THINK  ------->  ACT
 (sensors)         (brain)        (motors)
```

The Pololu 3pi+ is a small, fast, line-following robot that packs all three into a palm-sized body.

## Anatomy of the 3pi+ 32U4

| Part | Where | What it does | Role |
|---|---|---|---|
| **Line sensors (5)** | Underside, front edge | Shine infrared light down and measure how much bounces back. Dark surfaces reflect less. | SENSE |
| **Bump sensors (2)** | Front, left and right | Detect when the robot touches an obstacle | SENSE |
| **Wheel encoders** | Attached to the motors | Count wheel rotation, so the robot knows how far it has travelled | SENSE |
| **Inertial sensor (IMU)** | On the board | Measures turning and acceleration | SENSE |
| **Microcontroller** | The main board | An ATmega32U4 chip, the same family used in Arduino Leonardo and Micro boards. Runs your sketch. | THINK |
| **Two motors** | Either side | Each wheel is driven separately; steering = different speeds | ACT |
| **Buzzer** | On the board | Plays beeps and tunes | ACT |
| **Display** | Top of the board | Shows text and numbers | ACT |
| **Buttons A, B, C** | Top of the board | Let you give the robot commands | INPUT |
| **Batteries** | Underneath | Four AAA cells power everything | POWER |

## Which operating modes do I have?

The 3pi+ comes in built-in with different operating modes:

| Edition | Motors Speed | Character |
|---|---|---|
| Turtle | Slow | Strong, very controllable |
| **Standard** | Medium | Balanced |
| Hyper | Fast | Twitchy |

The Pololu example sketch has a section where you pick your operating mode so the speeds are set sensibly. 

## Differential steering in one picture

```
 Left wheel faster than right  ->  robot turns RIGHT
 Right wheel faster than left  ->  robot turns LEFT
 Both equal                    ->  robot goes straight
```

There is no steering wheel. A line follower steers entirely by making one motor a little faster and the other a little slower.

## Turning it on and staying safe

- Use the **power button** to switch on, and make sure the batteries are fresh. Low batteries cause strange behaviour.
- Keep robots away from table edges. Always have a hand ready to catch one.
- Do not touch the sensor underside with fingers (grease affects readings).

**Next:** [2. Arduino IDE Setup](02-arduino-ide-setup.md)
