# menu
# Web Launcher CLI

A tiny C program I wrote because I hate desktop icons. Instead of cluttering my desktop with shortcuts, I made this terminal menu that opens my most-used sites in Firefox with a single keypress.

**Menu:** The Odin Project, DeepSeek, ChatGPT, WhatsApp, GitHub, Pexels, Claude, YouTube, SkillRack.

**Build & run:**
```bash
gcc main.c -o weblauncher
./weblauncher
```

Press `1`–`9` to open a site, `e` to exit. Linux only (uses `clear` and launches `firefox`).

**Why?** Clean desktop, fast access, no mouse needed. Edit the `switch` cases to add your own sites or swap Firefox for another browser.
