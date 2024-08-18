#!/bin/bash

ifconfig -a | grep ether | sed "s/ether//g" | sed "s/txqueuelen//g" | sed "s/(Ethernet)//g" |sed "s/  *//g" 
