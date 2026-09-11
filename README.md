# Ledger Wallet Larp Tool

Welcome to **Ledger Wallet Larp Tool** - a simulation-first platform for demonstrating and visualizing cryptocurrency wallet transaction flows.

This project is designed for workshops, product demos, and onboarding sessions where you need realistic wallet behavior without blockchain risk.

> Simulation only: no real wallets, no real asset transfers, no on-chain execution.

---

## Badges

![Status](https://img.shields.io/badge/status-active-success?style=flat-square)
![Mode](https://img.shields.io/badge/mode-simulation--only-orange?style=flat-square)
![React](https://img.shields.io/badge/react-19-61dafb?style=flat-square&logo=react&logoColor=white)
![TypeScript](https://img.shields.io/badge/typescript-5-3178c6?style=flat-square&logo=typescript&logoColor=white)
![Vite](https://img.shields.io/badge/vite-7-646cff?style=flat-square&logo=vite&logoColor=white)
![Tailwind](https://img.shields.io/badge/tailwindcss-4-38bdf8?style=flat-square&logo=tailwindcss&logoColor=white)
![Wallet UX](https://img.shields.io/badge/focus-wallet%20flow-10b981?style=flat-square)
![License](https://img.shields.io/badge/license-MIT-purple?style=flat-square)

---

## Download ZIP

<p align="center">
  <a href="https://github.com/<USERNAME>/<REPO>/archive/refs/heads/main.zip">
    <img src="https://img.shields.io/badge/Download%20ZIP-Main%20Branch-ff4d4f?style=for-the-badge&logo=github&logoColor=white" alt="Download ZIP" />
  </a>
</p>

---

## Key Features

- Simulate **Bitcoin (BTC)** and **Ethereum (ETH)** transactions.
- Real-time transaction visualization with animated progress lanes.
- Customizable transaction amount, sender, receiver, and flow details.
- Visual wallet preview with editable display values from a local admin panel.
- Dual theme support: **Dark / Light mode**.
- Keyboard-first control flow for fast live demos.
- Responsive UI for desktop and mobile.

### Keyboard Shortcuts

- `Ctrl + A`: Create a new transaction draft.
- `Ctrl + A` (again): Display/queue the created transaction.
- `Ctrl + X`: Update wallet addresses.
- `Ctrl + S`: Process last queued transaction or mark it received.

---

## Why This Project

Most crypto demos are either too shallow or too risky. Ledger Wallet Larp Tool sits in the middle:

- Clear enough for newcomers.
- Flexible enough for educators and product teams.
- Safe enough for public demos and workshops.

It helps explain how wallet-driven transactions move through a system without requiring real tokens, keys, or chain interaction.

---

## Tech Stack

- **Frontend:** React 19 + TypeScript
- **Build:** Vite
- **Styling:** Tailwind CSS v4
- **State:** React hooks
- **Deployment-ready:** GitHub Pages compatible

---

## Installation

```bash
git clone https://github.com/<USERNAME>/<REPO>.git
cd <REPO>
npm install
```

---

## Quick Start

```bash
npm run dev
```

Open the local URL printed in the terminal (usually `http://localhost:5173`).

---

## Usage Guide

1. Select network: BTC or ETH.
2. Set sender and receiver wallet addresses.
3. Enter amount and optional transaction details.
4. Press `Ctrl + A` to create a draft.
5. Press `Ctrl + A` again to display/queue the transaction.
6. Press `Ctrl + S` to process the latest queued transaction.
7. Press `Ctrl + S` again (while processing) to mark it as received.
8. Use `Ctrl + X` anytime to refresh wallet addresses.

---

## GitHub Pages -> ZIP -> Run Flow

1. Open the project landing page on GitHub Pages.
2. Click the ZIP button:
   `https://github.com/<USERNAME>/<REPO>/archive/refs/heads/main.zip`
3. Download and extract the archive.
4. Open terminal in extracted folder.
5. Install dependencies with `npm install`.
6. Configure any local defaults (addresses, demo details, theme preference).
7. Launch with `npm run dev`.
8. Start simulation in browser.

---

## Roadmap

- Scenario presets for common teaching cases.
- Wallet confirmation step emulation for device-like approval demos.
- Optional transaction fee and confirmation depth simulation.
- Export/import of simulation sessions in JSON.
- Shareable scenario links.
- Enhanced accessibility and localization support.

---

## Security / Ethics Notice

Ledger Wallet Larp Tool is intended for **educational, entertainment, and demonstration use only**.

- Do not present simulation output as real on-chain data.
- Do not input private keys, seed phrases, or sensitive production credentials.
- Users are responsible for legal and regulatory compliance in their jurisdiction.
- This project is not an official Ledger product and is not affiliated with Ledger SAS.
- Do not use this tool to mislead, impersonate, or financially deceive other people.

---

## Contributing

Contributions are welcome.

1. Fork the repository.
2. Create a feature branch.
3. Commit focused changes.
4. Open a pull request with clear context.

Please keep the project mission intact: simulation clarity, educational value, and safety.

---

## License

Licensed under the **MIT License**.
