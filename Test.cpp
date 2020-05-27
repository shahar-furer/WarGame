//
// Created by Tehila on 27/05/2020.
//
#include <string>
#include <iostream>
#include "Board.hpp"
#include "doctest.h"
#include "Soldier.hpp"
using namespace WarGame;
TEST_CASE("1") {
    Board board = Board(2, 2);
            CHECK(!board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
            board[{0, 0}] = new Sniper(1);
            board[{0, 1}] = new Sniper(1);
            board[{1, 0}] = new Sniper(2);
            board[{1, 1}] = new Sniper(2);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
            //soldier in destenation point
            CHECK_THROWS(board.move(1, {0, 0}, Board::MoveDIR::Right));
            CHECK_THROWS(board.move(1, {0, 1}, Board::MoveDIR::Left));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
            CHECK_THROWS(board.move(2, {1, 0}, Board::MoveDIR::Right));
            CHECK_THROWS(board.move(2, {1, 1}, Board::MoveDIR::Left));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
            //soldier of the other player
            CHECK_THROWS(board.move(2, {0, 0}, Board::MoveDIR::Right));
            CHECK_THROWS(board.move(2, {0, 1}, Board::MoveDIR::Left));
            CHECK_THROWS(board.move(1, {1, 0}, Board::MoveDIR::Right));
            CHECK_THROWS(board.move(1, {1, 1}, Board::MoveDIR::Left));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));

}  //18


TEST_CASE("2") {
    Board board = Board(6, 6);
            CHECK(!board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
            board[{0, 0}] = new FootSoldier(1);
            board[{1, 1}] = new FootSoldier(1);
            board[{4, 4}] = new FootSoldier(1);
            CHECK(board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
            board[{5, 5}] = new FootSoldier(2);
            board[{2, 2}] = new FootSoldier(2);
            board[{3, 3}] = new FootSoldier(2);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
            board.move(2, {3, 3}, Board::MoveDIR::Right);
            CHECK_THROWS(board.move(1, {4, 4}, Board::MoveDIR::Up));
            // no soldier
            CHECK_THROWS(board.move(1, {0, 1}, Board::MoveDIR::Up));
            CHECK_THROWS(board.move(1, {0, 2}, Board::MoveDIR::Up));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
            CHECK_THROWS(board.move(1, {1, 2}, Board::MoveDIR::Up));
            CHECK_THROWS(board.move(1, {1, 3}, Board::MoveDIR::Up));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
            CHECK_THROWS(board.move(1, {4, 0}, Board::MoveDIR::Up));
            CHECK_THROWS(board.move(1, {4, 1}, Board::MoveDIR::Up));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
            CHECK_THROWS(board.move(1, {4, 2}, Board::MoveDIR::Up));
            board.move(1, {0, 0}, Board::MoveDIR::Right);
            board.move(1, {0, 0}, Board::MoveDIR::Right);
            board.move(2, {2, 2}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
            CHECK_THROWS(board.move(1, {1, 1}, Board::MoveDIR::Up));
            CHECK_THROWS(board.move(2, {1, 2}, Board::MoveDIR::Left));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
            CHECK_THROWS(board.move(2, {1, 0}, Board::MoveDIR::Right));
            CHECK_THROWS(board.move(1, {5, 5}, Board::MoveDIR::Left));
            CHECK_THROWS(board.move(2, {4, 4}, Board::MoveDIR::Right));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
            board.move(2, {3, 4}, Board::MoveDIR::Right);
            board.move(1, {4, 4}, Board::MoveDIR::Up);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
            CHECK_THROWS(board.move(1, {5, 5}, Board::MoveDIR::Up));
            CHECK_THROWS(board.move(1, {3, 5}, Board::MoveDIR::Left));
            CHECK_THROWS(board.move(2, {3, 4}, Board::MoveDIR::Right));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));

}


TEST_CASE("3") {
    Board board = Board(8, 8);
            CHECK(!board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
            CHECK_THROWS(board.move(1, {5, 5}, Board::MoveDIR::Up));
            CHECK_THROWS(board.move(1, {3, 5}, Board::MoveDIR::Left));
            CHECK(!board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
            CHECK_THROWS(board.move(2, {3, 4}, Board::MoveDIR::Right));
            CHECK_THROWS(board.move(1, {4, 4}, Board::MoveDIR::Up));
            CHECK(!board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
            CHECK_THROWS(board.move(1, {2, 1}, Board::MoveDIR::Left));
            CHECK_THROWS(board.move(2, {2, 2}, Board::MoveDIR::Right));
            CHECK(!board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
    board[{0, 0}] = new FootSoldier(1);
    board[{1, 1}] = new FootSoldier(1);
    board[{2, 2}] = new FootSoldier(1);
    board[{3, 3}] = new FootSoldier(1);
            CHECK(board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
    board[{4, 4}] = new FootSoldier(2);
    board[{5, 5}] = new FootSoldier(2);
    board[{6, 6}] = new FootSoldier(2);
    board[{7, 7}] = new FootSoldier(2);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
            CHECK_THROWS(board.move(1, {7, 7}, Board::MoveDIR::Up));
            CHECK_THROWS(board.move(1, {6, 6}, Board::MoveDIR::Left));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
            CHECK_THROWS(board.move(1, {5, 5}, Board::MoveDIR::Left));
            CHECK_THROWS(board.move(1, {4, 4}, Board::MoveDIR::Left));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
            CHECK_THROWS(board.move(2, {1, 1}, Board::MoveDIR::Up));
            CHECK_THROWS(board.move(2, {0, 0}, Board::MoveDIR::Left));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
            CHECK_THROWS(board.move(2, {2, 2}, Board::MoveDIR::Left));
            CHECK_THROWS(board.move(2, {3, 3}, Board::MoveDIR::Left));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2)); //89


    CHECK_THROWS(board.move(2, {0, 1}, Board::MoveDIR::Left));
    CHECK_THROWS(board.move(2, {0, 2}, Board::MoveDIR::Left));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    CHECK_THROWS(board.move(2, {0, 3}, Board::MoveDIR::Left));
    CHECK_THROWS(board.move(2, {0, 4}, Board::MoveDIR::Left));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    CHECK_THROWS(board.move(2, {1, 0}, Board::MoveDIR::Left));
    CHECK_THROWS(board.move(2, {1, 3}, Board::MoveDIR::Left));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    CHECK_THROWS(board.move(2, {1, 4}, Board::MoveDIR::Left));
    CHECK_THROWS(board.move(2, {1, 5}, Board::MoveDIR::Left));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    CHECK_THROWS(board.move(2, {2, 4}, Board::MoveDIR::Left));
    CHECK_THROWS(board.move(2, {3, 5}, Board::MoveDIR::Left));
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    CHECK_THROWS(board.move(2, {3, 6}, Board::MoveDIR::Left));
    CHECK_THROWS(board.move(2, {3, 7}, Board::MoveDIR::Left));

}
