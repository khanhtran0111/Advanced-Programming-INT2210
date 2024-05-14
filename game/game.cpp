#include "game.h"
#include "gameconfig.h"
#include "renderer.h"
#include "main.h"
#include "playing.h"
#include "menu.h"

#include <bits/stdc++.h>
#include <chrono>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>

#include<SDL_mixer.h>

Game::Game() {
    gameWindow = nullptr;
    backgroundMusic = nullptr;
}

Game::~Game() {
    if(appState != nullptr) delete appState;
    if(renderer != nullptr) delete renderer;
    if(backgroundMusic != nullptr) Mix_FreeMusic(backgroundMusic);
}

void Game::run() {
    is_running = true;
    if(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) == 0) {
        IMG_Init(IMG_INIT_PNG);
        TTF_Init();
        Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);//create sdl mixer
        gameWindow = SDL_CreateWindow("Tanks", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                       GameConfig::window_rect.w, GameConfig::window_rect.h, SDL_WINDOW_SHOWN);


        Renderer* renderer = new Renderer;
        renderer->loadTexture(gameWindow);
        renderer->loadFont();
        appState = new Menu;
        //load music
        backgroundMusic = Mix_LoadMUS("f1theme8bit.mp3");
        Mix_PlayMusic(backgroundMusic, -1);

        double FPS;
        int time1, time2, dt, fps_time = 0, fps_count = 0, delay = 15;
        time1 = clock();

        while(is_running) {
            time2 = clock();
            dt = time2 - time1;
            time1 = time2;

            if(appState->finished()) {
                AppState* newState = appState->nextState();
                delete appState;
                appState = newState;
            }
            if(appState == nullptr) break;

            Game::eventProcess();

            appState->update(dt);
            appState->draw(renderer);

            SDL_Delay(delay);
            fps_time += dt; fps_count++;
            if(fps_time > 200) {
                FPS = (double)fps_count / fps_time * 1000;
                if(FPS > 60) delay++;
                else if(delay > 0) delay--;
                fps_time = 0; fps_count = 0;
            }
        }
    }
    Mix_FreeMusic(backgroundMusic);
    Mix_CloseAudio();
    SDL_DestroyWindow(gameWindow);
    gameWindow = nullptr;
    IMG_Quit();
    SDL_Quit();
}

void Game::eventProcess() {
    SDL_Event event;
    SDL_PollEvent(&event);
    if(event.type == SDL_QUIT) {
        is_running = false;
    }
    appState->eventProcess(&event);
}
