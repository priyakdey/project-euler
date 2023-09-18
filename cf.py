#!/usr/bin/env python3

#########################################################
##    Command line util to create the template file    ##
#########################################################

import os
import sys

TMPL = """#include <stdio.h>

int main(void) {
  printf("Hello, World\\n");
  return 0;
}

"""


if __name__ == "__main__":
    args = sys.argv

    if len(args) < 2:
        print("ERROR: Missing filename")
        print("USAGE: ./cf.py <filename>")
        exit(1)

    filename = f"{sys.argv[1]}.c"

    if os.path.exists(filename):
        print(f"ERROR: file {filename} does exist...")
        exit(1)

    with open(filename, "w") as fp:
        fp.write(TMPL)
