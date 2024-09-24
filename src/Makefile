CC = gcc
CFLAGS = -I/Library/Frameworks/SDL2.framework/Headers \
         -I/Library/Frameworks/SDL2_image.framework/Headers \
         -I/usr/local/opt/sdl2_mixer/include/SDL2 \
         -F/Library/Frameworks
LDFLAGS = -L/usr/local/opt/sdl2_mixer/lib \
          -L/usr/local/lib -lSDL2 -lSDL2_image -lSDL2_mixer

SOURCES = src/main.c src/player.c src/enemy.c src/combat.c src/level.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = dungeon_game

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)

.c.o:
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f src/*.o $(EXECUTABLE)

