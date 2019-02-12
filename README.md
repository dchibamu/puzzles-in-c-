# Parking Lot Solution

The solution is provided with Java language, using the basic maven folder structure comprising of 3 packages;
	1. domain - contains the POJO for car,slot and commands
	2. service - business logic that models and run the parking lot service
	3. util - a group of constants
The solution is well tested with junit 5 and hamcrest library. The main class is configured in the pom file. 

## Assumptions
1.	Cars are of the same size that so no need to model the size of each slot.
2. 	Car colors are just one word.

## Pre-requesite software
1.	Linux - This solution was developed on Fedora version 27
2.	JDK 1.8 - specifically jdk1.8.0_181-amd64
3.	Apache Maven 3.5.4

## How to run application?
1.	Unzip archive parking_lot.tar.gz. See command below
	```
	tar -xvzf parking_lot.tar.gz
	```
2.	Change into parking_lot
    parking_lot directory contains bin, src directories. bin directory contains the executables. and src contains the source code for this solution. In parking_lot directory you will also find file_inputs.txt - file with parking lot commands.
	```
	cd parking_lot
	```
3.	Run following commands to ensure the scripts have the right executable rights  
	```
	chmod +x bin/setup
	chmod +x bin/parking_lot
	```
4.  Running the application make sure you are in parking_lot directory. 
	- To run interactive parking lot run following instruction
			-```
			bin/setup
			```
	Above command compiles runs unit test and build parking_lot.jar
			-```
			bin/parking_lot
			```
	Above command will launch the program,but all you will see is the blinking cursor. No interactive helpful instructions were provided.Just type the first command: create_parking_lot <N>, where N is the size of the parking lot.

	-	ii.	To run parking lot from file input execute following commands

			-	```
				bin/setup
				```

			Above command compiles runs unit test and build parking_lot.jar

			-	```
				bin/parking_lot <input file>
				```

			<input file> must be replaced with file with parking lot commands. Using the one provided for this challenge the command will be as below.
			
			bin/parking_lot file_inputs.txt
