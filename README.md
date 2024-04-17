# Linux fix for Decal Crashers
## WARNING: I CANNOT CONFIRM THAT THIS IS SAFE, IF YOUR ACCOUNT GETS VAC-BANNED DON'T BLAME ME

For this reason I will also not be providing binaries.

Usage
---
To use it first clone the code, then execute `gcc -shared -m32 -fPIC main.c -o crash-fix.so`

Then go to TF2's launch options and add `LD_PRELOAD=<path-to-folder>/crash-fix.so:$LD_PRELOAD %command% <rest of launch options>`
