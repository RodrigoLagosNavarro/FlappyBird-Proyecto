CC = g++
CFLAGS = -Wall -Wextra -std=c++11
LDFLAGS = -lwinmm

SRC_DIR = src
INCLUDE_DIR = include
BIN_DIR = bin

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.o)

TARGET = $(BIN_DIR)/flappy_bird

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@

$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp
    $(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

clean:
    $(RM) $(OBJS) $(TARGET)
