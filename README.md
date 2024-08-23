# Pipex

## Overview

**Pipex** is a 42 project that challenges you to recreate the shell's pipeline mechanism. The program will execute two commands in sequence, passing the output of the first command as the input to the second, just like `cmd1 | cmd2` in the Unix shell.

## Project Requirements

- **Input:** The program will take four arguments: `./pipex file1 cmd1 cmd2 file2`.
- **Execution:** 
  - The output of `cmd1` should be redirected to the input of `cmd2`.
  - `cmd1` reads from `file1`, and `cmd2` writes to `file2`.
- **Piping:** Utilize Unix pipes to connect the output of `cmd1` to the input of `cmd2`.
- **Process Management:** Use `fork` to create child processes for executing the commands.
- **File Descriptors:** Properly manage file descriptors to avoid leaks and ensure correct input/output redirection.

## Example Usage

```bash
$ ./pipex infile "ls -l" "grep pipex" outfile
```

This command sequence reads from `infile`, runs `ls -l`, pipes its output to `grep pipex`, and writes the result to `outfile`.

## Key Skills Developed

- **Process Control:** Learn how to create and manage processes using `fork`, `execve`, and `wait`.
- **Pipe and I/O Redirection:** Master the use of pipes for inter-process communication and file descriptor manipulation for I/O redirection.
- **Error Handling:** Develop robust error handling to manage common issues such as file access, command execution failures, and incorrect inputs.
- **Understanding Shell Behavior:** Gain insights into how the Unix shell manages pipelines and processes.

## Compilation

Compile the program using `gcc`:

```bash
$ gcc -Wall -Wextra -Werror -o pipex pipex.c
```

## Conclusion

**Pipex** is a foundational project that deepens your understanding of Unix-like operating systems, particularly in process control and inter-process communication. Completing this project equips you with essential skills for systems programming.
