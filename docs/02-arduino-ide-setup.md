# 2. Arduino IDE Setup (from scratch)

You will need three things. After that you can use *any* Pololu 3pi+ example for the rest of your robotics journey.

```
 Arduino IDE  +  Board package (tells IDE about the chip)  +  Library (tells your code about the robot)
```

> Official reference: [Pololu 3pi+ 32U4 user's guide](https://www.pololu.com/docs/0J83). If anything here differs from the official guide, trust the official guide and tell us.

---

## Step 1: Install the Arduino IDE (already installed)

1. Go to <https://www.arduino.cc/en/software>.
2. Download **Arduino IDE 2.x** for your operating system and install it.
3. Open it. You should see a blank sketch with `setup()` and `loop()`.

## Step 2: Add the Pololu board package

The 3pi+ 32U4 is programmed as a **Pololu A-Star 32U4** board.

1. Open **File > Preferences**.
2. Find **Additional boards manager URLs** and paste:

   ```
   https://files.pololu.com/arduino/package_pololu_index.json
   ```

3. Click **OK**.
4. Open the **Boards Manager** (left sidebar, or **Tools > Board > Boards Manager...**).
5. Search for **Pololu A-Star Boards** and click **Install**.

## Step 3: Install the Pololu3piPlus32U4 library

1. Open the **Library Manager** (left sidebar, or **Sketch > Include Library > Manage Libraries...**).
2. Search for **3pi+**.
3. Find **Pololu3piPlus32U4** and click **Install**. If asked to install dependencies, choose **Install all**.

## Step 4: Select the board and port

1. Plug the robot into the laptop with a USB cable and **switch the robot on**.
2. **Tools > Board > Pololu A-Star Boards > Pololu A-Star 32U4**.
3. **Tools > Port** and choose the port that appeared when you plugged the robot in.
   - Windows: `COMx`

   *Not sure which port? Unplug the robot, look at the list, plug it back in, and see which one is new.*

## Step 5: Find the examples

Go to **File > Examples** and scroll down to the **Pololu3piPlus32U4** section. If it is missing, the library did not install correctly. Go back to Step 3.

You will use the line-following example in this section (most likely **LineFollowerSimple**).

If the upload fails, see [troubleshooting](../facilitator/troubleshooting.md).

---

## Setup checklist (tick when done)

- [ ] IDE installed and opens
- [ ] Pololu board URL added in Preferences
- [ ] Pololu A-Star Boards package installed
- [ ] Pololu3piPlus32U4 library installed
- [ ] Board set to **Pololu A-Star 32U4**
- [ ] Port selected
- [ ] Try out File->Examples->Pololu3piPlus32U4->LineFollowerSimple

## Setup for later 

- Everything above only needs internet **once** (for the downloads).
- You can reopen any example from **File > Examples > Pololu3piPlus32U4** and save a copy with **File > Save As...** so your changes never overwrite the original.
- Keep your own copy of the example you modify so you can always go back to a working version.

**Next:** [3. How Line Following Works](03-how-line-following-works.md)
