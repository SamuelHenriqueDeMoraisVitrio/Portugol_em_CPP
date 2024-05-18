COMP = clang++
OPC = -std=c++20
NOME = EXE
START = echo "" && echo "Compilação concluida. Iniciando..." && echo "" && echo "" && ./$(NOME) && echo ""

nome: clear
	$(COMP) $(OPC) -o $(NOME) main.cpp
	@$(START)
	@echo ""

compile: clear
	$(COMP) $(OPC) -o $(NOME) main.cpp

clear:
	@rm -rf EXE .*.cpp.swp .*.hpp.swp .cache
	clear
	@echo ""
	@ls -alh --color=auto
	@echo ""

run:
	@$(START)
	@echo ""
