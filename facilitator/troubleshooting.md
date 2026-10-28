# Troubleshooting

## Arduino IDE and uploading

| Symptom | Likely cause | Fix |
|---|---|---|
| No port appears under Tools > Port | Charge-only USB cable, robot off, or driver issue | Swap to a known **data** cable, switch the robot on, try another USB port. Windows: reboot after first connection. |
| `Pololu3piPlus32U4.h: No such file` | Library not installed | Library Manager > search "3pi+" > install **Pololu3piPlus32U4**. Restart the IDE. |
| "Board not found" or odd compile errors | Wrong board selected | Tools > Board > Pololu A-Star Boards > **Pololu A-Star 32U4**. |
| Pololu A-Star Boards not in the Boards Manager | URL missing from Preferences | Re-add `https://files.pololu.com/arduino/package_pololu_index.json`, restart IDE. |
| Upload hangs or fails | Wrong port or the robot did not enter its bootloader | Re-select port. Check the robot is on. Try pressing the robot's reset button (some boards need a quick double-tap) and upload again. Check the official 3pi+ user's guide for the current procedure. |
| Examples missing | Library not installed correctly | Reinstall the library and restart the IDE. |
| Linux "permission denied" | User not in `dialout` | `sudo usermod -a -G dialout $USER`, then log out and in. |

## Robot behaviour

| Symptom | Likely cause | Fix |
|---|---|---|
| Robot does nothing after upload | It is waiting for a button press | Read the display; the example asks you to press a button to calibrate, then to start. |
| Robot spins or drives off immediately | Calibration done off the line, or on the wrong surface | Re-run (reset) and place the robot so the sweep crosses the line. |
| Wanders randomly or stutters | Low batteries | Replace all four AAA cells. This is the number-one cause on the day. |
| Cannot follow the line at all | Sensors dirty, track too glossy, bright sunlight | Wipe sensors, matte tape/card, shade the track. |
| One wheel faster than the other on straights | Motor edition mismatch in sketch or battery sag | Check the edition setting in the sketch, then recheck batteries. |
| Wobbles side to side | Steering too strong or damping too weak | Reduce the steering number, increase the damping term. |
| Slow and drifts off curves | Steering too weak | Increase steering strength. |
| Display too slow or robot stutters when printing values | Updating the display every loop | Update the display only occasionally (for example once every few hundred loops). |

## When it just will not work

Hand the team a **pre-uploaded spare robot** and let them join the next challenge. Fix the broken one later. Keep 2 spare robots and 2 spare laptops in the kit if you can.
