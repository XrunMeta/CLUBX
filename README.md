# Clubx Readme

More Information: https://www.xrun.run/clubx_homepage/
## <b>Download our Pre Alpha release here:</b><br>
## <b>https://drive.google.com/drive/folders/1piRk6Ork2lT7MaGiqFz59WHm9ox7EGii?usp=sharing</b>



###############################################################
### Clubx Release Notes Pre Alpha Version 0.02 (Alpha.002)
### Release 18 Aug 2023
###############################################################

### Release Notes:
- Change voice chat icon to mic (instead of speaker icon) - 18aug
- Removed player list in login menu - 18aug


### BUG FIXED
- Player & camera collision fixed (fixed 18aug)
- In Lobby, When player height is very tall or very short, camera does not follow to head (fixed 18aug)
- Elevator Only work 1, the rest is not working (fixed 18aug)

### BUG LIST:
- Small Elevator buggy


### TODO LIST FOR NEXT RELEASE:
- Setup Text Chat to New UI
- Sit down functionality

## CURRENT PROGRESS

### User Account
- Register
- Login (email & Password)

### In Lobby:
Character Customization:
- Face, Eyes, Nose, Ears, Mouth, Skin Color, Height, Body fat, Clothes

### Select Room / Session
- Local Development Multiplayer Server
- Online Multiplayer (AWS Multiplayer Dedicated Server)

### Gameplay
- Walk, Run, Dance
- Elevator
- Voice Chat Auto connect, Press Enter to Mute / Unmute
- Press Slash (/) to open or close Menu (Temporary development)
  - Graphic Settings
  - Text Chat in old UI

- Music is scheduled according to UTC time (Greenwich Mean Time GMT+0)
Server triggers the music to all connected players when the song schedule is time.
Song is replayed the same time every hour

Song Schedule:
| Song | Time (Min:Sec |
| --- | --- |
| Song 1 - Oliver               | 00.00 - 02.25
| Song 2 - Lies                 | 02.27 - 05.37
| Song 3 - Ben Fox              | 05.39 - 07.32 </br>
| Song 4 - I've been Thinking   | 07.34 - 10.19 </br>
| Song 5 - AlexMake Music       | 10.21 - 12.36 </br>
| Song 6 - Evgeny               | 12.38 - 15.40 </br>
| Song 7 - Naems                | 15.42 - 19.22 </br>
| --- | --- |
| Song 8 - Oliver               | 22.00 - 24.25 </br>
| Song 9 - Lies                 | 24.27 - 27.37 </br>
| Song 10 - Ben Fox             | 27.39 - 29.32 </br>
| Song 11 - I've been Thinking  | 29.34 - 32.19 </br>
| Song 12 - AlexMake Music      | 32.21 - 34.36 </br>
| Song 13 - Evgeny              | 34.38 - 37.40 </br>
| Song 14 - Naems               | 37.42 - 41.22 </br>
| --- | --- |
| Song 15 - Oliver              | 44.00 - 46.25 </br>
| Song 16 - Lies                | 46.27 - 49.37 </br>
| Song 17 - Ben Fox             | 49.39 - 51.32 </br>
| Song 18 - I've been Thinking  | 51.34 - 54.19 </br>
| Song 19 - AlexMake Music      | 54.21 - 56.36 </br>

Rest until 59.59, and then go back to minutes 00.00 song 1 again

<br><br><br>
# Developer Daily Updates

- Tri - 21 Aug 2023	- Implemented User login history in Server GameMode and send to API - 21 AUg 2023
- Tri - 21 Aug 2023	- Playtesting and minor bug fixing - 21 AUg 2023
<br><br>

- Rian - 21 Aug 2023 - Created a new API to store login history from a user, and also an API to retrieve data with a certain member id along with the history data
- Rian - 21 Aug 2023 - Add button back, go to login
- Rian - 21 Aug 2023 - Change resend code duration, from 30s to 60s
<br><br>

- Tri - 18 Aug 2023	- Release New Build: Clubx Release Notes Pre Alpha Version 0.02 (Alpha.002) - 18 Aug 2023
	  <br>Release Notes:
	  <br> - Change voice chat icon to mic (instead of speaker icon) - 18aug
	  <br> - Removed player list in login menu - 18aug
	  <br> - Player & camera collision fixed (bug fixed 18aug)
	  <br> - In Lobby, When player height is very tall or very short, camera does not follow to head (bug fixed 18aug)
- Tri - 16 Aug 2023	- Introduced new bug in camera collision - 16 Aug 2023
- Tri - 16 Aug 2023	- Uploade the client exe to google drive (anyone can download) - 16 Aug 2023
- Tri - 16 Aug 2023	- Upload server to AWS instance and run the server (ready to connect from anywhere) - 16 Aug 2023
- Tri - 16 Aug 2023	- Package windows exe for Client & Server (Clubx PreAlpha version 0.01 release 16 Aug 2023) - 16 Aug 2023
- Tri - 16 Aug 2023	- Bug Fixing as per notion bug lists - 16 Aug 2023
- Tri - 15 Aug 2023	- Setup graphic Settings for in-game - 15 Aug 2023
- Tri - 15 Aug 2023	- Placing animated character in level for preparation for recording - 15 Aug 2023
- Tri - 14 Aug 2023	- Inserting temporary dancing and sitting test NPC (non interactible) - 14 Aug 2023
- Tri - 14 Aug 2023	- Preparing logic for NPC, NPC Spawner. - 14 Aug 2023
<br><br>

- Rian - 11 Aug 2023 - Finished add region in all country (90)
- Rian - 11 Aug 2023 - Migrate Database
<br><br>

- Rian - 10 Aug 2023 - adds regions for some countries
- Rian - 10 Aug 2023 - the ID when we save it returns to default. It doesn't match from database
- Rian - 10 Aug 2023 - namely the code confirmation popup in the OTP still appears when logging in, when an incorrect login is still logged in
<br><br>

- Rian - 09 Aug 2023 - Solve bug player name
- Rian - 09 Aug 2023 - Change password in profile
<br><br>

- Rian - 08 Aug 2023 - Create save flag in profile and load.
- Rian - 08 Aug 2023 - Create sound notification, if show notif error/warning
- Tri - 08 Aug 2023	- Doing synchronized music playback for all connected players in server according to UTC time, fixing bugs in hair not showing properly - 08 Aug 2023
- Tri - 08 Aug 2023	 - Lobby is functional but still requires visual tweaks
- Tri - 08 Aug 2023	 - Text chat is functional but still using old UI
- Tri - 08 Aug 2023	 - Voicechat tested and works with multiplayer
- Tri - 08 Aug 2023	- Started implementing UI for gameplay and im`plement autoconnect to voicechat, mute functionality (press Enter to mute / unmute)
