# Clubx Readme

More Information: https://www.xrun.run/clubx_homepage/

###################################

###

### Clubx Build Release Notes

###

###################################

### Release v0.0.3-PreAlpha 25 Aug 2023

- 18 Aug 2023 - Change voice chat icon to mic (instead of speaker icon)
- 18 Aug 2023 - Removed player list in login menu
- 21 Aug 2023 - Implemented User login history in Server GameMode and send to API
- 22 Aug 2023 - Hide chat interface in lobby (Lobby is not connected to server so chat does not work)
- 22 Aug 2023 - Fix Voice chat Mute Button (works)
- 23 Aug 2023 - Chat UI (done)
- 25 Aug 2023 - Female Character setup (done)
- 25 Aug 2023 - Toggle Music volume lower / mute button when want to voice chat (done)
- 25 Aug 2023 - Song before the fast is not correctly timed (Ben Song duration FIXED)

BUG FIXED

- Player & camera collision fixed (fixed 18aug)
- In Lobby, When player height is very tall or very short, camera does not follow to head (fixed 18aug)
- Elevator Only work 1, the rest is not working (fixed 18aug)
-

BUG LIST:

- Small Elevator buggy
- menu back dari wallet
- camera tembus pantat
- Elevator Down to GF not functioning
- Glass Material in GF need to check (possible flipped material)
- Outside road collision still raw (jalan di luar ngambang kaya tuyul)
- ada collision di kepala character

TODO LIST FOR NEXT RELEASE:

- Sit down
- Dialog System Planned for v0.30
- Shop System (for clothes)
- Point & Digital Currency System
-

## CURRENT PROGRESS

### Intro Level (Local)

- Clubx Splash Screen

- Register Done -> Save data from Unreal to database via API
- Verification to whatsapp (Trial until early september 2023)
- Login Done -> Auth user by reading data from DB to unreal
- After login email & Password, user will be redirected to Lobby Level

### Lobby Level (Local)

- Loading data from DB
- Customize your character
- Facial profile (face, eyes, ears, nose, mouth)
- Skin Color
- Body height & fat
- Clothes
- Option Menu Settings:
- Audio
- Display
- Edit Profile
- Change Password

Select Room / Session

- Local Development Multiplayer Server
- Online Multiplayer (AWS Multiplayer Dedicated Server)

### Game Level (Multiplayer Server)

Features:

- Walk, Run, Jump, Dance
- Enter Lobby Elevator to the club 2nd floor
- Functional Text Chat by pressing Slash (/)
- Functional Voice chat is auto-connect
- Press Enter to toggle Mute your microphone
- Press Backslash to toggle reduce music volume (useful when voice chat)
- Music is scheduled according to UTC time (Greenwich Mean Time GMT+0)
  Server triggers the music to all connected players when the song schedule is time.
  Song is replayed the same time every hour

Song Schedule:

Song 1 - Oliver = 00.00 - 02.25
Song 2 - Lies = 02.27 - 05.37
Song 3 - Ben Fox = 05.39 - 08.32
Song 4 - I've been Thinking = 08.34 - 11.19
Song 5 - AlexMake Music = 11.21 - 13.36
Song 6 - Evgeny = 13.38 - 16.40
Song 7 - Naems = 16.42 - 20.22

Song 8 - Oliver = 22.00 - 24.25
Song 9 - Lies = 24.27 - 27.37
Song 10 - Ben Fox = 27.39 - 30.32
Song 11 - I've been Thinking = 30.34 - 33.19
Song 12 - AlexMake Music = 33.21 - 35.36
Song 13 - Evgeny = 35.38 - 38.40
Song 14 - Naems = 38.42 - 42.22

Song 15 - Oliver = 44.00 - 46.25
Song 16 - Lies = 46.27 - 49.37
Song 17 - Ben Fox = 49.39 - 52.32
Song 18 - I've been Thinking = 52.34 - 55.19
Song 19 - AlexMake Music = 55.21 - 57.36

Rest until 59.59, and then go back to minutes 00.00 song 1 again

-end of file-

<br><br><br>

# Developer Daily Updates

### Tue, 12 Sep 2023<br>

- Tri - 12 Sep 2023 - Block escalator so user cannot go upstair
- Tri - 12 Sep 2023 - Bug: Seat UI Press E not shown after sitdown and stand up 1 time
- Tri - 12 Sep 2023 - Fix Elevator to Club & Replicate the 4 elevator and transforms
- Tri - 12 Sep 2023 - Add sound to Elevator transition

