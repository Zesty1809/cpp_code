OBJDIR = output

# Automatically detect all .cpp files
SRCS = $(wildcard *.cpp)

# Generate corresponding object files
OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

# Default target to build all object files
all: 
	@echo -e "SRCS: $(SRCS)\n"
	@echo -e "OBJS: $(OBJS)\n"
	$(MAKE) $(OBJS)

# Pattern rule to compile .c files to object files in the output directory
$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	@echo -e "Compiling $< to $@\n"
	clang++ $< -o $@

# Rule to create the object directory
$(OBJDIR):
	@echo -e "Creating directory $(OBJDIR)\n"
	mkdir -p $(OBJDIR)

run:
	@clear
	@echo -e "Running the program\n"
	@sudo ./$(OBJDIR)/list.o

# Clean rule to remove generated files
clean:
	@echo -e "Cleaning up\n"
	rm -rf $(OBJDIR)