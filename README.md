<h1 align="center">Diego Lewensztain Zelaya</h1>

## PROBLEMATICA

El fracaso financiero, la ineficiencia y la mala gestión representan serias amenazas para cualquier empresa. Uno de los principales culpables de estos problemas es la deficiente administración de la información. La gestión inadecuada de los datos no solo ralentiza el rendimiento laboral, sino que también conlleva impactos negativos tanto a corto como a largo plazo. Por tanto, como desarrollador, considero que una base de datos sólida es esencial para cualquier empresa que aspire a destacarse en su sector. Una infraestructura de bases de datos bien establecida no solo elimina los riesgos mencionados anteriormente, sino que también coloca a la empresa en una posición de liderazgo en comparación con aquellas que no han adoptado esta tecnología de manera efectiva.

## TABLA COMPARATIVA DE BASE DE DATOS

![Screenshot 2024-06-11 001900](https://github.com/Diegolew/Test_Final/assets/159177910/8f38db60-3387-45de-8a1b-3b1c16cc0621)

## JUSTIFICACION DEL PROYECTO

### Interfaz Amigable: 

Nuestro sistema ofrece una interfaz intuitiva que simplifica la gestión y consulta de eventos, reduciendo la curva de aprendizaje y mejorando la productividad.

### Implementación Ágil: 

Con una configuración sencilla y rápida, nuestro sistema agiliza la implementación y reduce los tiempos de espera para comenzar a utilizar la base de datos.

### Consultas Eficientes: 

Optimizado para ofrecer consultas rápidas y eficientes, garantizando tiempos de respuesta ágiles y mejorando la eficacia operativa.

### Integración Sencilla: 

Diseñado para integrarse fácilmente con otros sistemas empresariales, simplifica la interoperabilidad y la gestión de sistemas, facilitando la sincronización de datos.

### Ahorro de Costos: 

Ofrecemos una alternativa económica en comparación con otras bases de datos, lo que ayuda a reducir los gastos operativos y de mantenimiento para las empresas.

### Escalabilidad Eficiente: 

Utilizando una base de datos clave-valor altamente escalable, nuestro sistema maneja grandes volúmenes de tráfico de manera eficiente, siendo ideal para diversos procesos empresariales.


## FUNCIONES


### Función Add:

Lo que hace: Agrega un nuevo evento a la base de datos asociado a una fecha específica. Recibe como parámetros la fecha (dato) y el evento a agregar (evento), y lo inserta en la estructura de datos de la base de datos.

### Función DeleteEvent:

Lo que hace: Elimina un evento específico de la base de datos que está asociado a una fecha dada. Recibe como parámetros la fecha (dato) y el evento a eliminar (evento). Busca el evento dentro de la lista de eventos asociados a esa fecha y lo elimina.

### Función DeleteDate:

Lo que hace: Borra todos los eventos asociados a una fecha específica de la base de datos. Recibe como parámetro la fecha (dato) que se desea eliminar. Simplemente elimina la entrada correspondiente a esa fecha en la estructura de datos de la base de datos.

### Función Find:

Lo que hace: Busca y muestra todos los eventos asociados a una fecha dada en la base de datos. Recibe como parámetro la fecha (dato) que se desea buscar. Verifica si la fecha existe en la base de datos y, si es así, imprime todos los eventos asociados a esa fecha.

### Función Print:

Lo que hace: Imprime todos los eventos almacenados en la base de datos en orden cronológico, es decir, ordenados primero por fecha y luego por evento. Itera sobre todas las fechas en la base de datos, ordena los eventos asociados a cada fecha y los imprime en orden.


## PSEUDOCODIGO

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

