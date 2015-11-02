#!/bin/bash
PREV_CHUNK=''
CURR_CHUNK=''
while IFS='' read -r line || [[ -n "$line" ]]; do
    if [ "$line" != '--' ]; then
        CURR_CHUNK=$(cat  <(echo "$CURR_CHUNK" ) <(echo "$line"))
    else
        diff  <(echo "$PREV_CHUNK" ) <(echo "$CURR_CHUNK")
        PREV_CHUNK=$CURR_CHUNK
        CURR_CHUNK=''
    fi
done < "$1"
