# 3. How Line Following Works

**Time in session: 10 minutes** (talk + demo)

## Step 1: Seeing the line

Underneath the 3pi+ are **5 reflectance sensors**. Each one shines infrared light at the floor and measures how much comes back.

- **White surface** reflects a lot of light.
- **Black line** reflects very little.
- After calibration, the library reports each sensor as a value from **0 to 1000**, where higher means darker (more "line-like").

```
   Front of robot
  [S1] [S2] [S3] [S4] [S5]      <- 5 sensors, left to right
   |    |    |    |    |
 ======= floor with a black line =======
```

## Step 2: Calibration (why the robot spins at the start)

Different rooms, tables and tapes reflect different amounts of light. So at the start, the example makes the robot **sweep over the line** while it records the darkest and lightest readings each sensor sees. After that, "black" always means ~1000 and "white" ~0, whatever the room.

> **Try this:** What happens if you calibrate on a table and then drive on a different surface? (Great question to test on the day.)

## Step 3: Turning five readings into one position

The library can combine the five sensors into a single number: **where is the line?**

```
 position:   0     1000    2000    3000    4000
             |       |       |       |       |
 line under: S1     S2      S3      S4      S5
                         (centre)
```

- Position **2000** means the line is exactly in the middle.
- Less than 2000 means the line is to the **left**. More than 2000 means it is to the **right**.

## Step 4: Error and steering

The robot wants the line at 2000, so:

```
   error = position - 2000
```

- error = 0 means perfect, so go straight.
- error negative means line drifted left, so turn left.
- error positive means line drifted right, so turn right.

## Step 5: Proportional and derivative control

The simplest rule is **"steer in proportion to the error"**, the P of PID. It works, but the robot can wobble from side to side because it overshoots.

Adding a term based on **how fast the error is changing** (the D term) acts like a shock absorber: it reduces the steering when the robot is already swinging back toward the line.

Roughly, the example does:

```
 speed difference = (some number x error) + (another number x change in error)
 left motor  = max speed + speed difference
 right motor = max speed - speed difference      (the signs may be swapped in the code)
```

Those two "some numbers" are the **gains**, and finding good gains is called **tuning**. That is the heart of the challenges.

## Step 6: The big trade-off

| Increase... | Gain | Risk |
|---|---|---|
| Max speed | Faster laps | Falls off the line on curves |
| Steering strength (P) | Reacts quicker | Wobbles, overshoots |
| Damping (D) | Smoother | Can feel sluggish or noisy if too big |

There is no single "right" answer: engineers pick the best compromise for the track. That is the job.

**Next:** [4. Challenges](04-challenges.md)
