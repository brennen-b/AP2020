#!/bin/sh
PORT="$*"
PID="mypipe-$$"
MYPATH="/home/jae/cs3157-pub/bin/mdb-lookup-cs3157"

on_ctrl_c(){
	echo "Ignoring Ctrl-C"
}

mkfifo "$PID"

trap on_ctrl_c INT
cat "$PID" | nc -l "$PORT" | "$MYPATH" > "$PID"

rm "$PID"
