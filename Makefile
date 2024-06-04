COMP = clang++
OPC = -std=c++20
NOME = EXE
START = echo "" && echo "Compilação concluida. Iniciando..." && echo "" && echo "" && ./$(NOME) && echo ""
FILE ?= main.cpp

compact: clear
	@python3 build.py
	@echo ""

all: clear
	$(COMP) $(OPC) -o $(NOME) $(FILE)
	@$(START)
	@echo ""

compile: clear
	$(COMP) $(OPC) -o $(NOME) $(FILE)

clear:
	@rm -rf EXE .*.cpp.swp .*.hpp.swp .cache
	clear
	@echo ""
	@ls -alh --color=auto
	@echo ""

run:
	@$(START)
	@echo ""
