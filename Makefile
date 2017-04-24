main:main.o multi.o
        gcc main.o multi.o -o main
main.o:main.c
        gcc -c main.c
multi.o:multi.c
        gcc -c multi.c
    
clean
        rm main *.o
