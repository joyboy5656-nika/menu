# Web Launcher

A simple C program that launches your most-used websites in Firefox with a single command. No more clicking through bookmarks — just type a number and go.

## Overview

`main.c` is a lightweight command-line launcher that maps numeric indices to a curated list of websites and opens them in Firefox using `system()` calls. It supports two modes:

1. **Direct mode** — pass indices as command-line arguments to launch multiple sites at once.
2. **Interactive menu mode** — run with no arguments and get a numbered menu to pick from.

## Features

-  Launch up to 9 preset websites in Firefox
-  Interactive menu with a clean numbered list
-  Batch launching via command-line arguments
-  Loop through the menu until you exit with `e`
-  Clears the screen after each launch for a tidy terminal

## Preset Websites

| Index | Site |
|-------|------|
| 1 | The Odin Project |
| 2 | DeepSeek |
| 3 | ChatGPT |
| 4 | WhatsApp Web |
| 5 | GitHub |
| 6 | Pexels |
| 7 | Claude |
| 8 | YouTube |
| 9 | SkillRack |

## Requirements

- **Linux** (or any Unix-like OS)
- **GCC** or any C compiler
- **Firefox** installed and available on `PATH`
- A terminal with `clear` support

## Build

```bash
gcc main.c -o launcher
## The Truth
-First of all I didn't do this so that you will all use it
-I am doing this coz I have an habit of changing my OS once in a while
-so I don't want to backup this file and do things like that
-this way i will no longer need to do that
-after all I don't think there is a lazy guy in existence like me who don't want to have logos in his desktop and want another shortcut
