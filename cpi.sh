#!/bin/bash
source ./lib/basic.sh

import "cache"
import "colors"

if [[ $1 == "install" ]]; then
    if [[ $2 == "" ]]; then
        echo -e "${red}E:${reset} Missing URL to install"
        exit
    fi
    if [[ $(id -u) != 0  ]]; then
        echo -e "${red}E:${reset} Missing permission to install the package! Please run as root."
        exit
    fi
    clear_cache &> /dev/null
    echo -e "${yellow}[!]${reset} The package will download..."
    wget "https://github.com/Strawberry-Software-Industries/cip/raw/main/$2.cip" -O "/var/cache/cpi/archive/$2.cip" &> /dev/null
    unzip -q "/var/cache/cpi/archive/$2.cip" -d /var/cache/cpi/pkg/
    cp -r /var/cache/cpi/pkg/* /

elif [[ $1 == "setup" ]]; then
    if [[ $(id -u) != 0  ]]; then
        echo -e "${red}E:${reset} Missing permission to setup cpi! Please run as root."
        exit
    fi
    mkdir -p /var/cache/cpi/pkg/
    mkdir -p /var/cache/cpi/archive/

elif [[ $1 == "cache-clean" ]]; then
    if [[ $(id -u) != 0  ]]; then
        echo -e "${red}E:${reset} Missing permission to clear cache! Please run as root."
        exit
    fi
    clear_cache

elif [[ $1 == "remove" ]]; then
    if [[ $(id -u) != 0  ]]; then
        echo -e "${red}E:${reset} Missing permission to remove the package! Please run as root."
        exit
    fi
    sudo rm -rf "/usr/include/$2"

elif [[ $1 == "sql" ]]; then
    conn

fi