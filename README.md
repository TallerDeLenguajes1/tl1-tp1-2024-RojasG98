### __.gitignore__ ¿Por qué es conveniente incluirlo?¿Cuándo se debe hacer?¿Cómo configuraría el archivo .gitignore?

Es conveniente para evitar guardar archivos que no son necesarios en nuestro repositorio. Se utiliza cuando tenemos por ejemplo contraseñas o configuraciones de servidor, o en archivos generados por defecto por ejmplo.

### configurando nuestro __.gitignore__

Para crear un archivo __gitignore__ local, crea un archivo de texto y asígnale el nombre **".gitignore"** (recuerda incluir el . al principio). Luego, edita este archivo según sea necesario. Cada nueva línea debe incluir un archivo o carpeta adicional que quieras que Git lo ignore.
Las entradas de este archivo también pueden seguir un patrón coincidente:

- __*__ se utiliza como una coincidencia comodín.
- __/__ se usa para ignorar las rutas relativas al archivo __.gitignore__.
- __#__ es usado para agregar comentarios

Luego dentro del archivo agregamos aquellos archivos que queremos ignorar.