# VSCODE Devcontainer for Arduino

This is a self-contained environment that allows compiling and uploading
Arduino source code without having to install anything on your computer, beside VSCode and Docker. It uses the VSCode's devcontainer built-in feature.

## Licensing
The included Docker file, the devcontainer.json file and the hello-world sample are licensed under the MIT License. All other files are governed by their respective licenses.

## How it works
This devcontainer is based on Microsoft's CPP devcontainer using Debian and contains the required extensions to facilitate Arduino development.  
The devcontainer is configured to launch the container with `--privileged` options. This is required to access the serial ports from inside the Docker container. If your feel unsafe about that, you can remove this option and add an UDEV rule to configure the file permissions on the Arduino device automatically.

## Environment
This devcontainer has been tested with the following environment:
- Fedora 36
- Docker 20.10.17
- VSCode 1.69.2

## How to use the devcontainer
1) Open the project in VSCode: `File->Open Folder`
2) Reopen it in devcontainer:
   1)  `CTRL+SHIFT+P` to open the command pallet
   2)  `Remote-Containers: Reopen in container`

## Inside the devcontainer
Most of the option below are also available from the status bar
### Selecting the Board
From the command pallet, type `Arduino: Board config`
### Opening the serial monitor
From the command pallet, type `Arduino: Open serial monitor`
### Opening the library manager
From the command pallet, type `Arduino: Library manager`
### Working with the code
`ALT-CTRL-R`: Compile only  
`ALT-CTRL-U`: Compile and upload to the Arduino device

For more information about the Arduino extension for VSCode, consult [this page](https://marketplace.visualstudio.com/items?itemName=vsciot-vscode.vscode-arduino).

## External librairies
If you need to install external librairies, use the `arduino-cli lib install` command. See the end of the Docker files for more information.
