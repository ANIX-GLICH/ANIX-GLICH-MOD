# MOD — Geode floating menu starter

An Android-focused Geode mod starter for Geometry Dash. It adds a small **MOD** button during gameplay; tapping it opens an informational panel.

This repository intentionally does **not** implement speed hacks, noclip, or other gameplay cheats. The menu is a safe UI starting point, not a cheat pack. It currently does not implement auto-save or FPS features either.

## Build

1. Install the Geode SDK and CMake toolchain for your Android/Geometry Dash setup, following the [Geode documentation](https://docs.geode-sdk.org/).
2. Configure this project with the Geode SDK available to CMake, then build/package it using the Geode CLI for Android.
3. Install the generated `.geode` mod through Geode on your Android device.

The SDK/toolchain versions must match the installed Geode and Geometry Dash versions. This repository does not include a prebuilt Android binary.
