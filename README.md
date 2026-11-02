# 3pi+ Line Following: Outreach Activity

A hands-on session where students meet a Pololu 3pi+ robot, set up the Arduino IDE from scratch, run the **existing line-following example** that ships with the Pololu library, and then tune and tweak it to make their robot faster, smoother and smarter.

**No prior coding or robotics experience needed.** Students never write a program from a blank page. They run, break, measure and improve a working one.

| | |
|---|---|
| **Duration** | 80 minutes |
| **Group size** | one robot and one computer per person |
| **Robot** | Pololu 3pi+ **32U4** (Arduino-compatible, programmed from the Arduino IDE) |
| **Software** | Arduino IDE 2.x, `Pololu A-Star Boards` package, `Pololu3piPlus32U4` library |
| **Coding level** | Changing numbers and adding 2-3 lines to an existing sketch |


## What students will learn

1. What a robot is made of: sensors, a brain, and actuators.
2. How an Arduino-compatible board is programmed from a laptop (IDE, board, port, upload).
3. How reflectance sensors "see" a black line, and why **calibration** matters.
4. The idea of **feedback control**: measure the error, correct it, repeat.
5. How tuning parameters (speed, gain) trades off speed against stability.

## Repository layout

```
.
├── README.md                     
├── docs/                         
│   ├── 01-meet-the-robot.md
│   ├── 02-arduino-ide-setup.md
│   ├── 03-how-line-following-works.md
│   ├── 04-challenges.md
├── worksheets/
│   └── student-worksheet.md                  
└── LICENSE
```

## The "existing example"

The activity builds on the line-following sketch that comes with the official `Pololu3piPlus32U4` library, most likely **`LineFollowerSimple`**. After installing the library it appears under:

`File > Examples > Pololu3piPlus32U4 > ...`


## Credits and licence

Activity materials are released under the MIT licence (see `LICENSE`). The Pololu 3pi+ robot, library and examples belong to [Pololu](https://www.pololu.com/) and are covered by their own licences. Official documentation: the [3pi+ 32U4 user's guide](https://www.pololu.com/docs/0J83).
