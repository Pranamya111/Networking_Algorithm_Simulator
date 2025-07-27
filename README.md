# Networking Algorithm Simulator (C Language)

This project is a command-line simulator that shows how several basic networking algorithms work using the C programming language. It is designed for students, educators, and enthusiasts to understand and experiment with fundamental data communication and networking methods.



## Project Overview

The **Networking Algorithm Simulator** offers an interactive menu-based interface where users can explore and run the following algorithms:

## Implemented Algorithms

1. **Distance Vector Routing Algorithm**  
   This simulates routing tables using the Bellman-Ford method to find shortest paths in a distributed way.

2. **Dijkstra’s Algorithm**  
   This is a graph-based routing algorithm that identifies the shortest path from a source node to all other nodes.

3. **Bit Stuffing**  
   This encodes data to ensure that special bit patterns (like flags) are not misunderstood by the receiver.

4. **Byte Stuffing**  
   This inserts escape characters to distinguish control characters from data in a frame.

5. **CRC (Cyclic Redundancy Check)**  
   This performs error checking by calculating and adding a checksum to data frames.

6. **Leaky Bucket Algorithm**  
   This simulates traffic shaping by managing the data flow rate in network queues.

7. **Caesar Cipher**  
   This is a simple encryption method for encoding messages by shifting characters.

## How to Compile and Run

### Compilation (using GCC)

Make sure all '.c' and '.h' files are in the same directory.
gcc main.c dijkstra.c bit_stuffing.c byte_stuffing.c ceaser_cipher.c crc.c leaky_bucket.c distance_vector.c -o simulator.exe
./simulator.exe


