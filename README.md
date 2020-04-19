#Projet feu tricolore

#Description du projet:

Nous avons choisi de réaliser un carrefour de feu tricolore connecté.
Dans un premier temps, la signalisation respecte les paramètres d'un feu tricolore classique. Cette signalisation peut être modifiée en fonction des points suivants:

- un capteur de luminosité permet de savoir à quel moment de la journée on se trouve (jour ou nuit). Si il faut jour, alors la signalisation reste "classique", sinon les feux passe tous en orange et clignotent.

- Un capteur infrarouge permet de savoir si un véhicule passe alors que sur sa voie le feu est au rouge. Il permet de faire passer les autres au rouge pour éviter le risque d'accident.

- lors du passage d'un véhicule, un capteur ultrason permet de connaitre sa vitesse. De plus, la vitesse est affichée sur un écran LCD.
Si le feu est au vert et que le véhicule respecte la limitation de vitesse alors la signalisation reste inchangée. Dans le cas où le véhicule dépasse cette limite, le feu passe au orange puis au rouge pour le faire ralentir. Il est possible de faire cela sans danger puisque la distance entre le capteur et le feu est grande, il faut laisser le temps au conducteur de repérer le feu et donc de ralentir.

- un bouton est à disposition des piétions leur permettant de demander le passage au vert de leur feu et de mettre au rouge les feux qui sont sur leur axe

- un dispositif est aussi disponible pour les non-voyant. En effet, à l'aide d'une télécommande, ils peuvent demander le passage au vert pour qu'il puisse traverser. Ils ont la réponse grâce au son émit par un buzzer. Il y a des sons distincts pour différencier le feu rouge et vert.

#Etat de l'art
- idée de passer le feu au rouge lorsqu'il y a une voiture qui roule au delà de la limite et de le passer au vert si le conducteur respecte la vitesse: 36 000 euros l'unité (en France dans le Morbihan)
https://auto.bfmtv.com/actualite/deux-commune-bretonnes-installent-des-feux-qui-recompensent-les-conducteurs-disciplines-1531080.html

- feux de signalisation automatique permettant de fluidifier le trafic testé à Boston (Etats-Unis). Permet aussi de moins polluer puisque les voitures sont moins à l'arrêt. Ce système peut aussi détécter si un cycliste ou un piéton est passé alors qu'ils n'auraient pas dû afin de faire passer au rouge le feu des voitures. 5 millions de dollars ont été déboursé pour les installer sur 39 intersections.
https://detours.canal.fr/dembouteillages-grace-a-feux-intelligents-sadaptent-trafic/

- feux de signalisation adapté au trafic routier: ex de Toronto (Canada), sur 60 feux d'intersection du centre-ville ont été installé ces feux, ce qui a permis de réduire de 40% les embouteillages et de diminuer le temps de trajet de 26%. Par croisement il faut compter entre 20 000 et 40 000 dollars mais les congestions du traffic routier sont estimés à 10 milliard de dollars de perte de productivité par an à Toronto.
Dans les prochaines années ces intersections "intelligentes" pourront aussi se connecter avec les radars et lidars des voitures autonomes.
http://www.slate.fr/life/79957/feux-signalisation-intelligents-trafic
https://atelier.bnpparibas/smart-city/article/intersections-connectees-cle-mobilite-devienne-intelligente

