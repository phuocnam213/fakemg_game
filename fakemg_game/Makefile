# Danh sách file object (thêm tất cả các file .cpp có chứa class/namespace)
OBJS = main.o Bullet.o Entity.o Game.o LevelPart.o Menu.o Player.o RenderWindow.o Skeleton.o Tile.o Timer.o resource.o

# Trình biên dịch
CC = g++

# Trình biên dịch resource (.rc → .o)
WINDRES = windres

# Đường dẫn Include và Library
INCLUDE_PATHS = -IC:/Users/NGOCPC/Desktop/duloai/cpp/sdl2_complier/SDL2 \
                -IC:/Users/NGOCPC/Desktop/duloai/cpp/sdl2_complier/include \
                -IC:/Users/NGOCPC/Desktop/duloai/cpp/sdl2_complier/include/SDL2

LIBRARY_PATHS = -LC:/Users/NGOCPC/Desktop/duloai/cpp/sdl2_complier/lib

# Cờ biên dịch
COMPILER_FLAGS = -w -D SDL_MAIN_HANDLED

# Cờ liên kết SDL (phải đúng thứ tự)
LINKER_FLAGS = -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer #-lSDL_stdinc

# Tên file chạy
OBJ_NAME = game.exe

# Quy tắc chính để biên dịch
all: clean $(OBJ_NAME) shortcut

$(OBJ_NAME): $(OBJS)
	$(CC) $(OBJS) $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

# Biên dịch từng file .cpp thành .o
%.o: %.cpp
	$(CC) -c $< -o $@ $(INCLUDE_PATHS) $(COMPILER_FLAGS)

# Biên dịch file resource (.rc → .o)
resource.o: resource.rc
	$(WINDRES) resource.rc -O coff -o resource.o

# Tạo shortcut trên Desktop
shortcut: create_shortcut.ps1
	powershell -ExecutionPolicy Bypass -File create_shortcut.ps1

# Dọn dẹp file biên dịch cũ
clean:
	rm -f $(OBJS) $(OBJ_NAME) resource.res "$(USERPROFILE)/Desktop/Skibidi.lnk"

# Chạy chương trình
run:
	./$(OBJ_NAME)
