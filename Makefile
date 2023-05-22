# Nom du microcontrôleur
MCU=atmega16u2
# Nom de votre programme
PROGRAM=main
# Outils de compilation
CC=avr-gcc
OBJCOPY=avr-objcopy

# Options du compilateur
CFLAGS=-g -Os -mmcu=$(MCU)

# Outils pour télécharger le programme
AVRDUDE=avrdude
AVRDUDE_FLAGS=-c avrisp -p $(MCU)

# Règle par défaut
all: $(PROGRAM).hex

# Règle pour compiler le code source en un exécutable
$(PROGRAM).elf: $(PROGRAM).c
	$(CC) $(CFLAGS) -o $@ $<

# Règle pour convertir l'exécutable en un fichier hexadécimal
$(PROGRAM).hex: $(PROGRAM).elf
	$(OBJCOPY) -j .text -j .data -O ihex $< $@

# Règle pour télécharger le programme sur le microcontrôleur
download: $(PROGRAM).hex
	$(AVRDUDE) $(AVRDUDE_FLAGS) -U flash:w:$<

# Règle pour nettoyer les fichiers générés
clean:
	rm -f $(PROGRAM).elf $(PROGRAM).hex

