#!/bin/bash
red=$(echo -e '\e[31m')
reset=$(echo -e '\033(B\033[m')

function import() {
    local file="./lib/${1}.sh"
    if [ -f "${file}" ]; then
        source "${file}"
    else
        echo -e "${red}Error:${reset} Cannot find library at: ${file}"
        exit 1
    fi
}

function language-file() {
    local file="./lang/${1}.sh"
    if [ -f "${file}" ]; then
        source "${file}"
    else
        echo -e "${red}Error:${reset} Cannot find language lib at: ${file}"
        exit 1
    fi
}

