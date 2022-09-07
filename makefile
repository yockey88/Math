OBJ_NAME = math
CC = g++
C_FLAGS = -std=c++20 -Wall -O0 -g

SRC_DIR = src
BUILD_DIR = build

SRC = $(SRC_DIR)/*.cpp
INCLUDE = -Iinclude

INLUDE = $(INCLUDE_CORE) $(INCLUDE_MAP) $(ASSETS)

all:
	$(CC) $(C_FLAGS) $(INLUDE) $(SRC) -o $(BUILD_DIR)/$(OBJ_NAME)