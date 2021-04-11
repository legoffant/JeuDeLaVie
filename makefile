# Le compilateur gcc pour un programme en C
CC = gcc

# Flags de compilation:
# -Wall lève une bonne partie des avertissements
# -Wextra ajoute encore des avertissements
# -Werror converti tout warning en error
CFLAGS = -Wall -Wextra -Werror

# Fichier binaire construit
TARGET = jeudelavie

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
