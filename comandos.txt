#Inicialmente se configuran el primer usuario con su respectivo correo
git config --global user.name "Nombre"
git config --global user.email correo@email.com

#Posteriormente se inicia el repositorio en la carpeta donde se quiere iniciar
git init

#Con echo "texto" >> archivo.txt se crea el archivo.txt y se escribe el texto indica en el
echo "texto de prueba" >> primer_archivo.txt

#Se agrega el archivo que se acaba de crear
git add primer_archivo.txt
git commit -m "Se añade primer_archivo.txt"

#Se sube el archivo a un repositorio de github
git push link_repositorio_github.html master

#Se crea la rama pruebas y se accede a ella
git checkout -b pruebas
echo "texto de prueba 2" >> segundo_archivo.txt

#git add . añade todos los archivos de la carpeta actual
git add .
git commit -m "Se añade archivo 2 a la rama de pruebas"

#Se suben los cambios al repositirio de pruebas
git push link_repositorio_github.html pruebas
