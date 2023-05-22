# Projet Système Embarqué

Membres:

Damien Clairet

Gauthier Marette

## Description

Nous proposons un vérificateur de mot de passe. La carte comporterait 3 LED correspondant à 3 essais, si l'essai est mauvais la led est rouge et on passe à un 
nouvel essai, si l'essai est bon ça passe au vert et ensuite l'état est remis à 0. Au bout de 3 essais ratés tout est au rouge et est remis à 0 ensuite.

## Contre-proposition

Pas de difficulté sur la programmation de la carte. Le code doit être programmé dans le périphérique USB. Ce périphérique USB doit comporter une interface 
avec un point d'accès IN et un point d'accès OUT. Le point d'accès OUT est utilisée pour envoyer le code proposé vers la carte, le point d'accès IN est 
utilisée pour lire la réponse de la carte (code correct ou non). Le programme sur PC utilisera la bibliothèque libusb-1.0.

