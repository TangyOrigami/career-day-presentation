#!/bin/bash

echo "Booting drivers"
sleep 2
echo "Starting"
sleep 2
echo "Hello! I'm a computer program."
sleep 2
read -p "What's your name? " user
sleep 2
printf "$user,"
sleep 2
echo " pick a number:"
sleep 2
colors=('!' '@' '#' '$' '%' '^' '&')
select color in "${colors[@]}"; do
    case $color in
        "!")
            user_color="Red"
            break
            ;;
        "@")
            user_color="Green"
            break
            ;;
        "#")
            user_color="Yellow"
            break
            ;;
        "$")
            user_color="Blue"
            break
            ;;
        "%")
            user_color="Magenta"
            break
            ;;
        "^")
            user_color="Cyan"
            break
            ;;
        "&")
            user_color="White"
            break
            ;;
        "Quit")
            exit
            ;;
        *) 
    esac
done

echo "Welcome to the Matrix..."
sleep 3

dir_handler() {
    cmatrix -C "$user_color" -M "$user"
}
dir_handler

