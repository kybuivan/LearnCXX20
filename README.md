# C++20 Console Games
[![Build Status](https://github.com/kybuivan/console-games/actions/workflows/windows.yml/badge.svg)](https://github.com/kybuivan/console-games/actions)  

C++20 Console Games is a collection of simple console games written in C++20. The games included in this repository are:

- Guess the Number

## Getting started
### Prerequisites
To build and run C++20 Console Games, you will need the following:

- C++20 or later
- CMake 3.26 or newer
- Visual Studio 2022 17.4 (19.34) or newer

### Building
To build C++20 Console Games:

1. Clone the repository:
```bash
git clone https://github.com/kybuivan/console-games.git
```
2. Initialize the cmake submodule recursively:
```bash
cd console-games
git submodule update --init --recursive
```
3. Create a build directory:
```bash
mkdir build
cd build
```
4. Run CMake:
```bash
cmake -Wno-dev ..
```
5. Build the project:
```bash
cmake --build .
```

### Running
To run C++20 Console Games, simply execute the `console_games` executable that was built in the previous step.

## Contributing
Contributions are welcome! If you would like to contribute to C++20 Console Games, please open an issue or submit a pull request.

## License
This project is licensed under the Apache-2.0 license - see the [LICENSE](https://github.com/kybuivan/console-games/blob/main/LICENSE) file for details.