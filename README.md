# Joãonette
Test suite based on Moulinette

# During an Eval
Simply enter the list main folder, and copy this command:
```sh
bash <(curl -Ls https://raw.githubusercontent.com/LucasKuhn/joaonette/main/grademe.sh)
```

# To check your own work
Clone the repo in your root:
```
cd ~
git clone https://github.com/LucasKuhn/joaonette.git
```
Call the `run.sh` script from a list to correct the entire list 
```
cd C02
LIST=C02 ~/joaonette/run.sh
``` 
Or enter a specific exercise to correct that exercise and get some extra input on what was your input VS the expected output 
```
cd C02
cd ex01
LIST=C02 ~/joaonette/run.sh
```

## Contributing 
This is a **work in progress**, I don't have tests for all exercises and there might be some things wrong. Feel free to make a pull request!
