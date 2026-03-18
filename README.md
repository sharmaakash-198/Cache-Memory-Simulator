# Cache Memory Simulator (C++)

This project is a **Cache Memory Simulator implemented in C++**, designed to model the behavior of a **direct-mapped cache** as used in modern computer architecture.

---

## How It Works

### Address Structure

Each memory address is divided into:

| Field  | Purpose                         |
| ------ | ------------------------------- |
| Offset | Selects data within a block     |
| Index  | Selects cache line              |
| Tag    | Identifies correct memory block |

---

## Compilation & Execution

### Compile

```bash
g++ src/main.cpp src/Cache.cpp src/Simulator.cpp -o cache_sim
```

### Run

```bash
./cache_sim
```

---

## Future Enhancements

* Set-Associative Cache
* LRU Replacement Policy
* Write Policies (Write-Through / Write-Back)
* File-based input simulation
* Visualization of cache behavior