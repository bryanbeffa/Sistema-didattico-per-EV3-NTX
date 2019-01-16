1. [Introduzione](#introduzione)

  - [Informazioni sul progetto](#informazioni-sul-progetto)

  - [Abstract](#abstract)

  - [Scopo](#scopo)

1. [Analisi](#analisi)

  - [Analisi del dominio](#analisi-del-dominio)

  - [Analisi dei mezzi](#analisi-dei-mezzi)

  - [Analisi e specifica dei requisiti](#analisi-e-specifica-dei-requisiti)

  - [Use case](#use-case)

  - [Pianificazione](#pianificazione)

1. [Progettazione](#progettazione)

  - [Design dell’architettura del sistema](#design-dell’architettura-del-sistema)

  - [Design dei dati e database](#design-dei-dati-e-database)

1. [Implementazione](#implementazione)

1. [Test](#test)

  - [Protocollo di test](#protocollo-di-test)

  - [Risultati test](#risultati-test)

  - [Mancanze/limitazioni conosciute](#mancanze/limitazioni-conosciute)

1. [Consuntivo](#consuntivo)

1. [Conclusioni](#conclusioni)

  - [Sviluppi futuri](#sviluppi-futuri)

  - [Considerazioni personali](#considerazioni-personali)

1. [Sitografia](#sitografia)

1. [Allegati](#allegati)


## Introduzione

### Informazioni sul progetto

  -   Allievi: Matteo Forni e Bryan Beffa

  -   Docenti: Luca Muggiasca, Francesco Mussi, Adriano Barchi, Massimo Sartori

  -   SAM Trevano, Informatica, I3AA

  -   14.11.2018 - 01.02.2018


### Abstract

  > *The project requirement is to create a java and a robotC library.
  > In these libraries, we have to put some useful classes for the guys of
  > the second year. These classes will be used for the WRO, so they will
  > have some methods for every actuator and sensor. These libraries should be
  > universal and user-friendly, so the guys could use it in a
  > simple way for their interests.*

### Scopo

Lo scopo di questo progetto è quello di creare due librerie, una in RobotC e l'altra in Java sia per bricks EV3 sia per NXT, per aiutare gli allievi del secondo anno di informatica che parteciperanno alla gara di robotica WRO. Esse permetteranno di eseguire le operazioni basilari con i motori
e con i seguenti sensori:

  - Sensore tattile
  - Sensore di luce/colore
  - Giroscopio
  - Sensore ad ultrasuoni
  - Sensore di suono

Al termine della creazione delle librerie dovrà essere eseguito un test di performance
per determinare quale tra le due librerie funziona meglio.

## Analisi

### Analisi del dominio

La scuola necessita di una libreria per gli allievi di informatica del secondo anno, essa servirà a controllare i robot Ev3 e NXT durante la competizione di robotica WRO. La libreria dovrà contenere del codice per il controllo degli attuatori e dei sensori così da aiutare l’utente con l’uso dei Robot Mindstorm, essa dovrà essere scritta in RobotC e in Java e dovrà poi venire valutato quale dei due linguaggi è il migliore e più performante. La libreria dovrà essere di facile comprensione e modifica per gli allievi, dovrà quindi comprendere una guida all’utilizzo.
Attualmente, per i ragazzi del secondo anno, non ci sono altri prodotti che svolgono questo compito. Le conoscenze che saranno necessarie per utilizzare il prodotto saranno quelle di base della programmazione.

### Analisi e specifica dei requisiti

Il committente necessita di librerie utili per l’utilizzo dei robot LEGO
Mindstorm. Le librerie devono contenere metodi utili per ogni
sensore/attuatore. Queste librerie devono essere scritte in RobotC e
java. I metodi devono essere di facile utilizzo (user-friendly) e
dovranno essere compatibili con robot di diverse forme e dimensioni.
Per ogni attuatore/sensore sono disponibili più metodi che effettuano
azioni distinte. Queste librerie servono per aiutare gli allievi del
secondo anno durante la WRO.

  |ID  |REQ-01                                         |
  |----|------------------------------------------------|
  |**Nome**    |Classe sensore ultrasuono Java |
  |**Priorità**|1                              |
  |**Versione**|2.0                            |
  |**Note**    |Il requisito è stato eliminato. |


  |ID  |REQ-02                                         |
  |----|------------------------------------------------|
  |**Nome**    |Classe sensore di colore Java  |
  |**Priorità**|1                              |
  |**Versione**|2.0                            |
  |**Note**    |Il requisito è stato eliminato.  |

  |ID  |REQ-03                                         |
  |----|------------------------------------------------|
  |**Nome**    |Classe sensore di tatto Java   |
  |**Priorità**|1                              |
  |**Versione**|2.0                            |
  |**Note**    |Il requisito è stato eliminato.   ||

  |ID  |REQ-04                                         |
  |----|------------------------------------------------|
  |**Nome**    |Classe sensore giroscopio Java |
  |**Priorità**|1                              |
  |**Versione**|2.0                            |
  |**Note**    |Il requisito è stato eliminato.|

  |ID  |REQ-05                                         |
  |----|------------------------------------------------|
  |**Nome**    |Classe sensore di luce Java|
  |**Priorità**|1                              |
  |**Versione**|2.0                            |
  |**Note**    |Il requisito è stato eliminato. |

  |ID  |REQ-06                                         |
  |----|------------------------------------------------|
  |**Nome**    |Classe motore principale Java |
  |**Priorità**|1                              |
  |**Versione**|2.0                            |
  |**Note**    |Il requisito è stato eliminato. |

  |ID  |REQ-07                                         |
  |----|------------------------------------------------|
  |**Nome**    |Classe motore secondario Java |
  |**Priorità**|1                              |
  |**Versione**|2.0                            |
  |**Note**    |Il requisito è stato eliminato. |

  |ID  |REQ-08                                         |
  |----|------------------------------------------------|
  |**Nome**    |Classe sensore di suono Java|
  |**Priorità**|1                              |
  |**Versione**|2.0                            |
  |**Note**    |Il requisito è stato eliminato.|

  |ID  |REQ-09                                         |
  |----|------------------------------------------------|
  |**Nome**    |Libreria wait|
  |**Priorità**|1                              |
  |**Versione**|1.0                            |
  |**Note**    |Libreria che riporta i metodi del blocchetto wait del linguaggio visivo di NXT.|
  |            |**Sotto requisiti** |
  |**001**      |Metodo di attesa del suono.|
  |**002**      |Metodo di attesa della distanza rilevata con l'ultrasuoni.|
  |**003**      |Metodo di attesa del tocco.|
  |**004**      |Metodo di attesa della luce.|
  |**005**      |Metodo di attesa di un lasso di tempo.|
  |**006**      |Metodo di attesa del movimento in rotazioni dei motori.|
  |**007**      |Metodo di attesa del movimento in gradi dei motori.|

  |ID  |REQ-10                                         |
  |----|------------------------------------------------|
  |**Nome**    |Progetto di dimostrazione e test|
  |**Priorità**|1                              |
  |**Versione**|1.0                            |
  |**Note**    |Mini progetto che dimostra l'uso della libreria e ne testa il funzionamento.|
  |            |**Sotto requisiti** |
  |**001**      |Line follower percentuale.|
  |**002**      |Controllo della presenza di oggetti davanti a se.|


### Pianificazione

Qui di seguito si può vedere il Gantt iniziale, nell'immagine si nota come era stato pensato di suddividere i metodi di entrambi i linguaggi fra i due componenti del gruppo e come questa parte fosse stata pensata come la più lunga del progetto. In questa progettazione non era presente nemmeno il programma dimostrativo.

![Gantt iniziale](img/GanttIniziale.png)

### Analisi dei mezzi

#### Software
I software che sono stati utilizzati sono i seguenti:

- LEGO Mindstorm NXT
- RobotC IDE

#### Hardware
In questo progetto è stato utilizzato il seguente hardware:
- Portatili (specifiche tecniche nella media) con Windows 10
- Robot Lego NXT brick
- Sesore di luce
- Sensore ultrasuono
- Sensore di tatto
- Motore principale
- Motore secondario

## Progettazione

Questo capitolo descrive esaustivamente come deve essere realizzato il
prodotto fin nei suoi dettagli. Una buona progettazione permette
all’esecutore di evitare fraintendimenti e imprecisioni
nell’implementazione del prodotto.

Durante i colloqui con i docenti l'idea di base del progetto è cambiata. Con i vari gruppi ci siamo suddivisi i compiti così che noi dobbiamo fare solamente una libreria scritta in RobotC. Questa libreria dovrà contenere i metodi di attesa del blocchetto del linguaggio visivo di NXT. Dovrà inoltre venire fatto un programma di esempio per dimostrare l'utilizzo dei metodi così come il loro funzionamento.

### Design dell’architettura del sistema

Descrive:

-   La struttura del programma/sistema lo schema di rete...

-   Gli oggetti/moduli/componenti che lo compongono.

-   I flussi di informazione in ingresso ed in uscita e le
    relative elaborazioni. Può utilizzare *diagrammi di flusso dei
    dati* (DFD).

-   Eventuale sitemap

### Design dei dati e database

Descrizione delle strutture di dati utilizzate dal programma in base
agli attributi e le relazioni degli oggetti in uso.

### Schema E-R, schema logico e descrizione.

Se il diagramma E-R viene modificato, sulla doc dovrà apparire l’ultima
versione, mentre le vecchie saranno sui diari.

### Design delle interfacce

In questo progetto non vi è richiesto di creare un interfaccia utente,
ma solo delle librerie per EV3 e NXT.

### Design procedurale

Descrive i concetti dettagliati dell’architettura/sviluppo utilizzando
ad esempio:

-   Diagrammi di flusso e Nassi.

-   Tabelle.

-   Classi e metodi.

-   Tabelle di routing

-   Diritti di accesso a condivisioni …

Questi documenti permetteranno di rappresentare i dettagli procedurali
per la realizzazione del prodotto.

## Implementazione

In questo capitolo dovrà essere mostrato come è stato realizzato il
lavoro. Questa parte può differenziarsi dalla progettazione in quanto il
risultato ottenuto non per forza può essere come era stato progettato.

Sulla base di queste informazioni il lavoro svolto dovrà essere
riproducibile.

In questa parte è richiesto l’inserimento di codice sorgente/print
screen di maschere solamente per quei passaggi particolarmente
significativi e/o critici.

Inoltre dovranno essere descritte eventuali varianti di soluzione o
scelte di prodotti con motivazione delle scelte.

Non deve apparire nessuna forma di guida d’uso di librerie o di
componenti utilizzati. Eventualmente questa va allegata.

Per eventuali dettagli si possono inserire riferimenti ai diari.

## Test

### Protocollo di test

Definire in modo accurato tutti i test che devono essere realizzati per
garantire l’adempimento delle richieste formulate nei requisiti. I test
fungono da garanzia di qualità del prodotto. Ogni test deve essere
ripetibile alle stesse condizioni.


|Test Case      | TC-001                               |
|---------------|--------------------------------------|
|**Nome**       |Import a card, but not shown with the GUI |
|**Riferimento**|REQ-012                               |
|**Descrizione**|Import a card with KIC, KID and KIK keys with no obfuscation, but not shown with the GUI |
|**Prerequisiti**|Store on local PC: Profile\_1.2.001.xml (appendix n\_n) and Cards\_1.2.001.txt (appendix n\_n) |
|**Procedura**     | - Go to “Cards manager” menu, in main page click “Import Profiles” link, Select the “1.2.001.xml” file, Import the Profile - Go to “Cards manager” menu, in main page click “Import Cards” link, Select the “1.2.001.txt” file, Delete the cards, Select the “1.2.001.txt” file, Import the cards |
|**Risultati attesi** |Keys visible in the DB (OtaCardKey) but not visible in the GUI (Card details) |


### Risultati test

Tabella riassuntiva in cui si inseriscono i test riusciti e non del
prodotto finale. Se un test non riesce e viene corretto l’errore, questo
dovrà risultare nel documento finale come riuscito (la procedura della
correzione apparirà nel diario), altrimenti dovrà essere descritto
l’errore con eventuali ipotesi di correzione.

### Mancanze/limitazioni conosciute

Descrizione con motivazione di eventuali elementi mancanti o non
completamente implementati, al di fuori dei test case. Non devono essere
riportati gli errori e i problemi riscontrati e poi risolti durante il
progetto.

## Consuntivo

Consuntivo del tempo di lavoro effettivo e considerazioni riguardo le
differenze rispetto alla pianificazione (cap 1.7) (ad esempio Gannt
consuntivo).

## Conclusioni

Quali sono le implicazioni della mia soluzione? Che impatto avrà?
Cambierà il mondo? È un successo importante? È solo un’aggiunta
marginale o è semplicemente servita per scoprire che questo percorso è
stato una perdita di tempo? I risultati ottenuti sono generali,
facilmente generalizzabili o sono specifici di un caso particolare? ecc

### Sviluppi futuri
  Migliorie o estensioni che possono essere sviluppate sul prodotto.

### Considerazioni personali
  Cosa ho imparato in questo progetto? ecc

## Bibliografia

### Bibliografia per articoli di riviste
1.  Cognome e nome (o iniziali) dell’autore o degli autori, o nome
    dell’organizzazione,

2.  Titolo dell’articolo (tra virgolette),

3.  Titolo della rivista (in italico),

4.  Anno e numero

5.  Pagina iniziale dell’articolo,

### Bibliografia per libri


1.  Cognome e nome (o iniziali) dell’autore o degli autori, o nome
    dell’organizzazione,

2.  Titolo del libro (in italico),

3.  ev. Numero di edizione,

4.  Nome dell’editore,

5.  Anno di pubblicazione,

6.  ISBN.

### Sitografia

-   http://www.robotc.net/forums/viewtopic.php?f=1&t=19568, *RobotC Forum*, 21.11.2018.

-   https://www.dexterindustries.com/howto/using-debugger-stream-in-robotc-for-lego/, *RobotC debug stream*, 30.11.2018

-   http://www.robotc.net/forums/viewtopic.php?f=1&t=7556, *RobotC buttons handling*, 12.12.2018.

-   http://www.robotc.net/wikiarchive/NXT_Functions_Display, *RobotC display functions Manual*, 17.12.2018.

-   http://www.robotc.net/forums/viewtopic.php?f=52&t=5916, *RobotC pragma manual*, 19.12.2018.

## Allegati

Elenco degli allegati, esempio:

-   Diari di lavoro

-   Istruzioni di installazione del firmware

-   Libreria di wait

-   Programma dimostrativo
