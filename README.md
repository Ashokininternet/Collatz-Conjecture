# 🔢 Collatz Conjecture Calculator

> *"Mathematics may not be ready for such problems."* — Paul Erdős

An interactive, browser-based calculator that visualizes the **Collatz Conjecture** (3n+1 problem) — one of the most famous unsolved problems in mathematics.

---

## 📐 What is the Collatz Conjecture?

Pick **any positive integer**. Apply two dead-simple rules repeatedly:

| Condition | Rule |
|-----------|------|
| `n` is **even** | `n = n / 2` |
| `n` is **odd** | `n = 3n + 1` |

**The Conjecture:** No matter what number you start with, you will *always* eventually reach **4** and go on a loop of **4**, **2** **1**.

Sounds trivial. Nobody has proven it. Ever.

---

## ✨ Features

- Enter any positive integer and instantly compute its Collatz sequence
- Displays the **full sequence** from your number down to `1`
- Shows **step count** to reach 1
- Clean, minimal UI — runs entirely in the browser, zero dependencies

---


> ⚠️ **Warning:** For very large inputs, the sequence can spike to enormous values before collapsing back to 1. Use with care for numbers above ~10 million in browser environments.

---

## Why Is This Unsolved?

- Computers have verified it for all numbers up to **2⁶⁸** (~295 quintillion)
- But "tested many cases" ≠ mathematical proof
- The sequence behavior is provably unpredictable — it's deeply tied to open problems in number theory

As Erdős put it: math simply isn't ready for it yet.

---

## 👤 Author

**Ashok** — [@Ashokininternet](https://github.com/Ashokininternet)

---

*"If you can't solve it, it doesn't mean it's unsolvable — it means math has to grow up first."*
