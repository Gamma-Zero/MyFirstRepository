const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 1000;
const int SPRITE = 40;
const int FPS = 60;

SDL_Window* window = NULL;
SDL_Surface* screenSurface = NULL;
SDL_Renderer* render=NULL;
SDL_Texture* wall=NULL;
SDL_Texture* arrow=NULL;
TTF_Font *font=NULL;
vector<vector<bool>> maze;
vector<Bomb> bombs;
vector<bullet>bul;
vector<Enemy> en;
vector<int> ehit, pl;
vector<vector<int>>things(25, vector<int>(25));
int frame=0;
int eid=0;
int schedule=-1;

