*This project has been created as part of the 42 curriculum by azahino-, jrecio-t.*

# push_swap

## Description

`push_swap` is a sorting algorithm project developed as part of the curriculum at 42.

The objective is to sort a stack of integers using the smallest possible number of operations while respecting a restricted set of stack instructions. The project focuses on algorithm design, data structures, optimization, and complexity analysis.

The program receives a list of integers as input and outputs the sequence of operations required to sort them.

---

## Features

- Input validation and error handling
- Detection of already sorted stacks
- Three specialized sorting algorithms depending on the input size
- Circular doubly linked list implementation for efficient stack operations
- Support for all mandatory push_swap operations

## Contributions

The project was developed collaboratively, with both authors participating in the design, implementation, testing, and optimization of the application.

### azahino-t

- Designed and implemented the **Selection Sort** algorithm for small inputs.
- Contributed to the development and optimization of the **Chunk-Based Sort** algorithm.
- Implemented and refactored stack operations.
- Improved parsing, input validation, and error handling.
- Performed code refactoring, normalization, debugging, and memory leak fixes.

### jrecio-t

- Designed and implemented the **Radix Sort** algorithm for large inputs.
- Developed the adaptive algorithm selection mechanism.
- Implemented the **checker** bonus program and integrated `get_next_line`.
- Contributed to benchmarking, performance analysis, and project organization.
- Participated in testing, debugging, refactoring, and documentation.

### Shared Contributions

The following components were developed collaboratively:

- Circular linked list data structure.
- Stack operations (`sa`, `pb`, `ra`, etc.).
- Index assignment and preprocessing.
- Makefile and project structure.
- Performance optimization and algorithm tuning.
- Testing, code reviews, and final validation.

## Supported Operations

| Operation | Description |
|-----------|-------------|
| `sa` | Swap the first two elements of **stack A**. Does nothing if the stack contains fewer than two elements. |
| `sb` | Swap the first two elements of **stack B**. Does nothing if the stack contains fewer than two elements. |
| `ss` | Perform `sa` and `sb` simultaneously. |
| `pa` | Push the top element from **stack B** onto **stack A**. Does nothing if stack B is empty. |
| `pb` | Push the top element from **stack A** onto **stack B**. Does nothing if stack A is empty. |
| `ra` | Rotate **stack A** upwards, moving the first element to the bottom of the stack. |
| `rb` | Rotate **stack B** upwards, moving the first element to the bottom of the stack. |
| `rr` | Perform `ra` and `rb` simultaneously. |
| `rra` | Reverse rotate **stack A**, moving the last element to the top of the stack. |
| `rrb` | Reverse rotate **stack B**, moving the last element to the top of the stack. |
| `rrr` | Perform `rra` and `rrb` simultaneously. |

## Project Structure

The project is organized into several modules responsible for:

- Argument parsing and validation
- Stack initialization
- Stack operations
- Sorting algorithms
- Utility functions
- Checker (bonus)

---

## Algorithm and Data Structure Choices

The project uses a **circular linked list** to represent both stacks. This structure allows efficient rotations, reverse rotations, pushes, and swaps without moving large amounts of data.

Instead of relying on a single sorting algorithm, the program selects the most suitable strategy according to the input size:

- **Selection Sort** for very small inputs, producing an optimal or near-optimal number of operations.
- **Chunk-Based Sort** for medium-sized inputs. Elements are divided into ranges (chunks), pushed to the auxiliary stack, and reassembled efficiently.
- **Radix Sort** for large inputs. After assigning each value a normalized index, the algorithm sorts elements bit by bit, achieving predictable performance with a low operation count.

This hybrid approach provides better overall performance than using a single algorithm for every case.

---

## Instructions

### Compilation

Compile the project with:

```bash
make
```

This generates:

```text
push_swap
```

Compile the bonus program with:

```bash
make bonus
```

which generates:

```text
checker
```

### Available Rules

| Command | Description |
|---------|-------------|
| `make` | Compile push_swap |
| `make bonus` | Compile checker |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and executables |
| `make re` | Rebuild the project |

---

## Usage

Sort a stack:

```bash
./push_swap 4 67 3 87 23
```

Validate the output with the checker:

```bash
./push_swap 4 67 3 87 23 | ./checker 4 67 3 87 23
```

If the generated instructions correctly sort the stack, the checker prints:

```text
OK
```

---

## Resources

### Documentation and References

- [Repository](https://github.com/azahino-code/Push-Swap)
- [Circular Doubly Linked List](https://www.geeksforgeeks.org/dsa/introduction-to-circular-doubly-linked-list/)
- [Random number generator](https://pinetools.com/es/generador-numeros-aleatorios)
- [Push-Swap Visualizer](https://nmannage.github.io/showcase/push_swap_visualizer/)

### AI Usage

AI tools were used as educational support for:
- Discussing optimization strategies.
- Reviewing edge cases and debugging.
- Improving project documentation.

## Authors

- azahino-
- jrecio-t