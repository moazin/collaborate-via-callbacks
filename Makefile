all:
	gcc -c main.c -o build/main.o -I./libfreetype/include -I./svg_renderer_two/include
	gcc build/main.o -o build/main libfreetype/build/libfreetype.a svg_renderer_two/build/libsvgrenderertwo.a
