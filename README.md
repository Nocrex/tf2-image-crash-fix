# Linux fix for Objector/Decal crash
## WARNING: I CANNOT CONFIRM THAT THIS IS SAFE, IF YOUR ACCOUNT GETS VAC-BANNED DON'T BLAME ME

I have no idea how VAC actually determines cheats on Linux, so use at your own risk. For this reason I will also not be providing binaries.

GitHub issue about the exploit: https://github.com/ValveSoftware/Source-1-Games/issues/5603

Usage
---
To use it first clone the code, then execute `gcc -shared -m32 -fPIC main.c -o crash-fix.so`

Then go to TF2's launch options and add `LD_PRELOAD=<path-to-folder>/crash-fix.so:$LD_PRELOAD %command% <rest of launch options>`

Now when you run TF2 all legitimate images should load, while the crashing ones are blocked (and probably rendered as something else)
