

SRC	= src
BIN = build/bin
TEST = test
OBJ = build/obj

APP_DIR	= $(SRC)/Application
ECUAL_DIR = $(SRC)/ECUAL
MCAL_DIR = $(SRC)/MCAL
UTILITIES_DIR = $(SRC)/UTILITIES
MAIN_DIR = $(SRC)

SOURCES := $(shell find $(SRC) -name '*.c')
#$(info ${SOURCES})
OBJECTS := $(patsubst %.c, %.o, $(addprefix $(OBJ)/, $(notdir ${SOURCES})))
DEPS = $(shell find $(OBJ)/ -name '*.d')
INCLUDES := $(shell find $(SRC) -name '*.h')

TARGET 	= $(BIN)/app.elf
FINAL_TARGET = $(patsubst %.elf, %.hex, $(TARGET))

MCU  = atmega32
F_CPU 	= 8000000UL
PROGRAMMER = usbasp
CC		= avr-gcc
CFLAGS	= -Wall -Os
DEP_FLAGS = -MMD -MP
MCU_FLAGS = -mmcu=$(MCU) -DF_CPU=$(F_CPU)
COMPILE    = $(CC) $(CFLAGS) $(DEP_FLAGS) $(MCU_FLAGS)


all: build convert upload


build: $(TARGET)
	$(COMPILE) $(OBJECTS) -o $(TARGET)


$(TARGET): MAIN APPLICATION ECUAL MCAL  


convert:
	avr-objcopy -j .text -j .data -O ihex $(TARGET) $(FINAL_TARGET)
	avr-size --format=avr --mcu=$(MCU) $(FINAL_TARGET)


upload: build convert
	avrdude -p $(MCU) -c $(PROGRAMMER) -U flash:w:$(FINAL_TARGET):i 


MAIN: $(OBJ)/main.o

APPLICATION: $(OBJ)/application.o

MCAL: $(OBJ)/dio.o

ECUAL: $(OBJ)/button.o $(OBJ)/led.o


$(OBJ)/main.o: $(MAIN_DIR)/main.c
	$(COMPILE) -c $< -o $@

$(OBJ)/%.o: $(MCAL_DIR)/%.c
	$(COMPILE) -c $< -o $@

$(OBJ)/%.o: $(ECUAL_DIR)/%.c
	$(COMPILE) -c $< -o $@

$(OBJ)/%.o: $(UTILITIES_DIR)/%.c
	$(COMPILE) -c $< -o $@

$(OBJ)/%.o: $(APP_DIR)/%.c
	$(COMPILE) -c $< -o $@

$(OBJ)/%.o: $(MCAL)/%.c
	$(COMPILE) -c $< -o $@

# Automatic dependency.
-include $(DEPS)

clean:
	rm -f $(OBJ)/* $(BIN)/*

.PHONY: all 
.PHONY: build
.PHONY: convert
.PHONY: upload
.PHONY: clean
.PHONY: MCAL
.PHONY: ECUAL
.PHONY: APPLICATION
.PHONY: MAIN
