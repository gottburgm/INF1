CIN :
  - cin << reads a string delimited by whitespace;
  - cin.getline(var, size) reads a string of into var till newline of length up to size-1, discarding the newline (replaced by '\0'). The size typically corresponds to the length of the C-string array.
  - cin.get(var, size) reads a string till newline, but leaves the newline in the input buffer.
  - cin.get(), without argument, reads the next character.
