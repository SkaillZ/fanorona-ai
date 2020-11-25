#include <iostream>
#include <memory>
#include <string>
#include <algorithm>

#include "Board.h"
#include "Client.h"
#include "LocalClient.h"

int main()
{
  // TODO: get Board Mode from arguments, also server to connect (or local?)
  auto board = std::make_shared<Board>(
    EMode::AI); // our game board -> gets filled by server messages, calculates next position...

  // Client client("10.64.99.107", 4455); // Lars' Fanorona Server
  // Client client("127.0.0.1", 8888); // Test server
  // Client client("178.32.219.65", 4455); // Kajetan Test server - alpaga.hammerle.me
  LocalClient client = LocalClient();
  client.SetBoard(board);
  client.Start();


  return 0;
}
