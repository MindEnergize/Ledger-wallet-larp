using System;
using System.Collections.Generic;
using System.Threading;

public record Transaction(
    string Id,
    string Network,
    string From,
    string To,
    decimal Amount,
    string Details
);

public class Program
{
    private static void RenderProgressBar(int percent)
    {
        const int width = 30;
        int filled = (percent * width) / 100;
        string bar = new string('#', filled) + new string('-', width - filled);
        Console.Write($"[{bar}] {percent,3}%\r");
    }

    public static void Main()
    {
        var queue = new List<Transaction>
        {
            new("tx-cs-001", "BTC", "bc1q-ledger-sender-002", "bc1q-ledger-receiver-552", 0.49m,
                "Classroom transaction flow"),
            new("tx-cs-002", "ETH", "0xledgersender002", "0xledgerreceiver552", 2.10m,
                "Demo payroll simulation")
        };

        Console.WriteLine("Ledger Wallet Larp Tool - C# Console Simulation");
        Console.WriteLine("Simulation only. No real blockchain transfer happens.");
        Console.WriteLine();

        foreach (var tx in queue)
        {
            Console.WriteLine($"ID: {tx.Id}");
            Console.WriteLine($"Network: {tx.Network}");
            Console.WriteLine($"From: {tx.From}");
            Console.WriteLine($"To: {tx.To}");
            Console.WriteLine($"Amount: {tx.Amount}");
            Console.WriteLine($"Details: {tx.Details}");
            Console.WriteLine("Status: processing");

            for (int p = 0; p <= 100; p += 4)
            {
                RenderProgressBar(p);
                Thread.Sleep(70);
            }

            Console.WriteLine();
            Console.WriteLine("Status: received");
            Console.WriteLine();
        }
    }
}