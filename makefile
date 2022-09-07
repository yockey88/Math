OBJ_NAME = math
CC = g++
C_FLAGS = -std=c++20 -Wall -O0 -g

SRC_DIR = src
BUILD_DIR = build

SRC = $(SRC_DIR)/*.cpp
INCLUDE = -Iinclude

all:
	$(CC) $(C_FLAGS) $(INCLUDE) $(SRC) -o $(BUILD_DIR)/$(OBJ_NAME)