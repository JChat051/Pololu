# 4. Challenges

You are going to **modify the existing line-following example**. You do not need to write a program from scratch.
## Known issues in the example

1. **Turtle vs Hyper** Start with working on Turtle or Standard mode. Pololu drives backwards in the Hyper mode. You are welcome to fix these issues but these are not the target for today. In the example turtle drives the fastest. Start with the line following code and then when you understand the code behaviour move towards the LineFollowerPID example.

## Golden rules

1. **Save a copy first:** open the example, then **File > Save As...** and name it `MyTeamName_LineFollower`.
2. **Change one thing at a time**, then test. If you change three things and it breaks, you will not know which one did it.
3. **Write results on your worksheet** (lap time, did it fall off, what did you notice).
4. If it all goes wrong, reopen the original example from **File > Examples** and start again. Nothing is lost.

> The exact names and numbers in your version of the example may differ from the hints below. **Look for the idea**, not the exact text.

---

## Challenge 0: Baseline

1. Place the robot on **Track A** (the oval) with the line under the middle sensors.
2. Upload the **unchanged** example.
3. Press the button the display tells you to. The robot will sweep side to side to **calibrate**, then press the button again to start following.
4. Time **three laps** (or one lap, if the track is large) and record it as your **baseline**.

**Questions:** Did it stay on? Was it smooth or wobbly? What does the display show?

## Challenge 1: Speed 

Find the line in the sketch that sets the **maximum speed** (look near the top for something like `maxSpeed`).

| Attempt | Max speed | Stayed on? | Lap time |
|---|---|---|---|
| Baseline | (original) | | |
| +25% | | | |
| +50% | | | |
| Too fast? | | | |

**Goal:** find your **break point**, the speed where the robot first falls off. Then pick a speed just below it.

> Hint: motors are limited to a maximum value (the library accepts a maximum of about 400). Don't exceed what the example allows.

## Challenge 2: Smooth operator 

Find the line that calculates how much to **steer** (look for `error` and a number it is divided or multiplied by, and a second term using the **previous** error, often named `lastError`).

Change **one** number at a time:

| Experiment | What to try | What do you see? |
|---|---|---|
| Stronger steering | make the number multiplying `error` bigger (for example if it divides by 4, try dividing by 2) | |
| Gentler steering | make it weaker (divide by 8) | |
| More damping | make the number multiplying the **change** in error bigger | |
| No damping | set it to 0 | |

**Goal:** the smoothest, fastest run you can do at your chosen speed. Draw a quick sketch of the path your robot took (wobbly, or smooth?).

## Challenge 3: Make it talk

Give your robot personality using what you learned from the Hello sketch. Pick one:

- **Beep** at the start of the run (`buzzer.play("c32");`)
- Show your **team name** on the display at start-up
- Show the **position or error** value on the display while running (watch out: slow display updates can slow the robot, so update it only occasionally)

See [`snippets` below](#snippets) for hints. Look at the existing example to see how it already uses the display and buzzer, and copy the style.

## Challenge 4 (stretch): The S-bend 

Move to **Track B**, which has an S-bend and a sharper curve. Your Challenge 2 tuning may not work here. Retune and record what changed.

**Think:** Why might a robot that is great on an oval struggle on a tight curve?

## Challenge 5: Final showcase race

Rules:
- Each team gets **two timed attempts** on **Track B**.
- The robot must complete **one full lap** under its own control.
- Best lap time counts. If it leaves the line, the attempt ends (a bonus for the **smoothest** run, voted by the group).
- Each team says **one thing** they learned or one change that made the biggest difference.

---

## Snippets

Treat these as hints for *where* and *how*; paste inside the right function in your sketch and match the existing display/buzzer variable names.

```cpp
// A short beep
buzzer.play("c32");

// A happy start-up tune
buzzer.play("c32e32g32");

// Show text (the display object may be called "display" in your example)
display.clear();
display.print("TeamName");

// Show a number on the second line
display.gotoXY(0, 1);
display.print(position);
```

If it will not compile, check:
- the variable you used exists in your sketch (names differ between versions)
- every line ends with `;`
- brackets `( )` and braces `{ }` are paired

## Reflection questions (for the worksheet)

1. What was the single change that improved your lap time the most?
2. Why can't we just set the speed to maximum?
3. Where in real life do feedback loops like this appear? (Cruise control, thermostats, drones, self-driving cars...)

**Back to:** [README](../README.md)
