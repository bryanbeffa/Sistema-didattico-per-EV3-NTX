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

  In questo capitolo raccogliere le informazioni relative al progetto, ad esempio:

  -   Allievi: Matteo Forni e Bryan Beffa

  -   Docenti: Luca Muggiasca, Francesco Mussi, Adriano Barchi

  -   SAM Trevano, Informatica, I3AA

  -   14.11.2018 - 25.01.2018


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
  - Sensore di luce
  - Sensore di colore
  - Giroscopio
  - Sensore ad ultrasuoni

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

  |ID  |REQ-001                                         |
  |----|------------------------------------------------|
  |**Nome**    |Classe sensore ultrasuono Java |
  |**Priorità**|1                              |
  |**Versione**|1.0                            |
  |**Note**    |Si necessita di una classe che contenga metodi utili per l'utilizzo del robot con il sensore ultrasuono |
  |            |**Sotto requisiti** |
  |**001**      |Metodo che permette al robot di seguire la linea del muro|
  |**002**      |Metodo che si ferma ad una distanza passata come parametro dal muro|
  |**003**      |Metodo che ritorna il tempo per percorrere la distanza misurata|


  |ID  |REQ-002                                         |
  |----|------------------------------------------------|
  |**Nome**    |Classe sensore di colore Java  |
  |**Priorità**|1                              |
  |**Versione**|1.0                            |
  |**Note**    |Si necessita di una classe che contenga metodi utili per l'utilizzo del robot con il sensore di colore  |
  |            |**Sotto requisiti** |
  |**001**      |Metodo che fa arrestare il robot al rilevamento di un determinato colore|
  |**002**      |Metodo che ritorna il nome del colore |

  |ID  |REQ-003                                         |
  |----|------------------------------------------------|
  |**Nome**    |Classe sensore di tatto Java   |
  |**Priorità**|1                              |
  |**Versione**|1.0                            |
  |**Note**    |Si necessita di una classe che contenga metodi utili per l'utilizzo del robot con il sensore di tatto   |
  |            |**Sotto requisiti** |
  |**001**      |Metodo che ritorna se il sensore di tatto viene premuto|
  |**002**      |Metodo che ritorna se entrambi i sensori sono stati premuti|

  |ID  |REQ-004                                         |
  |----|------------------------------------------------|
  |**Nome**    |Classe sensore giroscopio Java |
  |**Priorità**|1                              |
  |**Versione**|1.0                            |
  |**Note**    |Si necessita di una classe che contenga metodi utili per l'utilizzo del robot con il sensore giroscopio|
  |            |**Sotto requisiti** |
  |**001**      |Metodo|
  |**002**      |Metodo |

  |ID  |REQ-005                                         |
  |----|------------------------------------------------|
  |**Nome**    |Classe sensore di luce Java|
  |**Priorità**|1                              |
  |**Versione**|1.0                            |
  |**Note**    |Si necessita di una classe che contenga metodi utili per l'utilizzo del robot con il sensore di luce   |
  |            |**Sotto requisiti** |
  |**001**      |Metodo che esegue il line follower ON/OFF|
  |**002**      |Metodo che esegue il line follower con l'utilizzo del calcolo dell'errore|
  |**003**      |Metodo che fa arrestare il robot al rilevamento del colore nero|

  |ID  |REQ-006                                         |
  |----|------------------------------------------------|
  |**Nome**    |Classe motore principale Java |
  |**Priorità**|1                              |
  |**Versione**|1.0                            |
  |**Note**    |Si necessita di una classe che contenga metodi utili per l'utilizzo del robot con il motore principale |
  |            |**Sotto requisiti** |
  |**001**      |Metodo che permette al robot di avanzare/arretrare di un certo numero di rotazioni|
  |**002**      |Metodo che permette al robot di avanzare/arretrare per un determinato lasso di tempo  |
  |**003**      |Metodo che ferma il robot|
  |**004**      |Metodo che permette al robot di girarsi a destra o sinistra |

  |ID  |REQ-007                                         |
  |----|------------------------------------------------|
  |**Nome**    |Classe motore secondario Java |
  |**Priorità**|1                              |
  |**Versione**|1.0                            |
  |**Note**    |Si necessita di una classe che contenga metodi utili per l'utilizzo del robot con il motore secondario |
  |            |**Sotto requisiti** |
  |**001**      |Metodo che fa azionare il motore per un certo numero di rotazioni|
  |**002**      |Metodo che fa azionare il motore per un certo tempo|


### Pianificazione

Prima di stabilire una pianificazione bisogna avere almeno una vaga idea
del modello di sviluppo che si intende adottare. In questa sezione
bisognerà inserire il modello concettuale di sviluppo che si seguirà
durante il progetto. Gli elementi di riferimento per una buona
pianificazione derivano da una scomposizione top-down della problematica
del progetto.

La pianificazione può essere rappresentata mediante un diagramma di
Gantt.

Se si usano altri metodi di pianificazione (es scrum), dovranno apparire
in questo capitolo.

### Analisi dei mezzi

#### Software
I software che sono stati utilizzati sono i seguenti:

- Netbeans IDE 8.2
- LEGO Mindstorm NXT

#### Hardware
In questo progetto è stato utilizzato il seguente hardware:
- Portatili (specifiche tecniche nella media) con Windows 10
- Robot Lego NXT brick
- Robot Lego EV3 brick
- Sesore di luce
- Sensore ultrasuono
- Sensore giroscopio
- Sensore di tatto
- Motore principale
- Motore secondario

## Progettazione

Questo capitolo descrive esaustivamente come deve essere realizzato il
prodotto fin nei suoi dettagli. Una buona progettazione permette
all’esecutore di evitare fraintendimenti e imprecisioni
nell’implementazione del prodotto.

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

Descrizione delle interfacce interne ed esterne del sistema e
dell’interfaccia utente. La progettazione delle interfacce è basata
sulle informazioni ricavate durante la fase di analisi e realizzata
tramite mockups.

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

1.  URL del sito (se troppo lungo solo dominio, evt completo nel
    diario),

2.  Eventuale titolo della pagina (in italico),

3.  Data di consultazione (GG-MM-AAAA).

**Esempio:**

-   http://standards.ieee.org/guides/style/section7.html, *IEEE
    Standards Style Manual*, 07-06-2008.

## Allegati

Elenco degli allegati, esempio:

-   Diari di lavoro

-   Codici sorgente/documentazione macchine virtuali

-   Istruzioni di installazione del prodotto (con credenziali
    di accesso) e/o di eventuali prodotti terzi

-   Documentazione di prodotti di terzi

-   Eventuali guide utente / Manuali di utilizzo

-   Mandato e/o Qdc

-   Prodotto

-   …
