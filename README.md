# nbody-simulation

An n-body simulation visualizer using C++ in OpenFrameworks.

Watch the YouTube video of it in action: [https://youtu.be/PM9dYcsKkDI](https://youtu.be/PM9dYcsKkDI)

![nbody-sim-screenshot](https://user-images.githubusercontent.com/7104017/56918864-c1bb0f80-6a84-11e9-86e7-b5cc36c4ee30.png)

## Installation & Setup

How to install and run:

1. Download OpenFrameworks: [https://openframeworks.cc](https://openframeworks.cc)

2. Download this repository within the `[openframeworks directory]/apps/myApps/`

3. Download [ofxBloom](https://github.com/P-A-N/ofxBloom) into `[openframeworks directory]/addons/`

4. Using the [Project Generator](https://openframeworks.cc/learning/01_basics/how_to_add_addon_to_project/), navigate to the repository, and click on "Update"

## Usage

### Constant Settings

All of the constants exist in the [constants.h](https://github.com/n3a9/nbody-simulation/blob/master/src/constants.h), which include scaling and the number of bodies in the simulation.

- **kBodyCount**: Number of bodies in the simulation

### Simulation Settings

1. Pressing the left arrow will increase the speed by 2x

2. Pressing the right arrow will decrease the speed by 2x

3. Pressing 1 will reset the simulation with static bodies

4. Pressing 2 will reset the simulation with kinetic bodies

## Dependencies

[ofxBloom](https://github.com/P-A-N/ofxBloom)

## License

MIT
