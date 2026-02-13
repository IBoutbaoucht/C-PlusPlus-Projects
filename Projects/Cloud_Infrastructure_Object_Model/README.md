# ☁️ Cloud Infrastructure Object Model

**Language**: C++17

## 📖 Project Overview

This project is a C++ simulation of a cloud infrastructure system inspired by **Kubernetes**. It models key concepts such as **Clusters**, **Servers (Nodes)**, **Pods**, and **Containers** using advanced Object-Oriented Programming (OOP) principles.

The system simulates the scheduling of pods onto available servers based on resource constraints (CPU and Memory), manages the lifecycle of resources, and handles various runtime scenarios including resource exhaustion and file I/O errors.

## 📂 Project Structure

The project is organized into modular components:

```plaintext
Projects/Cloud_Infrastructure_Object_Model/
├── src/
│   ├── main.cpp                # Entry point & Test scenarios
│   ├── KubernetesCluster.cpp   # Cluster management logic
│   ├── Server.cpp              # Server node implementation
│   ├── Pod.cpp                 # Pod logic (collection of containers)
│   ├── Container.cpp           # Container resource logic
│   ├── Resource.cpp            # Abstract base class
│   └── Cloud_Util.cpp          # Helper functions (File I/O, display)
├── headers/
│   ├── KubernetesCluster.h     # Cluster class definition
│   ├── Server.h                # Server class definition
│   ├── Pod.h                   # Pod class definition
│   ├── Container.h             # Container class definition
│   ├── Resource.h              # Abstract Resource interface
│   ├── Cloud_Util.h            # Utility function declarations
│   ├── CloudExceptions.h       # Custom exception classes
│   └── MetricLogger.h          # Template class for logging
├── Makefile                    # Compilation script
└── cluster1_metrics.txt        # Output file for metrics

```

## 🚀 Key Features & Concepts

This project demonstrates mastery of modern C++ features:

### 1. Object-Oriented Design

* **Inheritance & Polymorphism**: `Server` and `Container` inherit from the abstract base class `Resource`.
* **Encapsulation**: Strict management of internal state (CPU/Memory) via public interfaces.
* **Smart Pointers**: Extensive use of `std::unique_ptr` for Pod ownership and `std::shared_ptr` for Server management to ensure memory safety.

### 2. Advanced C++ Features

* **Templates**: A generic `MetricLogger<T>` class to log metrics for any object implementing `getMetrics()`.
* **Lambdas & STL Algorithms**: Used for filtering servers (`std::find_if`), sorting pods (`std::sort`), and iterating over containers.
* **Exception Handling**: Custom exceptions (`AllocationException`, `FileException`) to handle resource failures and I/O errors gracefully.

### 3. Simulation Logic

* **Scheduler**: A logic engine that automatically finds a suitable server for a Pod based on the aggregate CPU/RAM requirements of its containers.
* **Resource Tracking**: Real-time deduction of resources from Servers upon allocation.

## 🛠️ Getting Started

### Prerequisites

* A C++ compiler supporting **C++17** (e.g., `g++`).
* **Make** utility.

### Compilation

To compile the project, navigate to the directory and run:

```bash
make

```

This will generate an executable named `main`.

### Cleaning

To remove compiled object files and the executable:

```bash
make clean

```

## 🏃‍♂️ Usage & Scenarios

The `main.cpp` file runs a comprehensive suite of tests demonstrating the system's capabilities:

1. **Run the simulation:**
```bash
./main

```



### Simulated Scenarios

The program automatically executes the following workflows:

1. **Exception Handling Test**: Attempts to allocate resources on an unstarted server to trigger and catch an `AllocationException`.
2. **File I/O Test**: Saves cluster metrics to `cluster1_metrics.txt` and handles potential file errors.
3. **Lambda Filtering**: Uses a lambda function to identify and list all inactive servers in the cluster.
4. **Pod Scheduling**:
* Creates a `web-pod` (Nginx + Redis) and a `db-pod` (MySQL).
* Attempts to deploy them to the cluster.
* The cluster checks available nodes (e.g., `nodeA`) and allocates resources if sufficient.


5. **Sorting & Logging**:
* Sorts pods based on the number of containers they hold.
* Uses the `MetricLogger` template to print detailed status reports.



## 📊 Sample Output

```text
=== Test AllocationException direct ===
Exception capturée : Server fail-node n'est pas actif

=== Test FileException ===
Métriques sauvegardées avec succès.

=== Déploiement sur un serveur inactif ===
Exception capturée : Server node3 n'est pas actif

=== Pods triés par nombre de conteneurs ===
-> Déploiement du Pod [Pod: web-pod]
[Container: c1: 2 CPU, 1024 Memory, nginx]
[Container: c2: 4 CPU, 2048 Memory, redis]
sur le nœud
[Server: nodeY | Total: 16 CPU, 16000 MB | Free: 10 CPU, 12928 MB]

```

## 📜 Technical Implementation Details

### The Scheduling Algorithm

When `deployPod(pod)` is called:

1. The cluster calculates the **total CPU and Memory** needed by summing up requirements of all containers in the pod.
2. It iterates through available `active` servers.
3. It attempts to `allocate()` resources on the server.
4. If successful, the pod is assigned; otherwise, it tries the next server.
5. If no server has space, an `AllocationException` is thrown.

### Metric Logging

The `MetricLogger` template demonstrates the "Separation of Concerns" principle. Instead of objects knowing how to print themselves to every possible stream, they provide a standard `getMetrics()` string, and the Logger handles the output format.

```cpp
template<typename T>
class MetricLogger {
public:
    static void logToStream(const T& obj, std::ostream& os) {
        os << obj.getMetrics() << "\n";
    }
};

```
