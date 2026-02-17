#!/bin/bash
# Script para mergear main en todas las ramas locales automáticamente

# Asegúrate de estar en main y actualizado
git checkout main
git pull origin main

for branch in $(git branch | grep -v "main" | sed 's/*//'); do
  echo ">>> Reseteando $branch a main"
  git checkout $branch
  git reset --hard main
  git push origin $branch --force
done

# Volver a main al final
git checkout main
