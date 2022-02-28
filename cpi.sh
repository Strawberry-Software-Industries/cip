#!/bin/bash
source ./lib/basic.sh

import "cache"
import "colors"

if [[ $1 == "install" ]]; then
    if [[ $2 == "" ]]; then
        echo -e "${red}E:${reset} Missing Package to install"
        exit
    fi
    if [[ $(id -u) != 0  ]]; then
        echo -e "${red}E:${reset} Missing permission to install the package! Please run as root."
        exit
    fi
    clear_cache &> /dev/null
    if [ -f "/var/cache/cpi/installed/$2" ]; then
        echo "${red}[!]${reset} Package $2 is already installed."
        exit
    fi
    echo -e "${yellow}[!]${reset} cpi will now download and install $2. Continue? [Yes/No]"
    read -r -ep "" -i "" AGREE_PKG_INSTALL
    if [[ $AGREE_PKG_INSTALL = "Yes" ]] || [[ $AGREE_PKG_INSTALL = "Y" ]] || [[ $AGREE_PKG_INSTALL = "yes" ]] || [[ $AGREE_PKG_INSTALL = "y" ]]; then
        touch "/var/cache/cpi/installed/$2"
        echo "pkg_installed" > "/var/cache/cpi/installed/$2"
        echo -e "${green}[*]${reset} Downloading $2..."
        wget "https://github.com/Strawberry-Software-Industries/cip/raw/main/$2.cip" -O "/var/cache/cpi/archive/$2.cip" &> /dev/null
        echo -e "${green}[*]${reset} Extracting..."
        unzip -q "/var/cache/cpi/archive/$2.cip" -d /var/cache/cpi/pkg/
        echo -e "${green}[*]${reset} Copying Source Files..."
        cp -r /var/cache/cpi/pkg/* /
        echo -e "${green}Finsished${reset}"
        sleep 1       
    fi


elif [[ $1 == "setup" ]]; then
    if [[ $(id -u) != 0  ]]; then
        echo -e "${red}E:${reset} Missing permission to setup cpi! Please run as root."
        exit
    fi
    mkdir -p /var/cache/cpi/pkg/
    mkdir -p /var/cache/cpi/installed/
    mkdir -p /var/cache/cpi/archive/


elif [[ $1 == "cache-clean" ]]; then
    if [[ $(id -u) != 0  ]]; then
        echo -e "${red}E:${reset} Missing permission to clear cache! Please run as root."
        exit
    fi
    clear_cache


elif [[ $1 == "remove" ]]; then

    if [[ $2 == "" ]]; then
        echo -e "${red}E:${reset} Missing Package to remove"
        exit
    fi

    if [ ! -d "/usr/include/$2" ]; then
        echo "${red}[!]${reset} Package $2 is not installed."
        exit
    fi


    if [[ $(id -u) != 0  ]]; then
        echo -e "${red}E:${reset} Missing permission to remove the package! Please run as root."
        exit
    fi
    echo -e "${yellow}[!]${reset} cpi will now remove $2. Continue? [Yes/No]"
    read -r -ep "" -i "" AGREE_PKG_REMOVE
    if [[ $AGREE_PKG_REMOVE = "Yes" ]] || [[ $AGREE_PKG_REMOVE = "Y" ]] || [[ $AGREE_PKG_REMOVE = "yes" ]] || [[ $AGREE_PKG_REMOVE = "y" ]]; then
        echo -e "${green}[*]${reset} Removing $2..."
        sudo rm /var/cache/cpi/installed/$2*
        rm -rf "/usr/include/$2"
        echo -e "${green}Finsished${reset}"
        sleep 1       
    fi

    


elif [[ $1 == "sql" ]]; then
    conn

else 
echo "cpi"
fi