- Rian - 12 Sep 2023 - Block escalator so user cannot go upstair
- Rian - 12 Sep 2023 - Add notification in escalator
- Rian - 12 Sep 2023 - Trigger for show notification
  ![report](https://github.com/XrunMeta/CLUBX/blob/main/img/rian-12-sept-2.png?raw=true)

### Mon, 11 Sep 2023<br>

- Tri - 11 Sep 2023 - Fixing Focus problem in Lobby (Change aperture to 12)
- Tri - 11 Sep 2023 - Fixing Bug NPC not Dancing (Remove Idle Anim Variation Logic)
- Tri - 11 Sep 2023 - Researching on Custom Morph Target
  ![image](https://github.com/XrunMeta/CLUBX/assets/14313339/5b1ed805-cb43-495d-ae12-de78f6cfbc0d)
  <br><br>

- Rian - 11 Sep 2023 - Add in database and load View Distance Quality
- Rian - 11 Sep 2023 - Add in database and load Global Illumination Quality
- Rian - 11 Sep 2023 - Solve trouble settings in lobby and gameplay
  <br><br>

- Bilal - 11 Sep 2023 - Remove purchased item
- Bilal - 11 Sep 2023 - Unset clothes unpaid in clothes
- Bilal - 11 Sep 2023 - Load function
- Bilal - 11 Sep 2023 - API save transaction
  <br><br>

### Fri, 08 Sep 2023<br>

- Rian - 08 Sep 2023 - Show/Hide settings with Escape
- Rian - 08 Sep 2023 - Help bilal after buy in shop success, automatic save in clothes inventory
  <br><br>

### Fri, 08 Sep 2023<br>

- Tri - 08 Sep 2023 - Fixing Character LOD
- Tri - 08 Sep 2023 - Testing Release build v0.0.4-PreAlpha (found new bugs, will fix on monday)
  ![image](https://github.com/XrunMeta/CLUBX/assets/14313339/e2b0d3be-c00e-4976-a65a-06aca5fc4032)
  ![image](https://github.com/XrunMeta/CLUBX/assets/14313339/71dec7b3-b746-4d51-9c4d-41d5f20a4106)
  <br><br>

- Bilal - Parse data shop for remove
- Bilal - Sort Item shop as ID
- Bilal - Create Map for Parse data shop
  <br><br>

### Thu, 07 Sep 2023<br>

- Rian - Complete country
- Rian - Add sg.ViewDistanceQuality 3, so that the face is not disfigured
- Rian - Add loading screen after join in gameplay
  ![report](https://github.com/XrunMeta/CLUBX/blob/main/img/rian-7-sept-1.png?raw=true)
  <br><br>

- Tri - 07 Sep 2023 - Implement Dance Change in Multiplayer
- Tri - 07 Sep 2023 - Testing Dance change in multiplayer
- Tri - 07 Sep 2023 - Reimport & Resetup NPC Character (Last import is problem)
- Tri - 07 Sep 2023 - NPC Character LOD setup
- Tri - 07 Sep 2023 - Research Audio Streaming (Will be using Voice Chat)
- Tri - 07 Sep 2023 - Add Idle animation variation for NPC
- Tri - 07 Sep 2023 - Added Facial Animation for Player
  <br><br>

- Bilal - Fix error on female shop
- Bilal - Make sure user just buy 1 clothes, Not double
- Bilal - Displays only items that the user doesn't own in the store
- Bilal - Update Clothes to DB
- ![BP - Disable Double Buying(2)](https://github.com/XrunMeta/CLUBX/assets/85775620/b50a7e7e-b5f7-4fe7-8800-3a68e51d54c9)
  <br><br>

Wed, 06 Sep 2023<br>

- Rian - 6 Sept 2023 - Add other 50 country
- Rian - 6 Sept 2023 - New loading screen
- Rian - 6 Sept 2023 - Open phone number box auto focus input search country and press country, auto focus input phone number
- Rian - 6 Sept 2023 - Change graphic low and medium/middle
  ![report](https://github.com/XrunMeta/CLUBX/blob/main/img/rian-6-sept-1.png?raw=true)
  <br><br>

- Tri - 06 Sep 2023 - Add Dance Selection System
- Tri - 06 Sep 2023 - Implement Dance Selection to Character
- Tri - 06 Sep 2023 - Build Test-Build Client & Server
- Tri - 06 Sep 2023 - Fix Chair Interaction & views
  ![image](https://github.com/XrunMeta/CLUBX/assets/14313339/212cb549-35b5-4db7-a43a-ce29cd67c40f)
  ![image](https://github.com/XrunMeta/CLUBX/assets/14313339/ae29c34d-d0c9-43e7-8123-39553e949043)
  <br><br>

- Bilal - 6 Sept 2023 - Get ID from Purchased Item
- Bilal - 6 Sept 2023 - Increase User Amount After Buy
- Bilal - 6 Sept 2023 - Update Latest Coin After Buy
  <br><br>
  Tue, 05 Sep 2023<br>
- Tri - 05 Sep 2023 - Fixing LOD character
- Tri - 05 Sep 2023 - Add New Dance Asset
- Tri - 05 Sep 2023 - Add New Facial Expression Asset
- Tri - 05 Sep 2023 - Implement Facial Expression to Character NPC
- Tri - 05 Sep 2023 - Implement Dance variation to NPC
- Tri - 05 Sep 2023 - Add 2 New Character C_Opik & Zantik
- Tri - 05 Sep 2023 - Add Chairs to level
- Tri - 05 Sep 2023 - Fix Camera Collision with Character
  ![image](https://github.com/XrunMeta/CLUBX/assets/14313339/1fbe37d5-d06d-425c-ba0d-f130edacde3b)
  ![image](https://github.com/XrunMeta/CLUBX/assets/14313339/45b257d2-2e10-4069-aa1c-9f2a332a4505)

- Bilal - 5 Sept 2023 - Item Click Function
- Bilal - 5 Sept 2023 - Count price as price in DB
  <br><br>

- Rian - 5 Sept 2023 - Show settings using Escape
- Rian - 5 Sept 2023 - Add loading screen after join gameplay
  <br><br>

Mon, 04 Sep 2023

- Tri - 04 Sep 2023 - Add new NPC & Setting up in Unreal Engine
- Tri - 04 Sep 2023 - Setup LOD for All NPC
- Tri - 04 Sep 2023 - Setup IK Rig and retargeter for CC4 character
  ![WhatsApp Image 2023-09-04 at 17 54 15](https://github.com/XrunMeta/CLUBX/assets/14313339/9134e74e-f5a6-452a-bedf-ec73cb197723)
  ![WhatsApp Image 2023-09-04 at 17 53 55](https://github.com/XrunMeta/CLUBX/assets/14313339/be3b756e-eb56-45e3-9320-ddb71544f56c)
  <br><br>

- Bilal - 4 Sept 2023 - Call Coin & Poin API
- Bilal - 4 Sept 2023 - Loop Item Shop + Price
  ![Get Wallet API   Show to Info Wallet](https://github.com/XrunMeta/CLUBX/assets/85775620/ac9a6b77-91b4-475b-b3f8-8e2d3a3add84)
  ![Get Wallet API   Show to Info UI](https://github.com/XrunMeta/CLUBX/assets/85775620/b90bb06a-52c5-44cf-a95f-d534b163b06a)

<br><br>

- Rian - 4 Sept 2023 - Load flag profile in gameplay
- Rian - 4 Sept 2023 - create loading screen (just after login)
  ![report](https://github.com/XrunMeta/CLUBX/blob/main/img/rian-4-sept-1.png?raw=true)
  <br><br>

Fri, 01 Sep 2023<br>

- Tri - 01 Sep 2023 - Sit down part-3: Test in Multiplayer system
  ![image](https://github.com/XrunMeta/CLUBX/assets/14313339/704ea9eb-c88d-4d42-b2d1-87b44902a565)
  <br><br>

- Rian - 1 Sept 2023 - Set music sound: Take according to the last rule, Can using slider, Can with button default sound
- Rian - 1 Sept 2023 - Change guide help gameplay
  ![report](https://github.com/XrunMeta/CLUBX/blob/main/img/rian-1-sept-1.png?raw=true)
  <br><br>

Thu, 31 Aug 2023

- Tri - 31 Aug 2023 - Sit down part-1: Setup Sitdown logic, animation, animBP
  <br><Br>

- Rian - 31 Aug 2023 - Fix bug: Save and load setting graphic in gameplay
- Rian - 31 Aug 2023 - Add function slider for music, but still have bugs
  <br><Br>

- Rian - 30 Aug 2023 - Add text for loading screen after login, but just sample
- Rian - 30 Aug 2023 - Add sound click, for choose room Online or Local
- Rian - 30 Aug 2023 - Implement save and load settings in gameplay (Still have bugs)
  <br><Br>

- Tri - 30 Aug 2023 - Facial Animation Part-5: Logic Setup in blueprints in what condition facial animation is played
- Tri - 30 Aug 2023 - Facial Animation Part-6: Testing the logic in Editor if the animation work as expected
- Tri - 30 Aug 2023 - Facial Animation Part-7: Testing Replication in Multiplayer if the logic works in multiplayer system
  <br><Br>

- Tri - 29 Aug 2023 - Facial Animation Part-2: Retargeting Animation
- Tri - 29 Aug 2023 - Facial Animation Part-3: Re-setup NPC Character using New Actorcore Mesh
- Tri - 29 Aug 2023 - Facial Animation Part-4: Prepare Character facial animation
  <br><Br>

<br><br>

- Rian - 29 Aug 2023 - Fix bug: Forget password, phone number with two option. Using code country or not
  Sign up page just add hint text in input phone number
- Rian - 29 Aug 2023 - Implement setting to UI in gameplay lobby
- Rian - 29 Aug 2023 - Set notifications in settings, when on or off
  <br><br>

  ![report](https://github.com/XrunMeta/CLUBX/blob/main/img/rian-29-aug-1.png?raw=true)
  <br><br>

<br><br>

- Tri - 28 Aug 2023 - I'm preparing facial animation. Due to bone incompatibility, It is required to reimport all NPC asset with compatible facial animation.
- Tri - 28 Aug 2023 - Reimport base character to Unreal
- Tri - 28 Aug 2023 - Creating and setup New IK Rig for the skeleton
- Tri - 28 Aug 2023 - Creating and setup New IK Retargeter
- Tri - 28 Aug 2023 - Retarget and check required animation
  <br><br>

- Rian - 28 Aug 2023 - Save and load graphic settings, but not yet implement in game lobby

  ![report](https://github.com/XrunMeta/CLUBX/blob/main/img/rian-28-aug-1.png?raw=true)
  <br><br>

- Uploaded New v0.0.3-PreAlpha Build
- Tri - 25 Aug 2023 - Female Character setup (done)
- Tri - 25 Aug 2023 - Toggle Music volume lower / mute button when want to voice chat (done)
- Tri 25 Aug 2023 - Song before the fast is not correctly timed (Ben Song duration FIXED)
  Video walkthrough: https://drive.google.com/file/d/1Zy0Dt8M7XDdLlohOA2iHZh9ygTrimX-R/view?usp=sharing
  <br><br>

- Rian - 25 Aug 2023 - Solve bug: if you save data in the profile, the initial character is male. When you enter the game, you become a woman instead
- Rian - 25 Aug 2023 - Solve bug: delete the clubx intro that still concerns, when you have successfully logged in
- Rian - 25 Aug 2023 - Set graphic by check: low, medium, high and ultra. But still not call API
- Rian - 25 Aug 2023 - Solve bug: Repair OTP in forgot password page

  ![report](https://github.com/XrunMeta/CLUBX/blob/main/img/rian-25-aug-1.png?raw=true)
  ![report](https://github.com/XrunMeta/CLUBX/blob/main/img/rian-25-aug-2.png?raw=true)
  <br><br>

- Tri - 24 Aug 2023 - Female Character setup (on progress...)
- Tri - 24 Aug 2023 - Music volume lower / mute button when want to voice chat (on progress...)
  ![clubx](https://github.com/XrunMeta/CLUBX/blob/main/img/tri_24aug.jpeg?raw=true)
  <br><br>

- Rian - 24 Aug 2023 - Add resolution scale, view distance, anti aliasing, post processing, shadows, textures, effects, detail mode in setting, then load settings already success

  ![report](https://github.com/XrunMeta/CLUBX/blob/main/img/rian-24-aug-1.png?raw=true)
  <br><br>

- Tri - 23 Aug 2023 - Chat UI (done)
- Tri - 23 Aug 2023 - Female Character setup (on progress...)
  ![female character](https://github.com/XrunMeta/CLUBX/blob/main/img/23aug1.jpg?raw=true)
  <br><br>

- Rian - 23 Aug 2023 - When a notification appears in the profile section, you can't do anything before clicking ok on the notification
- Rian - 23 Aug 2023 - Repair text to visible in chat game lobby
- Rian - 23 Aug 2023 - Repair bug overflow text clothes, set to be ellipsis and show all text when hover

  ![report](https://github.com/XrunMeta/CLUBX/blob/main/img/rian-23-aug-1.png?raw=true)
  ![report](https://github.com/XrunMeta/CLUBX/blob/main/img/rian-23-aug-2.png?raw=true)
  <br><br>

- Tri - 22 Aug 2023 - Updating readme in github
- Tri - 22 Aug 2023 - Upload v0.0.2-PreAlpha build to github
- Tri - 22 Aug 2023 - Hide chat interface in lobby (Lobby is not connected to server so chat does not work)
- Tri - 22 Aug 2023 - Fix Voice chat Mute Button (works)
- Tri - 22 Aug 2023 - Chat UI (on progress...)
  ![chatUI](https://github.com/XrunMeta/CLUBX/blob/main/img/tri-22aug-img1.png?raw=true)
  <br><br>

- Rian - 22 Aug 2023 - removed the back button in the signup form, when selecting a country
- Rian - 22 Aug 2023 - moved the api url, to fix the problematic send otp to whatsapp and in the confirmation notification section, added a button to close the confirmation notification.
- Rian - 22 Aug 2023 - make the signup widget transparent, so that when logging in after a successful signup, the signup widget doesn't appear

  ![report](https://github.com/XrunMeta/CLUBX/blob/main/img/rian-22-aug-1.png?raw=true)
  ![report](https://github.com/XrunMeta/CLUBX/blob/main/img/rian-22-aug-2.png?raw=true)
  <br><br>

- Tri - 21 Aug 2023 - Implemented User login history in Server GameMode and send to API - 21 AUg 2023
- Tri - 21 Aug 2023 - Playtesting and minor bug fixing - 21 AUg 2023
  ![blueprints](https://github.com/XrunMeta/CLUBX/blob/main/img/21aug.jpg?raw=true)
  <br><br>

- Rian - 21 Aug 2023 - Created a new API to store login history from a user, and also an API to retrieve data with a certain member id along with the history data
- Rian - 21 Aug 2023 - Add button back, go to login
- Rian - 21 Aug 2023 - Change resend code duration, from 30s to 60s
  ![report](https://github.com/XrunMeta/CLUBX/blob/main/img/rian-22-aug-1.png?raw=true)
  ![report](https://github.com/XrunMeta/CLUBX/blob/main/img/rian-22-aug-2.png?raw=true)
  <br><br>

- Tri - 18 Aug 2023 - Release New Build: Clubx Release Notes Pre Alpha Version 0.02 (Alpha.002) - 18 Aug 2023
  <br>Release Notes:
  <br> - Change voice chat icon to mic (instead of speaker icon) - 18aug
  <br> - Removed player list in login menu - 18aug
  <br> - Player & camera collision fixed (bug fixed 18aug)
  <br> - In Lobby, When player height is very tall or very short, camera does not follow to head (bug fixed 18aug)
- Tri - 16 Aug 2023 - Introduced new bug in camera collision - 16 Aug 2023
- Tri - 16 Aug 2023 - Uploade the client exe to google drive (anyone can download) - 16 Aug 2023
- Tri - 16 Aug 2023 - Upload server to AWS instance and run the server (ready to connect from anywhere) - 16 Aug 2023
- Tri - 16 Aug 2023 - Package windows exe for Client & Server (Clubx PreAlpha version 0.01 release 16 Aug 2023) - 16 Aug 2023
- Tri - 16 Aug 2023 - Bug Fixing as per notion bug lists - 16 Aug 2023
- Tri - 15 Aug 2023 - Setup graphic Settings for in-game - 15 Aug 2023
- Tri - 15 Aug 2023 - Placing animated character in level for preparation for recording - 15 Aug 2023
- Tri - 14 Aug 2023 - Inserting temporary dancing and sitting test NPC (non interactible) - 14 Aug 2023
- Tri - 14 Aug 2023 - Preparing logic for NPC, NPC Spawner. - 14 Aug 2023
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
- Tri - 08 Aug 2023 - Doing synchronized music playback for all connected players in server according to UTC time, fixing bugs in hair not showing properly - 08 Aug 2023
- Tri - 08 Aug 2023 - Lobby is functional but still requires visual tweaks
- Tri - 08 Aug 2023 - Text chat is functional but still using old UI
- Tri - 08 Aug 2023 - Voicechat tested and works with multiplayer
- Tri - 08 Aug 2023 - Started implementing UI for gameplay and im`plement autoconnect to voicechat, mute functionality (press Enter to mute / unmute)
