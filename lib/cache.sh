#!/bin/bash

function clear_cache() {
    sudo rm -r /var/cache/cpi/pkg/*
    sudo rm -r /var/cache/cpi/archive/*
}