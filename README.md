<h1 align="center">Diego Lewensztain Zelaya</h1>

Propuesta de base de datos

El fracaso financiero, la ineficiencia y la mala gestión representan serias amenazas para cualquier empresa. Uno de los principales culpables de estos problemas es la deficiente administración de la información. La gestión inadecuada de los datos no solo ralentiza el rendimiento laboral, sino que también conlleva impactos negativos tanto a corto como a largo plazo. Por tanto, como desarrollador, considero que una base de datos sólida es esencial para cualquier empresa que aspire a destacarse en su sector. Una infraestructura de bases de datos bien establecida no solo elimina los riesgos mencionados anteriormente, sino que también coloca a la empresa en una posición de liderazgo en comparación con aquellas que no han adoptado esta tecnología de manera efectiva.

TABLA COMPARATIVA DE BASE DE DATOS

![Screenshot 2024-06-11 001900](https://github.com/Diegolew/Test_Final/assets/159177910/8f38db60-3387-45de-8a1b-3b1c16cc0621)

PSEUDOCODIGO

    Crear una base de datos llamada database
    Imprimir "Bienvenido"
    Imprimir "Comandos disponibles: Add, Del, Find, Print"
    Imprimir "Ingrese un comando"

    Mientras haya entrada del usuario:
        Leer la proxima linea de entrada    
    
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

