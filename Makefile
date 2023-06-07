##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC    = 	main.c	\
			window.c	\
			check_colisions.c	\
			check_colision_txt.c	\
			open_map_txt_in_mem.c	\
			buttons.c \
			check_button_interaction.c	\
			move_planets.c \
			move_sprite_robot.c	\
			move_sprite_spaceship.c	\
			fight_game_funtion.c \
			my_put_nbr.c	\
			my_strcmp.c \
			my_str_to_word_array.c \
			utility_function_str_to_word_array.c \
			save_game.c \
			save_letters_game.c	\
			anime_fight.c	\
			load_game.c	\
			other_load_game.c \
			init/init_main_menu.c	\
			init/init_spaceship_choice.c  \
			init/init_space.c  \
			init/init_in_game_menu.c	\
			init/init_settings.c 	\
			init/init_struct.c	\
			init/init_game_over.c	\
			init/init_planet_orange.c	\
			init/init_rabbit_planet.c	\
			init/init_tropical_planet.c	\
			init/init_fight_button.c \
			init/init_inventory.c	\
			init/init_planets.c	\
			init/init_text.c	\
			init/init_player.c	\
			init/init_npcs.c	\
			init/init_ennemies.c	\
			init/init_text_ennemies.c	\
			init/init_other_text_ennemies.c	\
			init/init_on_start_game.c	\
			init/init_on_load_game.c	\
			init/init_fight_background.c	\
			init/init_on_fight.c	\
			init/init_equipments.c	\
			init/init_stats_ennemies.c \
			init/init_victory.c  		\
			init/init_labo.c	\
			init/init_throne.c	\
			init/init_end.c	\
			init/init_pablo_house.c 	\
			init/init_other_spaceship_choice.c \
			init/init_text_npcs.c	\
			display_scenes/display_scenes.c	\
			display_scenes/draw_main_menu.c	\
			display_scenes/draw_spaceship_choice.c  \
			display_scenes/draw_space.c	\
			display_scenes/draw_settings_scene.c	\
			display_scenes/draw_in_game_menu.c	\
			display_scenes/draw_orange_planet.c	\
			display_scenes/draw_element_in_orange_planet.c	\
			display_scenes/draw_rabbit_planet.c	\
			display_scenes/draw_tropical_planet.c	\
			display_scenes/draw_other_tropical_planet.c	\
			display_scenes/draw_game_over.c	\
			display_scenes/draw_inventory.c \
			display_scenes/draw_fight.c	\
			display_scenes/draw_victory.c 	\
			display_scenes/draw_labo.c	\
			display_scenes/draw_throne.c	\
			display_scenes/draw_other_throne.c	\
			display_scenes/draw_end_vic.c	\
			display_scenes/draw_defeat.c	\
			display_scenes/draw_text_orange_planet.c	\
			display_scenes/draw_level_up_menu.c	\
			display_scenes/draw_pablo_house.c	\
			interact_with_scenes/analyse_event.c \
			interact_with_scenes/interact_main_menu.c	\
			interact_with_scenes/main_menu_button_interaction.c	\
			interact_with_scenes/interact_spaceship_choice.c	\
			interact_with_scenes/choose_space_ship.c	\
			interact_with_scenes/interact_space.c	\
			interact_with_scenes/interact_settings.c	\
			interact_with_scenes/settings_button_interaction.c	\
			interact_with_scenes/interact_in_game_menu.c	\
			interact_with_scenes/in_game_menu_button_interaction.c	\
			interact_with_scenes/interact_orange_planet.c	\
			interact_with_scenes/interact_rabbit_planet.c	\
			interact_with_scenes/interact_tropical_planet.c	\
			interact_with_scenes/interact_game_over.c	\
			interact_with_scenes/interact_fight.c	\
			interact_with_scenes/interact_inventory.c	\
			interact_with_scenes/interact_other_inventory.c	\
			interact_with_scenes/interact_more_inventory.c	\
			interact_with_scenes/interact_victory.c	\
			interact_with_scenes/interact_labo.c	\
			interact_with_scenes/interact_throne.c	\
			interact_with_scenes/interact_end_vic.c	\
			interact_with_scenes/interact_level_up_menu.c	\
			interact_with_scenes/interact_end_def.c	\
			interact_with_scenes/interact_pablo_house.c	\
			interact_with_scenes/fight_ennemi_tropical_planet.c	\
			interact_with_scenes/fight_ennemi_rabbit_planet.c	\
			interact_with_scenes/fight_ennemi_orange_planet.c	\
			interact_with_scenes/who_is_talking_orange_planet.c	\
			interact_with_scenes/check_for_button_change.c	\
			include/scenes_array.c	\
			destroy/destroy_sprite.c	\
			destroy/destroy_text.c	\
			destroy/destroy_texture.c	\
			destroy/destroy.c	\
			destroy/destroy_structure.c	\
			destroy/destroy_struct_part_two.c	\

OBJ     =    $(SRC:.c=.o)

NAME	=	my_rpg

CFLAGS = -I./include #-Wall -Wshadow -Wextra -g

LDFLAGS = -lcsfml-graphics -lcsfml-system -lcsfml-audio -lm

PATH_TO_CHECKER = /home/${USER}/coding-style-checker

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(LDFLAGS) -I./include

clean:
		rm $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all

git:
	echo -e "*.a\n*.o\n*#*#*\n#*\n.#*\n*~\n" > .gitignore
	echo -e "vgcore*\n*.log\na.out\n.vscode*" >> .gitignore
	echo $(NAME) >> .gitignore

style:
	$(PATH_TO_CHECKER)/coding-style.sh . .
	grep -v MAJOR:C-O1 coding-style-reports.log || true
	rm -f coding-style-reports.log
