# DanteStar - Maze Generator and Solver

A C program that can both generate and solve mazes using various algorithms. This project consists of two main components: a maze generator and a maze solver.

## Project Structure

```
DanteStar/
├── generator/       # Maze generation component
├── solver/         # Maze solving component
├── lib/            # Library files
├── include/        # Header files
└── Makefile        # Main build configuration
```

## Features

### Maze Generator
- Perfect maze generation
- Imperfect maze generation with customizable parameters
- Command-line interface for maze customization

### Maze Solver
- Path-finding algorithm implementation
- Movement validation
- Solution visualization

## Building the Project

To build both the generator and solver:

```bash
make
```

This will:
1. Compile the custom library
2. Build the solver component
3. Build the generator component

## Usage

### Generating a Maze

The generator can create both perfect and imperfect mazes. Navigate to the project root and use:

```bash
./generator/generator [width] [height] [perfect/imperfect]
```

### Solving a Maze

To solve a generated maze:

```bash
./solver/solver [maze_file]
```

## Cleaning Up

To clean the project:
- `make clean`: Remove object files
- `make fclean`: Remove object files and executables
- `make re`: Clean and rebuild the entire project

## Testing

Run the unit tests with:

```bash
make tests_run
```

## License

This project is licensed under the terms provided in the LICENSE file.

## Contributing

Feel free to submit issues and enhancement requests. 