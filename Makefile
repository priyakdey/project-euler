run:
	@gcc -Wall -Wextra -Werror -o ./bin/${TC} ${TC}.c && ./bin/${TC}

clean:
	@rm ./bin/*
