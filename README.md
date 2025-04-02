[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)



## Configuración del archivo .gitignore

### ¿Qué es el archivo .gitignore?
El archivo `.gitignore` es un archivo de configuración para Git que le indica qué archivos o carpetas deben ser ignorados, es decir, no se incluirán en el repositorio. Esto es especialmente útil para evitar subir archivos temporales, de compilación o configuraciones locales que no aportan al código fuente.

### ¿Por qué es conveniente incluirlo?
- **Mantiene el repositorio limpio:** Evita la inclusión de archivos innecesarios que pueden aumentar el tamaño del repositorio.
- **Previene conflictos:** Al no incluir archivos específicos que varían entre ambientes (por ejemplo, configuraciones de IDE), se reducen posibles conflictos.
- **Seguridad:** Ayuda a evitar que se suban archivos sensibles o de configuración personal.

### ¿Cuándo se debe configurar?
Se recomienda configurar el `.gitignore` al inicio de un proyecto, antes de realizar los primeros commits. Si se añade después, es posible que ya se hayan subido archivos que luego se querrá eliminar del control de versiones.

### ¿Cómo se configura?
Para configurar el `.gitignore`, se debe crear (o modificar) un archivo llamado `.gitignore` en la raíz del proyecto. En este archivo se especifican, línea por línea, los patrones o nombres de archivos y carpetas que se desean ignorar.

Por ejemplo, para ignorar un archivo llamado `ignorado.txt`, se agrega la siguiente línea: ignorado.txt

## punto 3-g

- **Apartado 2:** Se muestra la dirección de memoria almacenada en el puntero (el valor de `p`), que es la dirección de la variable `x`.
- **Apartado 3:** Se muestra la dirección de memoria de la variable `x` (usando `&x`).

Ambos resultados son iguales porque el puntero `p` fue inicializado con la dirección de `x` (es decir, `p = &x`).

- **Apartado 4:** Se muestra la dirección de memoria del puntero `p` (usando `&p`).

Este valor es diferente, ya que se refiere a la ubicación en memoria donde se almacena el propio puntero, y no a la dirección de la variable `x`. Por lo tanto, la dirección del puntero (apartado 4) no es igual a la dirección de la variable `x` (apartados 2 y 3).
