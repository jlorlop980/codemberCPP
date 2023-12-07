### 1º Step
Reload de cmake project
### 2º Step
Compile the project, the script will be on the binaries folder.
At the root of the challenge (ch2/) do:
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
./ch2 <<< "TheStringYouWant"
```
or
```bash
./ch2 < yourfile.txt
```
