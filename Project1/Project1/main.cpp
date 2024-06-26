#include <iostream>
#include <SFML/Graphics.hpp>
#include <windows.h>
//#include <algorithm>
//#include <vector>
using namespace sf;
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    RenderWindow win(VideoMode(512, 512), "Game 15");

    //int arr[16]{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
    //random_shuffle(arr[0], arr[15]);
    //for (int i = 0; i < 16; i++) {
    //    int r = rand() % 16;
    //    swap(arr[i], arr[r]);
    //}

    //for (int i = 0; i < 16; i++) {
    //    cout << arr[i] << " ";
    //}
    //cout << endl;

    Texture icons;
    icons.loadFromFile("D:/Users/Тимур/source/repos/Project1/Project1/icons/game.png");
    int iconSize = 125;
    int doubleArr[6][6] = { 0 };
    Sprite sprite[17];
    Sprite s(icons);
    int n = 0;
    //int c = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            n++;
            sprite[n].setTexture(icons);
            sprite[n].setTextureRect(IntRect(i * iconSize, j * iconSize, iconSize, iconSize));
            doubleArr[i + 1][j + 1] = n;
        }
    }

    /*for (int i = 1; i < 17; i++) {
        int r = rand() % 16;
        swap(arr[i], arr[r]);
    }*/

    //random_shuffle(sprite[1], sprite[16]);




    while (win.isOpen())
    {
        Event ev;
        while (win.pollEvent(ev))
        {
            if (ev.type == Event::Closed)
                win.close();
            if (ev.type = Event::MouseButtonPressed)
            {
                if (ev.key.code == Mouse::Left) {
                    Vector2i position = Mouse::getPosition(win);

                    int x = position.x / iconSize + 1;
                    int y = position.y / iconSize + 1;

                    int dx = 0;
                    int dy = 0;

                    if (doubleArr[x + 1][y] == 16
                        )
                    {
                        dx = 1;
                        dy = 0;
                    }
                    if (doubleArr[x - 1][y] == 16)
                    {
                        dx = -1;
                        dy = 0;
                    }
                    if (doubleArr[x][y + 1] == 16)
                    {
                        dx = 0;
                        dy = 1;
                    }
                    if (doubleArr[x][y - 1] == 16)
                    {
                        dx = 0;
                        dy = -1;
                    }
                    n = doubleArr[x][y];
                    doubleArr[x][y] = 16;
                    doubleArr[x + dx][y + dy] = n;
                }
            }
        }



        win.clear(Color::White);
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                n = doubleArr[i + 1][j + 1];
                sprite[n].setPosition(i * iconSize, j * iconSize);
                win.draw(sprite[n]);
            }
        }
        win.display();
    }
}