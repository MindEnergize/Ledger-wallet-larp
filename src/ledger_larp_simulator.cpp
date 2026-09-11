#include <chrono>
#include <iomanip>
#include <iostream>
#include <string>
#include <thread>
#include <vector>

struct Transaction {
  std::string id;
  std::string network;
  std::string from;
  std::string to;
  double amount;
  std::string details;
};

void renderProgressBar(int percent) {
  const int width = 30;
  int filled = (percent * width) / 100;

  std::cout << "[";
  for (int i = 0; i < width; ++i) {
    std::cout << (i < filled ? "#" : "-");
  }
  std::cout << "] " << std::setw(3) << percent << "%\r" << std::flush;
}

int main() {
  std::vector<Transaction> queue = {
      {"tx-cpp-001", "BTC", "bc1q-ledger-sender-001", "bc1q-ledger-receiver-998", 0.12,
       "Training transfer simulation"},
      {"tx-cpp-002", "ETH", "0xledgersender001", "0xledgerreceiver998", 1.75,
       "Demo payout simulation"},
  };

  std::cout << "Ledger Wallet Larp Tool - C++ Console Simulation\n";
  std::cout << "Simulation only. No real transactions are sent.\n\n";

  for (const auto &tx : queue) {
    std::cout << "ID: " << tx.id << "\n";
    std::cout << "Network: " << tx.network << "\n";
    std::cout << "From: " << tx.from << "\n";
    std::cout << "To: " << tx.to << "\n";
    std::cout << "Amount: " << tx.amount << "\n";
    std::cout << "Details: " << tx.details << "\n";
    std::cout << "Status: processing\n";

    for (int p = 0; p <= 100; p += 5) {
      renderProgressBar(p);
      std::this_thread::sleep_for(std::chrono::milliseconds(80));
    }

    std::cout << "\nStatus: received\n\n";
  }

  return 0;
}