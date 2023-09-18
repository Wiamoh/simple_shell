# 0x16. C - Simple Shell

Authors: wiam & salwa

## Description

This project is an implementation of a simple Unix shell created as a Milestone Project for the C programming course at ALX Africa Software Engineering. The "0x16. C - Simple Shell" project aims to provide a functional shell that replicates the basic functionalities of the standard shell (sh).

This program was written entirely in the C programming language.

## COPYRIGHT

Copyright (C) 2023 by wiam and salwa. All rights reserved.

## Environment

Our shell was developed and tested on Ubuntu 20.04 LTS. While it's designed to work on Unix-like systems, your mileage may vary on other platforms.

## Features

- Displays a prompt and waits for the user to enter a command. Each command line should end with a newline character.
- Handles errors gracefully and provides meaningful error messages.
- Handles the "end of file" condition (Ctrl+D).
- Parses and executes command lines with arguments.
- Supports the PATH environment variable to locate executables.
- Supports the exit command with optional exit status.
- Prevents the shell from terminating when the user presses Ctrl-C.
- Handles command separators (;).
- Supports logical operators && and ||.
- Replaces variables like $? (exit status) and $$ (process ID).
- Ignores comments marked with #.
- Provides history feature support.
- Supports input from files.

## Built-in Commands

Our shell includes support for the following built-in commands:

- exit [n]: Exit the shell with an optional exit status, n.
- env: Print the environment variables.
- setenv [var] [value]: Set an environment variable to the specified value. If the variable exists, the value will be updated.
- alias [name[='value']]: Define aliases for commands.
- unsetenv [var]: Remove an environment variable.
- cd [dir]: Change the current working directory.
- help [built-in]: Display help documentation for a built-in command.

## Installation

To get the "0x16. C - Simple Shell" project on your local machine, follow these steps:

1. Clone the repository using the following command:

   `shell
   git clone https://github.com/wiamoh/simple_shell.g
