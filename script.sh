#!/bin/bash

# Obtener rama actual
CURRENT_BRANCH=$(git branch --show-current)

echo "Rama fuente: $CURRENT_BRANCH"

# Asegurarse de que esté actualizada
git pull origin $CURRENT_BRANCH

# ⚠️ Confirmación antes de hacer cambios destructivos
read -p "Esto hará reset --hard y push --force a las otras ramas. ¿Continuar? (y/n): " confirm
if [ "$confirm" != "y" ]; then
  echo "Abortado."
  exit 1
fi

# Lista fija de ramas del proyecto
BRANCHES=("main" "fchacon" "jbuitrago")

for branch in "${BRANCHES[@]}"; do
  if [ "$branch" != "$CURRENT_BRANCH" ]; then
    echo ">>> Reseteando $branch a $CURRENT_BRANCH"
    git checkout $branch
    git reset --hard $CURRENT_BRANCH
    git push origin $branch --force
  fi
done

# Volver a la rama original
git checkout $CURRENT_BRANCH

echo "✔ Todas las ramas fueron igualadas a $CURRENT_BRANCH"

