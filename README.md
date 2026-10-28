# 3pi+ Line Following: An 80-Minute Outreach Activity

A hands-on session where students meet a Pololu 3pi+ robot, set up the Arduino IDE from scratch, run the **existing line-following example** that ships with the Pololu library, and then tune and tweak it to make their robot faster, smoother and smarter.

**No prior coding or robotics experience needed.** Students never write a program from a blank page. They run, break, measure and improve a working one.

| | |
|---|---|
| **Duration** | 80 minutes |
| **Audience** | Ages 14+ (school, college, open day, or taster session) |
| **Group size** | Pairs, one robot and one laptop per pair (works for 6-12 pairs with 2 facilitators) |
| **Robot** | Pololu 3pi+ **32U4** (Arduino-compatible, programmed from the Arduino IDE) |
| **Software** | Arduino IDE 2.x, `Pololu A-Star Boards` package, `Pololu3piPlus32U4` library |
| **Coding level** | Changing numbers and adding 2-3 lines to an existing sketch |

> **Which 3pi+ do you have?** This repo targets the **3pi+ 32U4**. The newer **3pi+ 2040** is a different board (RP2040) with a different library and board package. See [`docs/05-3pi-2040-note.md`](docs/05-3pi-2040-note.md).

## What students will learn

1. What a robot is made of: sensors, a brain, and actuators.
2. How an Arduino-compatible board is programmed from a laptop (IDE, board, port, upload).
3. How reflectance sensors "see" a black line, and why **calibration** matters.
4. The idea of **feedback control**: measure the error, correct it, repeat.
5. How tuning parameters (speed, gain) trades off speed against stability.

## Repository layout

```
.
├── README.md                     <- you are here
├── docs/                         <- student-facing material (read in order)
│   ├── 01-meet-the-robot.md
│   ├── 02-arduino-ide-setup.md
│   ├── 03-how-line-following-works.md
│   ├── 04-challenges.md
│   └── 05-3pi-2040-note.md
├── worksheets/
│   └── student-worksheet.md      <- print one per pair
├── code/
│   └── 00_HelloRobot/            <- tiny "is everything working?" sketch
├── facilitator/                  <- for the person running the session
│   ├── session-plan.md           <- minute-by-minute timings
│   ├── preparation-checklist.md
│   ├── track-design.md
│   └── troubleshooting.md
└── LICENSE
```

## Quick start for facilitators

1. Read [`facilitator/session-plan.md`](facilitator/session-plan.md) (5 min).
2. Work through [`facilitator/preparation-checklist.md`](facilitator/preparation-checklist.md). **Pre-install the IDE, board package and library on every laptop if you can.** Venue Wi-Fi is the most common way these sessions lose 15 minutes.
3. Build the tracks using [`facilitator/track-design.md`](facilitator/track-design.md).
4. **Run the existing example yourself on your own track before the session** and note the exact variable names in your library version (see the note below).
5. Print [`worksheets/student-worksheet.md`](worksheets/student-worksheet.md).

## The "existing example"

The activity builds on the line-following sketch that comes with the official `Pololu3piPlus32U4` library, most likely **`LineFollowerSimple`**. After installing the library it appears under:

`File > Examples > Pololu3piPlus32U4 > ...`

This repo deliberately **does not copy Pololu's example code**. Students open their own installed copy, so they always get the version that matches their library. Example names and variable names can differ slightly between library versions, so the challenge sheets describe *what to look for* rather than quoting exact lines. Check your version once before the session and jot any differences on the facilitator plan.

## Credits and licence

Activity materials are released under the MIT licence (see `LICENSE`). The Pololu 3pi+ robot, library and examples belong to [Pololu](https://www.pololu.com/) and are covered by their own licences. Official documentation: the [3pi+ 32U4 user's guide](https://www.pololu.com/docs/0J83).
