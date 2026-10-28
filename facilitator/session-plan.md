# Session Plan (80 minutes)

**Assumptions:** 6-12 pairs, one 3pi+ 32U4 and one laptop per pair, two facilitators (one lead, one floor-walker), tracks already laid out.

| Time | Min | Segment | Format | Material |
|---|---|---|---|---|
| 0:00 | 10 | **Meet the robot** | Demo + discussion. Show a robot following a line first (the "wow"). Then sense / think / act. | `docs/01` |
| 0:10 | 15 | **Arduino IDE setup** | Follow-along, pairs. Skip to Step 4 if pre-installed. | `docs/02` |
| 0:25 | 10 | **How line following works** | Mini-talk with live demo: hold a robot over the line and show sensor values, show the position idea. | `docs/03` |
| 0:35 | 8 | **Challenge 0: baseline** | Upload unchanged example, calibrate, time laps. | `docs/04` |
| 0:43 | 8 | **Challenge 1: speed** | Change max speed, find break point. | `docs/04` |
| 0:51 | 10 | **Challenge 2: smooth operator** | Tune steering gains. | `docs/04` |
| 1:01 | 5 | **Challenge 3: make it talk** | Beep / display team name. | `docs/04` |
| 1:06 | 10 | **Showcase race** + one-line reflections | Whole group on Track B. | `docs/04` |
| 1:16 | 4 | **Wrap-up** | Where this goes next, feedback form, kit tidy-up. | below |

Challenge 4 (S-bend) is a stretch task for fast teams during the hands-on slots; Track B is otherwise used for the final race.

## If you are running late

- Cut Challenge 3 to a pure "bonus for fast teams".
- Shorten the talk (`docs/03`) to just position/error.
- Worst case: pre-install everything and start the clock at Step 4 of the setup.

## If you are running early or have strong students

- Challenge 4 (S-bend).
- Ask them to find a speed + gain combination that is *both* fast and smooth, and explain it.
- Ask them to look at the other Pololu3piPlus32U4 examples (bump sensors, encoders) and propose a robot feature.

## Wrap-up (4 min)

- "What would you build with this robot next?" (one answer from a few teams)
- Where to go next: keep the setup, keep exploring `File > Examples > Pololu3piPlus32U4`, try modifying other examples.
- Show how this connects to real systems: factory AGVs, warehouse robots, line-keeping assistance in cars.
- Feedback: 3 quick questions (what did you enjoy, what was confusing, would you like to do more).

## Facilitator notes to fill in after your dry run

- Example sketch name in your library version: ______________________
- Variable that sets max speed: ______________________
- Line that computes the steering: ______________________
- Display type (OLED / LCD): ______________________
- Speeds that worked on your track (Standard edition): safe ______ fast ______ break point ______
