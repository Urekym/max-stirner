CC=gcc
CFLAGS=-Wall
SOURCES=main.c ego.c spook.c judgment.c
TARGET=Maxsim

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)
