RUNNER = ../test-runner/test_runner.c

FLAGS = -Wall -Wextra -Werror

HELP = helpers.c
EX06 = ../ex06/*.c
EX07 = ../ex07/*.c
EX08 = ../ex08/*.c
EX09 = ../ex09/*.c
EX10 = ../ex10/*.c
EX11 = ../ex11/*.c
EX12 = ../ex12/*.c
EX13 = ../ex13/*.c
EX14 = ../ex14/*.c
EX15 = ../ex15/*.c
EX16 = ../ex16/*.c
EX17 = ../ex17/*.c
EX18 = ../ex18/*.c
EX19 = ../ex19/*.c
EX20 = ../ex20/*.c
EX21 = ../ex21/*.c
EX22 = ../ex22/*.c
EX23 = ../ex23/*.c
EX25 = ../ex25/*.c
EX26 = ../ex26/*.c

EXERCISES = $(HELP) \
						$(EX06) $(EX07) $(EX08) \
						$(EX09) $(EX10) $(EX11) \
						$(EX12) $(EX13) $(EX14) \
						$(EX15) $(EX16) $(EX17) \
						$(EX18) $(EX19) $(EX20) \
						$(EX21) $(EX22) $(EX23) \
						$(EX25) $(EX26)

all:
	@gcc -g $(FLAGS) $(RUNNER) $(EXERCISES) main.c -o a.out

test:
	@gcc -g $(RUNNER) $(EXERCISES) main.c -o a.out
	./a.out

run:
	@gcc -g $(FLAGS) $(RUNNER) $(EXERCISES) main.c -o a.out
	./a.out
