### 1º Step
Reload de cmake project
### 2º Step
Compile the project, the script will be on the binaries folder.
At the root of he project (ch1/) do:
```bash
mkdir build
cd build
cmake ..
make
```
### 3º Step
To use the script you should pass the parameter from bash

Example:
```bash
./ch1 <<< "TheStringYouWant"
```
or even
```bash
./ch1 < yourfile.txt
```
