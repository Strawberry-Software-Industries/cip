#!/bin/bash

black=$(echo -e '\e[30m')
red=$(echo -e '\e[31m')
green=$(echo -e '\e[32m')
brown=$(echo -e '\e[33m')
blue=$(echo -e '\e[34m')
purple=$(echo -e '\e[35m')
cyan=$(echo -e '\033[1m\e[36m')
yellow=$(echo -e '\e[1;33m')
white=$(echo -e '\e[1;37m')
dark_gray=$(echo -e '\e[1;30m')
light_red=$(echo -e '\e[1;31m')
light_green=$(echo -e '\e[1;32m')
light_blue=$(echo -e '\e[1;34m')
light_purple=$(echo -e '\e[1;35m')
light_cyan=$(echo -e '\e[1;36m')
light_gray=$(echo -e '\e[37m')
orange=$(echo -e '\e[38;5;202m')
light_orange=$(echo -e '\e[38;5;214m')
bold=$(echo -e '\033[1m')
reset=$(echo -e '\033(B\033[m')
underscore=$(echo -e '\033[4m')


function import() {
    local file="./lib/${1}.sh"
    if [ -f "${file}" ]; then
        source "${file}"
    else
        echo -e "${red}Error:${reset} Cannot find library at: ${file}"
        exit 1
    fi
}

import "sql"

function clear_cache() {
    sudo rm -r /var/cache/cpi/pkg/*
    sudo rm -r /var/cache/cpi/archive/*
}

if [[ $1 == "install" ]]; then
    if [[ $2 == "" ]]; then
        echo -e "${red}E:${reset} Fehlende URL zum installieren"
        exit
    fi
    clear_cache &> /dev/null
    wget "https://github.com/Strawberry-Software-Industries/cip/raw/main/$2" -O "/var/cache/cpi/archive/$2" &> /dev/null
    unzip -q "/var/cache/cpi/archive/$2" -d /var/cache/cpi/pkg/
    cp -r /var/cache/cpi/pkg/* /

elif [[ $1 == "setup" ]]; then
    sudo mkdir -p /var/cache/cpi/pkg/
    sudo mkdir -p /var/cache/cpi/archive/

elif [[ $1 == "cache-clean" ]]; then
    clear_cache

elif [[ $1 == "remove" ]]; then
    sudo rm -rf "/usr/include/$2"

elif [[ $1 == "sql" ]]; then
    conn

fi