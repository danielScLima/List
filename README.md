List
====================
Building with Travis: [![Build Status](https://www.travis-ci.com/danielScLima/List.svg?branch=master)](https://www.travis-ci.com/danielScLima/List)

This repository has a project with the implementation of a List.

It is written in C++.

The code of the List is independent of platform.

Is has two possible main files:

* [Codes](#markdown-header)
	* [A main that triggers unit test;](#markdown-header-emphasis)

	* [A Qt project to manage the List (With Gui).](#markdown-header-strikethrough)
	
The library used to make the Unit Test is the Catch v2.12.3. The code is already in this repository.

The Qt project generates images of the List, using the lib Graphviz.
Install this lib in your computer for you to be able to create such images.

The code was written containing the Doxygen documentation.

- - -

You have several options to build the project: 
====================

* [Build tools](#markdown-header)
	* [Makefile (using the file named MakefileGeneral);](#markdown-header-emphasis)
	* [CMake.](#markdown-header-emphasis)
	* [Qt Project (With QMake).](#markdown-header-emphasis)

The project has no leaks (Fully tested with Valgrind).

All the unit tests are ok.

- - -

The main functionalities available are: 
====================

* [Functionalities](#markdown-header)
	* [Insert in head;](#markdown-header-emphasis)
	* [Insert in tail;](#markdown-header-emphasis)	
	* [Remove in head;](#markdown-header-emphasis)	
	* [Remove in tail;](#markdown-header-emphasis)
	
- - -

Sample image: 
====================

![Alt text](images/sample.png)


Qt gui project: 
====================
The qt gui application gui is shown below:

![Alt text](images/guisample.png)
