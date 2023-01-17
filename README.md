# assembly_with_c_calculator

Requisitos: Windows x64, MinGW y NASM;

## Comandos para compilar el código:
   
  <code>nasm -f win64 calculator.asm</code>
  
  <code>gcc main.c calculator.obj -o calc</code>

  
##  Comandos para interactuar desde la consola:
  
 <code>./calc [operation] [first value] [second value] </code>

### Examples:
  <code>./calc add 2 5</code>  -> 2 + 5 <br/>
  <code>./calc pow 2 3</code>  -> 2 ^ 3
  
Operaciones posibles:
  <code>add</code>
  <code>sub</code>
  <code>mul</code>
  <code>div</code>
  <code>pow</code>
