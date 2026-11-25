# MOD — Geode floating menu starter

An Android-focused Geode mod starter for Geometry Dash. It adds a small **MOD** button during gameplay; tapping it opens an informational panel. The project metadata now declares Geode **1.8.0 or newer** as its minimum.

This is a safe UI starter: it does not change gameplay and does not include speedhack, noclip, or other gameplay cheats. It also does not currently implement auto-save or FPS features.

## Build and install

This repository contains source code, not a prebuilt `.geode` file. Build it using a Geode SDK/toolchain compatible with your installed Geode 1.8.0 Android setup and your Geometry Dash version. The CMake project uses Geode's `setup_geode_mod` helper, which must be provided by that SDK.

With the matching SDK and Geode CLI installed, build/package using the CLI's build command (commonly `geode build` from this project directory), then install the generated package through Geode on the Android device. Exact Android ABI/toolchain requirements depend on the Geode and Geometry Dash build installed on your device.

If the build fails, share the complete build log and your Geometry Dash version so the source/API compatibility can be checked. This project has not yet been compiled against your local Android toolchain.
