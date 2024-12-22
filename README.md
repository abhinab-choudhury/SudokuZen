# SudokuZen

**SudokuZen** is a simple yet powerful Command-Line Interface (CLI) Sudoku solver. Feed it a Sudoku puzzle, and it will solve it instantly. Designed for simplicity and efficiency, SudokuZen is the perfect tool for Sudoku enthusiasts and problem solvers.

---

## Features

- **Instant Puzzle Solving**: Solves any 9x9 Sudoku puzzle with ease.
- **Lightweight CLI Tool**: Minimal dependencies and easy to use.
- **Custom Puzzle Inputs**: Load puzzles from CSV files for flexibility.
- **Example Puzzles Included**: Start solving right away with sample puzzles.

---

## Installation

### Prerequisites

- A C++ compiler with `make` installed (e.g., GCC, Clang).

### Steps to Build and Run

1. Clone the repository:  

   ```bash
   git clone https://github.com/yourusername/sudokuzen.git
   cd sudokuzen
   ```

2. Build the program using `make`:  

   ```bash
   make
   ```

3. Run the solver with a sample puzzle:  

   ```bash
   ./main ./examples/easy.csv
   ```

---

## Usage

1. Prepare your Sudoku puzzle in a CSV file (see `./examples/easy.csv` for a sample format).  
2. Use the following command to solve your puzzle:  

   ```bash
   ./main <path_to_csv_file>
   ```  

   For example:  

   ```bash
   ./main ./examples/medium.csv
   ```  

3. The solved Sudoku grid will be printed directly to the terminal.  
