#!/bin/bash

find . -type f -name "*.sh" |cut -c3-| rev |cut -c4-| rev
