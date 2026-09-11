/**
 * Ledger Wallet Larp Tool - Node.js simulation sample
 * Simulation only: no real transaction execution.
 */

const queue = [
  {
    id: "tx-js-001",
    network: "BTC",
    from: "bc1q-ledger-sender-003",
    to: "bc1q-ledger-receiver-777",
    amount: 0.88,
    details: "Friend demo transfer",
  },
  {
    id: "tx-js-002",
    network: "ETH",
    from: "0xledgersender003",
    to: "0xledgerreceiver777",
    amount: 3.42,
    details: "Mock purchase simulation",
  },
];

const delay = (ms) => new Promise((resolve) => setTimeout(resolve, ms));

function renderProgressBar(percent) {
  const width = 30;
  const filled = Math.floor((percent / 100) * width);
  const bar = `${"#".repeat(filled)}${"-".repeat(width - filled)}`;
  process.stdout.write(`[${bar}] ${String(percent).padStart(3, " ")}%\r`);
}

async function run() {
  console.log("Ledger Wallet Larp Tool - JavaScript Simulation");
  console.log("Simulation only. No real funds move on chain.\n");

  for (const tx of queue) {
    console.log(`ID: ${tx.id}`);
    console.log(`Network: ${tx.network}`);
    console.log(`From: ${tx.from}`);
    console.log(`To: ${tx.to}`);
    console.log(`Amount: ${tx.amount}`);
    console.log(`Details: ${tx.details}`);
    console.log("Status: processing");

    for (let p = 0; p <= 100; p += 5) {
      renderProgressBar(p);
      await delay(60);
    }

    process.stdout.write("\n");
    console.log("Status: received\n");
  }
}

run().catch((error) => {
  console.error("Simulation error:", error);
  process.exit(1);
});