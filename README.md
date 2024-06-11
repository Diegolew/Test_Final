<h1 align="center">Diego Lewensztain Zelaya</h1>

PROBLEMATICA

El fracaso financiero, la ineficiencia y la mala gestión representan serias amenazas para cualquier empresa. Uno de los principales culpables de estos problemas es la deficiente administración de la información. La gestión inadecuada de los datos no solo ralentiza el rendimiento laboral, sino que también conlleva impactos negativos tanto a corto como a largo plazo. Por tanto, como desarrollador, considero que una base de datos sólida es esencial para cualquier empresa que aspire a destacarse en su sector. Una infraestructura de bases de datos bien establecida no solo elimina los riesgos mencionados anteriormente, sino que también coloca a la empresa en una posición de liderazgo en comparación con aquellas que no han adoptado esta tecnología de manera efectiva.

TABLA COMPARATIVA DE BASE DE DATOS

![Screenshot 2024-06-11 001900](https://github.com/Diegolew/Test_Final/assets/159177910/8f38db60-3387-45de-8a1b-3b1c16cc0621)

JUSTIFICACION DEL PROYECTO

Interfaz Intuitiva: A diferencia de las opciones existentes como MySQL y PostgreSQL, que pueden resultar complicadas para usuarios no técnicos, nuestro nuevo sistema ofrece una interfaz amigable que simplifica la administración y consulta de eventos. Esto reduce la curva de aprendizaje y aumenta la productividad de los usuarios.

Implementación Ágil: Mientras que configurar MySQL y PostgreSQL puede ser un proceso complejo y MongoDB requiere cierto nivel de habilidad, nuestro sistema se destaca por su configuración sencilla y rápida. Esto agiliza la implementación y reduce los tiempos de espera para empezar a utilizar la base de datos.

Eficiencia en Consultas: Nuestro sistema ha sido optimizado específicamente para ofrecer consultas rápidas y eficientes, comparable a la eficiencia de PostgreSQL. Esto garantiza tiempos de respuesta rápidos y mejora la eficacia operativa, especialmente en casos de consultas frecuentes de eventos.

Integración Versátil: Diseñado para integrarse sin complicaciones con otros sistemas empresariales, nuestro sistema facilita la interoperabilidad y la armonización del entorno tecnológico. Esto simplifica la sincronización de datos y reduce la complejidad de la gestión de sistemas.

Ahorro de Costos: Nuestra solución ofrece una alternativa económicamente viable en comparación con otras bases de datos disponibles en el mercado, como MongoDB, que puede generar costos variables según el uso. Esto ayuda a reducir los gastos operativos y de mantenimiento para las empresas.

Escalabilidad Robusta: Al utilizar una base de datos clave-valor altamente escalable, nuestro sistema puede manejar grandes volúmenes de tráfico de manera eficiente. Esto lo convierte en la opción ideal para procesos como la gestión de sesiones en aplicaciones web, usuarios en juegos en línea y carritos de compra electrónica.

AUTOR DEL PROYECTO

Diego Lewensztain Zelaya




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

