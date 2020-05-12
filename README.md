# Projet carrefour de feux tricolores

Projet réalisé par Faïza Berhili et Emiliano Boussac.
Vous pouvez trouver la vidéo [ici](https://youtu.be/36WNWxsm3vQ).

<h2>Description du projet</h2>

Nous avons choisi de réaliser un carrefour de feux tricolores connecté.
Dans un premier temps, la signalisation respecte les paramètres d'un feu tricolore classique. Cette signalisation peut être modifiée en fonction des points suivants:

- un capteur de luminosité permet de savoir à quel moment de la journée on se trouve (jour ou nuit). S'il fait jour, alors la signalisation reste "standard", sinon les feux passent tous en orange et clignotent.

- un capteur infrarouge permet de savoir si un véhicule passe alors que sur sa voie le feu est au rouge. Si c'est le cas, il permet de faire passer les autres feux au rouge pour éviter le risque d'accident et une led s'allume.

- lors du passage d'un véhicule, un capteur ultrason permet de connaitre sa vitesse. De plus, la vitesse est affichée sur un écran LCD.
Si le feu est au vert et que le véhicule respecte la limitation de vitesse alors la signalisation reste inchangée. Dans le cas où le véhicule dépasse cette limite, le feu passe au orange puis au rouge pour le faire ralentir. Il est possible de faire cela sans danger puisque la distance entre le capteur et le feu est grande, il faut laisser le temps au conducteur de repérer le feu et donc de ralentir.

- un bouton est à disposition des piétions leur permettant de demander le passage au vert de leur feu et de mettre au rouge les feux qui sont sur leur axe

- un dispositif est aussi disponible pour les non-voyants. En effet, à l'aide d'une télécommande, ils peuvent demander le passage au vert pour qu'il puisse traverser. Ils ont la réponse grâce au son émit par un buzzer. Il y a des sons distincts pour différencier le feu rouge et vert.

<h2>Etat de l'art</h2>

Idée de passer le feu au rouge lorsqu'il y a une voiture qui roule au delà de la limite et de le passer au vert si le conducteur respecte la vitesse: 36 000 euros l'unité (en France dans le Morbihan)

https://auto.bfmtv.com/actualite/deux-commune-bretonnes-installent-des-feux-qui-recompensent-les-conducteurs-disciplines-1531080.html

Feux de signalisation automatique permettant de fluidifier le trafic testé à Boston (Etats-Unis). Permet aussi de moins polluer puisque les voitures sont moins à l'arrêt. Ce système peut aussi détécter si un cycliste ou un piéton est passé alors qu'ils n'auraient pas dû afin de faire passer au rouge le feu des voitures. 5 millions de dollars ont été déboursé pour les installer sur 39 intersections.

https://detours.canal.fr/dembouteillages-grace-a-feux-intelligents-sadaptent-trafic/

Feux de signalisation adapté au trafic routier: ex de Toronto (Canada), sur 60 feux d'intersection du centre-ville ont été installé ces feux, ce qui a permis de réduire de 40% les embouteillages et de diminuer le temps de trajet de 26%. Par croisement il faut compter entre 20 000 et 40 000 dollars mais les congestions du traffic routier sont estimés à 10 milliard de dollars de perte de productivité par an à Toronto.
Dans les prochaines années ces intersections "intelligentes" pourront aussi se connecter avec les radars et lidars des voitures autonomes.

http://www.slate.fr/life/79957/feux-signalisation-intelligents-trafic
https://atelier.bnpparibas/smart-city/article/intersections-connectees-cle-mobilite-devienne-intelligente

La construction d'un feu de signalisation plus intelligent pourrait apporter des avantages qui vont bien au-delà du confort du conducteur. Les voitures au ralenti sont une source majeure d'émissions de gaz à effet de serre, générant environ 30 millions de tonnes de dioxyde de carbone par an, selon le ministère américain de l'énergie. Les embouteillages peuvent également rendre plus difficile l'accès des premiers intervenants aux lieux d'urgence, mettant ainsi des vies en danger. La réponse à ces deux problèmes pourrait être l'IA - du moins selon l'équipe de Rapid Flow, la société à l'origine de Surtrac, un système de gestion adaptative du trafic basé sur l'IA.

Issu d'un projet mené par Stephen Smith, chercheur à l'Institut Carnegie Mellon et co-fondateur de Rapid Flow, Surtrac utilise un réseau décentralisé de feux de circulation intelligents équipés de radars, de caméras et d'autres capteurs pour gérer les flux de trafic. Les capteurs de Surtrac identifient les véhicules qui s'approchent, calculent leur vitesse et leur trajectoire, et ajustent l'horaire d'un feu de circulation selon les besoins. Un carrefour équipé de Surtrac distribue ensuite les informations sur les horaires et les véhicules qu'il collecte à d'autres carrefours "intelligents" situés à proximité, qui peuvent utiliser ces informations, ainsi que leurs propres données, pour ajuster leurs propres signaux. Cela permet de gérer en temps réel le trafic dans l'ensemble du système en fonction du volume qui est réellement présent, et non du volume qui est seulement prévu.

En 2015, la société Rapid Flow Technologies s'est séparée de Carnegie Mellon. La société, qui développe des technologies de transport intelligent, prévoit d'installer son système de feux de signalisation Surtrac dans environ 150 autres intersections au cours des trois prochaines années, couvrant environ un tiers de Pittsburgh.

https://time.com/5502192/smart-traffic-lights-ai/

Amener les gens à destination 25 % plus vite en éliminant les arrêts, en réduisant le temps d'attente et en augmentant la vitesse de déplacement.

Passer plus de 40 % de temps en moins à attendre aux carrefours.

Arrêts Réduit de 30 à 40 %, ce qui diminue l'usure de la route et des pneus et se traduit par des économies pour les conducteurs et les villes.

20 % d'émissions nocives en moins et améliorer la qualité de l'air en réduisant les arrêts et la marche au ralenti.

https://www.rapidflowtech.com/surtrac

<h2>Idée de départ</h2> 

L'idée que nous avions au début a plutôt été respectée. Seuls quelques points non pas pu être réalisés:
- si un axe est saturé, le faire passer au vert pour le désengorger
- si on voit que sur un axe il n'y a aucune voiture qui passe ( grâce aux capteurs) alors qu'il est au vert, le faire passer au rouge pour permettre aux autres voitures de circuler
- afficher le temps restant avant le passage au feu vert pour voitures et/ou piétons

<h2>Les  processus de conception et de fabrication</h2>

Au départ, nous avons d'abord posé les points essentiels du projet que nous souhaitions réaliser. Au fur et à mesure, nous avions une idée de plus en plus précise de ce que nous voulions faire.
Nous avons donc séparé le travail en deux:
Un de nous devait s'occuper de la partie diagrammes, rapport, chercher ce qu'il se faisait déjà et un autre devait commencer à réaliser des simulations à l'aide de Tinkercad.
Lors des séances de TP, nous mettions en commun ce qui a été fait, donnions notre avis s'il y avait des choses à améliorer et testions à l'aide du kit les modélisations lorsque c'était possible puisqu'il nous manquait des capteurs essentiels à ce projet.

Lorsque nous avons voulu mettre en place la fabrication de la maquette, nous avons listé tous les composants et matériels qu'il nous manquait.
Malheureusement, nous n'avons pas pu le faire ensemble en raison du confinement.
Pour connaitre l'avancé du projet, nous avons travaillé à l'aide de Discord. C'est Emiliano qui s'est occupé de la maquette. Faïza s'est chargée de la partie rapport et des diagrammes.

Diagramme d'utilisation
![Diagramme d'utilisation](https://github.com/institut-galilee/2020-potential-eureka/blob/master/doc/Diagrammes/diagramme_utilisation.png)


Diagramme de Gantt
![Diagramme de Gantt](https://github.com/institut-galilee/2020-potential-eureka/blob/master/doc/Diagrammes/diagram_gantt.png)


<h3>Les composants</h3> 

- arduino UNO
- câbles
- breadboards
- LEDs de couleurs vert, jaune et rouge pour les feux tricolores, bleu et blanc pour les feux pour piétons et passage au feu rouge d'une voiture
- capteurs (infrarouge, ultrason, luminosité)
- écran LCD
- bouton
- télécommandeIR
- récepteur IR pour la télécommande
- buzzer passif

<h3>Pour la maquette</h3>

- grande planche en bois
- petites planches de cagettes en bois pour les feux
- perceuse et scie sauteuse pour faire les troues


<h3>Logiciels utilisés</h3>

- Arduino IDE: utilisé pour utiliser l'arduino UNO
- Tinkercad: utilisé pour la simulation

Maquette
![maquette](https://github.com/institut-galilee/2020-potential-eureka/blob/master/doc/20200420172119.JPG)
![maquette](https://github.com/institut-galilee/2020-potential-eureka/blob/master/doc/20200420172107.JPG)
