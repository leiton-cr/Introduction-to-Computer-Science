// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TODO: Copy header from input file to output file
    
    // Se crea el arreglo contenedor del header.
    uint8_t header[44];  

    // Se leen 44 bytes, en 1 bloque del input y se guardan en el header.
    fread  ( header, 44, 1, input );

    // Se toman los 44 bytes en 1 bloque del header y se escriben en el archivo.
    fwrite ( header, 44, 1, output );
    
    // Se crea un buffer para las lineas por leer.
    int16_t buffer;

    // Mientras el buffer no llegue al final.
    while (fread(&buffer, sizeof(int16_t),1,input))
    {
        // Multiplicamos por el factor.
        buffer *= factor;
        // Escribimos el buffer en el archivo.
        fwrite ( &buffer, sizeof(int16_t), 1, output );
    }
    


    // TODO: Read samples from input file and write updated data to output file

    // Close files
    fclose(input);
    fclose(output);
}
