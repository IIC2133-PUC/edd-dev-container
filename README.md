# EDD DevContainer

Repositorio inspirado en [edd-docker], pero que usa la especificación
de [Development Containers], para el desarrollo en contenedores.

Es útil cuando:
- Tienes (o puedes instalar) Docker para crear un entorno fácilmente
- Quieres usar un servicio en la nuve para correr código (como [Codespaces])

En resumen, un contenedor corre un entorno virtual para correr código.
Se diferencia de edd-docker el desarrollo completo ocurre dentro del
contenedor, en vez de correr docker unicamente para la ejecución.

[edd-docker]: https://github.com/IIC2133-PUC/edd-docker
[Development Containers]: https://containers.dev/
[Codespaces]: https://docs.github.com/en/codespaces/overview

## Guía

Esto asume que usas VSCode.

### Desarrollo local en Docker

- Instala la [extensión de Dev Containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers).
- Inicia Docker ([instálalo](https://www.docker.com/products/docker-desktop/) si no lo tienes).
- En el Remote Status Bar (ícono `><` de abajo a la izquierda) o en la
  paleta de comandos corre “Reopen in Container”.

### Desarrollo en la nube con GitHub Codespaces

Esto asume que tienes cuanta de GitHub.
Esto es un resumen de la [guía de GiHub sobre creación de codespaces][g].

[g]: https://docs.github.com/es/codespaces/developing-in-codespaces/creating-a-codespace-for-a-repository

- Sube los archivos de `.devcontainer` de este repositorio al que
  quieres crear un codespace, si es que estos no existen.
- Anda a la página del repositorio en GitHub
- Apreta <kbd><> Code</kbd>, pestaña Codespaces, Crear codespace

Luego podrás accesder al codespace desde:
- La pestaña de codespacees
- El [listado de Codespaces](https://github.com/codespaces)
- Desde VSCode local con la [extensión de Codespaces][ext]

[ext]: https://marketplace.visualstudio.com/items?itemName=GitHub.codespaces

**Importante**: Codespaces tiene un limite de uso. Para no alzanarlo, te recomendamos:

- Ir a la [configuración de codespaces de GitHub](https://github.com/settings/codespaces),
  y dejar un idle timeout bajo. Lo ideal es que te preocupes de apagar
  el contenedor cuando termines de usarlo, pero es mejor tener un tiempo
  para que se apague automáticamente.
- No dejar permanentemente archivos grandes, ya que cobra por Gbs
  de almacenamiento usado dividido tiempo.
- Tener la cuenta de GitHub Pro al [verificar que eres estudiante](https://education.github.com/discount_requests/application).
- Evita tener varios codespaces activos.
- Evita usar más CPUs. Este repo tiene configurado el mínimo.

Puedes ver el [uso de codespaces aquí](https://github.com/settings/billing).
Se estima que hay al entre 80h y 90h al mes de uso siguiendo esos consejos.
