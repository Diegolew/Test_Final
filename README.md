Crear un diccionario vacío llamado database

Imprimir "Bienvenido a la base de datos"
Imprimir "Comandos disponibles: Add, Del, Find, Print"
Imprimir "Ingrese un comando:"

Mientras haya entrada del usuario:
    Leer la próxima línea de entrada

    Si la línea está vacía, continuar al siguiente ciclo

    Dividir la línea en palabras usando el espacio como delimitador
    Asignar el primer elemento como "comando"
    Asignar los elementos restantes como "argumentos"

    Si el comando es igual a "Add":
        Si hay suficientes argumentos:
            Asignar el primer argumento como "fecha"
            Asignar el segundo argumento y los siguientes como "evento"
            Agregar el evento a la base de datos en la fecha especificada

    Si el comando es igual a "Del":
        Si hay suficientes argumentos:
            Asignar el primer argumento como "fecha"
            Si hay más de un argumento, asignar el segundo argumento como "evento"
            Si hay un evento especificado:
                Eliminar el evento de la fecha especificada en la base de datos
            De lo contrario:
                Eliminar todos los eventos de la fecha especificada en la base de datos

    Si el comando es igual a "Find":
        Si hay suficientes argumentos:
            Asignar el primer argumento como "fecha"
            Buscar y mostrar los eventos asociados con la fecha especificada

    Si el comando es igual a "Print":
        Mostrar todos los eventos almacenados en la base de datos, ordenados por fecha y evento

    Si el comando no es reconocido:
        Imprimir "Comando desconocido: COMANDO"

Fin del bucle
