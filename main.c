#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define EPSILON 0.001

int main() {

	srand(0);

	// 70/1000 za procenat
	double zlato=1200,srebro=15,nafta=70;
	double stanjeZlata=0,stanjeSrebra=0,stanjeNafte=0;
	double zlatoRand=0,srebroRand=0,naftaRand=0;
	double zlatoPromjena=0,srebroPromjena=0,naftaPromjena=0;
	double zlatoPare=0,srebroPare=0,naftaPare=0;
	double stanje=100000;
	int izbor;
	double i=100000,j=0;
	int staKupujem=0,kolikoKupujem=0;
	int staProdajem=0,kolikoProdajem=0;




	///////////////// Ponedjeljak
	zlatoRand=rand()%2;
	srebroRand=rand()%2;
	naftaRand=rand()%2;
	//zlato
	if(zlatoRand==0){
		zlatoPromjena=zlatoPromjena-0.1;
		zlato=zlato+((zlatoPromjena/100)*zlato);
	}
		else if(zlatoRand==1){
			zlatoPromjena=zlatoPromjena+0.1;
			zlato=zlato+((zlatoPromjena/100)*zlato);
		}
	//srebro
		if(srebroRand==0){
		srebroPromjena=srebroPromjena-0.1;
		srebro=srebro+((srebroPromjena/100)*srebro);
	}
		else if(srebroRand==1){
			srebroPromjena=srebroPromjena+0.1;
			srebro=srebro+((srebroPromjena/100)*srebro);
		}
	//nafta
		if(naftaRand==0){
		naftaPromjena=naftaPromjena-0.1;
		nafta=nafta+((naftaPromjena/100)*nafta);
	}
		else if(naftaRand==1){
			naftaPromjena=naftaPromjena+0.1;
			nafta=nafta+((naftaPromjena/100)*nafta);
		}


		printf("PON: Zlato $%.2f (%+.1f) Srebro $%.2f (%+.1f) Nafta $%.2f (%+.1f)\n",zlato,zlatoPromjena,srebro,srebroPromjena,nafta,naftaPromjena);

	////////////// Utorak
	zlatoRand=rand()%2;
	srebroRand=rand()%2;
	naftaRand=rand()%2;
	//zlato
	if(zlatoRand==0){
		zlatoPromjena=zlatoPromjena-0.1;
		zlato=zlato+((zlatoPromjena/100)*zlato);
	}
		else if(zlatoRand==1){
			zlatoPromjena=zlatoPromjena+0.1;
			zlato=zlato+((zlatoPromjena/100)*zlato);
		}
	//srebro
		if(srebroRand==0){
		srebroPromjena=srebroPromjena-0.1;
		srebro=srebro+((srebroPromjena/100)*srebro);
	}
		else if(srebroRand==1){
			srebroPromjena=srebroPromjena+0.1;
			srebro=srebro+((srebroPromjena/100)*srebro);
		}
	//nafta
		if(naftaRand==0){
		naftaPromjena=naftaPromjena-0.1;
		nafta=nafta+((naftaPromjena/100)*nafta);
	}
		else if(naftaRand==1){
			naftaPromjena=naftaPromjena+0.1;
			nafta=nafta+((naftaPromjena/100)*nafta);
		}

		printf("UTO: Zlato $%.2f (%+.1f) Srebro $%.2f (%+.1f) Nafta $%.2f (%+.1f)\n",zlato,zlatoPromjena,srebro,srebroPromjena,nafta,naftaPromjena);

	//////////// Srijeda

		zlatoRand=rand()%2;
	srebroRand=rand()%2;
	naftaRand=rand()%2;
	//zlato
	if(zlatoRand==0){
		zlatoPromjena=zlatoPromjena-0.1;
		zlato=zlato+((zlatoPromjena/100)*zlato);
	}
		else if(zlatoRand==1){
			zlatoPromjena=zlatoPromjena+0.1;
			zlato=zlato+((zlatoPromjena/100)*zlato);
		}
	//srebro
		if(srebroRand==0){
		srebroPromjena=srebroPromjena-0.1;
		srebro=srebro+((srebroPromjena/100)*srebro);
	}
		else if(srebroRand==1){
			srebroPromjena=srebroPromjena+0.1;
			srebro=srebro+((srebroPromjena/100)*srebro);
		}
	//nafta
		if(naftaRand==0){
		naftaPromjena=naftaPromjena-0.1;
		nafta=nafta+((naftaPromjena/100)*nafta);
	}
		else if(naftaRand==1){
			naftaPromjena=naftaPromjena+0.1;
			nafta=nafta+((naftaPromjena/100)*nafta);
		}

		printf("SRI: Zlato $%.2f (%+.1f) Srebro $%.2f (%+.1f) Nafta $%.2f (%+.1f)\n",zlato,zlatoPromjena,srebro,srebroPromjena,nafta,naftaPromjena);


	/////// Cetvrtak

		zlatoRand=rand()%2;
	srebroRand=rand()%2;
	naftaRand=rand()%2;
	//zlato
	if(zlatoRand==0){
		zlatoPromjena=zlatoPromjena-0.1;
		zlato=zlato+((zlatoPromjena/100)*zlato);
	}
		else if(zlatoRand==1){
			zlatoPromjena=zlatoPromjena+0.1;
			zlato=zlato+((zlatoPromjena/100)*zlato);
		}
	//srebro
		if(srebroRand==0){
		srebroPromjena=srebroPromjena-0.1;
		srebro=srebro+((srebroPromjena/100)*srebro);
	}
		else if(srebroRand==1){
			srebroPromjena=srebroPromjena+0.1;
			srebro=srebro+((srebroPromjena/100)*srebro);
		}
	//nafta
		if(naftaRand==0){
		naftaPromjena=naftaPromjena-0.1;
		nafta=nafta+((naftaPromjena/100)*nafta);
	}
		else if(naftaRand==1){
			naftaPromjena=naftaPromjena+0.1;
			nafta=nafta+((naftaPromjena/100)*nafta);
		}

		printf("CET: Zlato $%.2f (%+.1f) Srebro $%.2f (%+.1f) Nafta $%.2f (%+.1f)\n",zlato,zlatoPromjena,srebro,srebroPromjena,nafta,naftaPromjena);



	/////////Petak

		zlatoRand=rand()%2;
	srebroRand=rand()%2;
	naftaRand=rand()%2;
	//zlato
	if(zlatoRand==0){
		zlatoPromjena=zlatoPromjena-0.1;
		zlato=zlato+((zlatoPromjena/100)*zlato);
	}
		else if(zlatoRand==1){
			zlatoPromjena=zlatoPromjena+0.1;
			zlato=zlato+((zlatoPromjena/100)*zlato);
		}
	//srebro
		if(srebroRand==0){
		srebroPromjena=srebroPromjena-0.1;
		srebro=srebro+((srebroPromjena/100)*srebro);
	}
		else if(srebroRand==1){
			srebroPromjena=srebroPromjena+0.1;
			srebro=srebro+((srebroPromjena/100)*srebro);
		}
	//nafta
		if(naftaRand==0){
		naftaPromjena=naftaPromjena-0.1;
		nafta=nafta+((naftaPromjena/100)*nafta);
	}
		else if(naftaRand==1){
			naftaPromjena=naftaPromjena+0.1;
			nafta=nafta+((naftaPromjena/100)*nafta);
		}

		printf("PET: Zlato $%.2f (%+.1f) Srebro $%.2f (%+.1f) Nafta $%.2f (%+.1f)\n",zlato,zlatoPromjena,srebro,srebroPromjena,nafta,naftaPromjena);


	zlatoPare=zlato*stanjeZlata;
	srebroPare=srebro*stanjeSrebra;
	naftaPare=nafta*stanjeNafte;


	printf("\n");
	printf("Imate:\n");
	printf("Zlata: %g ($0.00) Srebra: %g ($0.00) Nafte: %g ($0.00) Novca: $%.2f\n",stanjeZlata,stanjeSrebra,stanjeNafte,stanje);
	printf("UKUPNO: $%.2f ($+0.00)\n",stanje);
	printf("\n");


		while(1){


		printf("Unesite izbor (1 - Kupi, 2 - Prodaj, 3 - Sljedeca sedmica, 0 - Kraj igre): ");
		scanf("%d",&izbor);


	//////////////////////////////	//KUPI
		if((izbor!=1) && (izbor!=2) && (izbor!=3) && (izbor!=0)) {
			printf("Pogresan izbor!\n");
			printf("\n");
			printf("Imate:\n");
			printf("Zlata: %g ($%.2f) Srebra: %g ($%.2f) Nafte: %g ($%.2f) Novca: $%.2f\n",stanjeZlata,stanjeZlata*zlato,stanjeSrebra,stanjeSrebra*srebro,stanjeNafte,stanjeNafte*nafta,stanje);
			printf("UKUPNO: $%.2f ($+0.00)\n",stanje);
			printf("\n");


			}



			/////////////////KUPI
		if(izbor==1){
			printf("Sta kupujete (1 - Zlato, 2 - Srebro, 3 - Naftu): ");
			scanf("%d",&staKupujem);

			printf("Koliko? ");
			scanf("%d",&kolikoKupujem);





			if(staKupujem==1){
				if(stanje>=(kolikoKupujem*zlato)){
			stanjeZlata=stanjeZlata+kolikoKupujem;
			stanje-=zlato*kolikoKupujem;
				}
				else  printf("Nemate toliko novca!");
			}
				else if(staKupujem==2){
					if(stanje>=(kolikoKupujem*srebro)){
				stanjeSrebra=stanjeSrebra+kolikoKupujem;
				stanje-=srebro*kolikoKupujem;
					}
					 else printf("Nemate toliko novca!");
				}
					else if(staKupujem==3){
						if(stanje>=(kolikoKupujem*nafta)){
					stanjeNafte=stanjeNafte+kolikoKupujem;
	        		stanje-=nafta*kolikoKupujem;
						}
						else  printf("Nemate toliko novca!");
					}

			else {
				printf("Pogresan izbor");
				kolikoKupujem=0;
			}

			zlatoPare=zlato*stanjeZlata;
				srebroPare=srebro*stanjeSrebra;
	    			naftaPare=nafta*stanjeNafte;


			printf("\n");
			printf("Imate:\n");
			printf("Zlata: %g ($%.2f) Srebra: %g ($%.2f) Nafte: %g ($%.2f) Novca: $%.2f\n",stanjeZlata,zlatoPare,stanjeSrebra,srebroPare,stanjeNafte,naftaPare,stanje);
			printf("UKUPNO: $%.2f ($%+.2f)\n",stanje+zlatoPare+srebroPare+naftaPare,(stanje+zlatoPare+srebroPare+naftaPare)-i);
			printf("\n");


		}

		///////////////////////////////PRODAJ
		else if(izbor==2){
			printf("Sta prodajete (1 - Zlato, 2 - Srebro, 3 - Naftu): ");
			scanf("%d",&staProdajem);
			printf("Koliko? ");
			scanf("%d",&kolikoProdajem);


			if(staProdajem==1){
				if(kolikoProdajem<=stanjeZlata){
			stanje+=zlato*kolikoProdajem;
			stanjeZlata=stanjeZlata-kolikoProdajem;

				}
				else printf("Nemate toliko zlata!");
			}
			else if(staProdajem==2){
				if(kolikoProdajem<=stanjeSrebra){
			stanje+=srebro*kolikoProdajem;
			stanjeSrebra=stanjeSrebra-kolikoProdajem;

				}
				else printf("Nemate toliko srebra!");
			}
			else if(staProdajem==3){
				if(kolikoProdajem<=stanjeNafte){
			stanje+=nafta*kolikoProdajem;
			stanjeNafte=stanjeNafte-kolikoProdajem;
				}
				else printf("Nemate toliko nafte!");
			}
			else {
				printf("Pogresan izbor");
				kolikoProdajem=0;
			}

				zlatoPare=zlato*stanjeZlata;
				srebroPare=srebro*stanjeSrebra;
	    			naftaPare=nafta*stanjeNafte;

				printf("\n");
			printf("Imate:\n");
			printf("Zlata: %g ($%.2f) Srebra: %g ($%.2f) Nafte: %g ($%.2f) Novca: $%.2f\n",stanjeZlata,zlatoPare,stanjeSrebra,srebroPare,stanjeNafte,naftaPare,stanje);
			printf("UKUPNO: $%.2f ($%+.2f)\n",stanje+zlatoPare+srebroPare+naftaPare,(stanje+zlatoPare+srebroPare+naftaPare)-i);
			printf("\n");
		}



		/////////////////////SLIJEDECA SEDMICA
		else if(izbor==3){

			printf("\n");

				///////////////// Ponedjeljak
	zlatoRand=rand()%2;
	srebroRand=rand()%2;
	naftaRand=rand()%2;

	//zlato
	if(zlatoRand==0){
		zlatoPromjena=zlatoPromjena-0.1;
		zlato=zlato+((zlatoPromjena/100)*zlato);
	}
		else if(zlatoRand==1){
			zlatoPromjena=zlatoPromjena+0.1;
			zlato=zlato+((zlatoPromjena/100)*zlato);
		}
	//srebro
		if(srebroRand==0){
		srebroPromjena=srebroPromjena-0.1;
		srebro=srebro+((srebroPromjena/100)*srebro);
	}
		else if(srebroRand==1){
			srebroPromjena=srebroPromjena+0.1;
			srebro=srebro+((srebroPromjena/100)*srebro);
		}
	//nafta
		if(naftaRand==0){
		naftaPromjena=naftaPromjena-0.1;
		nafta=nafta+((naftaPromjena/100)*nafta);
	}
		else if(naftaRand==1){
			naftaPromjena=naftaPromjena+0.1;
			nafta=nafta+((naftaPromjena/100)*nafta);
		}

				if(zlatoPromjena<=0.01 && zlatoPromjena>=-0.01) zlatoPromjena=0;
	if(srebroPromjena<=0.01 && srebroPromjena>=-0.01) srebroPromjena=0;
	if(naftaPromjena<=0.01 && naftaPromjena>=-0.01) naftaPromjena=0;
		printf("PON: Zlato $%.2f (%+.1f) Srebro $%.2f (%+.1f) Nafta $%.2f (%+.1f)\n",zlato,zlatoPromjena,srebro,srebroPromjena,nafta,naftaPromjena);

	////////////// Utorak
	zlatoRand=rand()%2;
	srebroRand=rand()%2;
	naftaRand=rand()%2;
	//zlato
	if(zlatoRand==0){
		zlatoPromjena=zlatoPromjena-0.1;
		zlato=zlato+((zlatoPromjena/100)*zlato);
	}
		else if(zlatoRand==1){
			zlatoPromjena=zlatoPromjena+0.1;
			zlato=zlato+((zlatoPromjena/100)*zlato);
		}
	//srebro
		if(srebroRand==0){
		srebroPromjena=srebroPromjena-0.1;
		srebro=srebro+((srebroPromjena/100)*srebro);
	}
		else if(srebroRand==1){
			srebroPromjena=srebroPromjena+0.1;
			srebro=srebro+((srebroPromjena/100)*srebro);
		}
	//nafta
		if(naftaRand==0){
		naftaPromjena=naftaPromjena-0.1;
		nafta=nafta+((naftaPromjena/100)*nafta);
	}
		else if(naftaRand==1){
			naftaPromjena=naftaPromjena+0.1;
			nafta=nafta+((naftaPromjena/100)*nafta);
		}
						if(zlatoPromjena<=0.01 && zlatoPromjena>=-0.01) zlatoPromjena=0;
	if(srebroPromjena<=0.01 && srebroPromjena>=-0.01) srebroPromjena=0;
	if(naftaPromjena<=0.01 && naftaPromjena>=-0.01) naftaPromjena=0;
		printf("UTO: Zlato $%.2f (%+.1f) Srebro $%.2f (%+.1f) Nafta $%.2f (%+.1f)\n",zlato,zlatoPromjena,srebro,srebroPromjena,nafta,naftaPromjena);

	//////////// Srijeda

		zlatoRand=rand()%2;
	srebroRand=rand()%2;
	naftaRand=rand()%2;
	//zlato
	if(zlatoRand==0){
		zlatoPromjena=zlatoPromjena-0.1;
		zlato=zlato+((zlatoPromjena/100)*zlato);
	}
		else if(zlatoRand==1){
			zlatoPromjena=zlatoPromjena+0.1;
			zlato=zlato+((zlatoPromjena/100)*zlato);
		}
	//srebro
		if(srebroRand==0){
		srebroPromjena=srebroPromjena-0.1;
		srebro=srebro+((srebroPromjena/100)*srebro);
	}
		else if(srebroRand==1){
			srebroPromjena=srebroPromjena+0.1;
			srebro=srebro+((srebroPromjena/100)*srebro);
		}
	//nafta
		if(naftaRand==0){
		naftaPromjena=naftaPromjena-0.1;
		nafta=nafta+((naftaPromjena/100)*nafta);
	}
		else if(naftaRand==1){
			naftaPromjena=naftaPromjena+0.1;
			nafta=nafta+((naftaPromjena/100)*nafta);
		}
					if(zlatoPromjena<=0.01 && zlatoPromjena>=-0.01) zlatoPromjena=0;
	if(srebroPromjena<=0.01 && srebroPromjena>=-0.01) srebroPromjena=0;
	if(naftaPromjena<=0.01 && naftaPromjena>=-0.01) naftaPromjena=0;
		printf("SRI: Zlato $%.2f (%+.1f) Srebro $%.2f (%+.1f) Nafta $%.2f (%+.1f)\n",zlato,zlatoPromjena,srebro,srebroPromjena,nafta,naftaPromjena);


	/////// Cetvrtak

		zlatoRand=rand()%2;
	srebroRand=rand()%2;
	naftaRand=rand()%2;
	//zlato
	if(zlatoRand==0){
		zlatoPromjena=zlatoPromjena-0.1;
		zlato=zlato+((zlatoPromjena/100)*zlato);
	}
		else if(zlatoRand==1){
			zlatoPromjena=zlatoPromjena+0.1;
			zlato=zlato+((zlatoPromjena/100)*zlato);
		}
	//srebro
		if(srebroRand==0){
		srebroPromjena=srebroPromjena-0.1;
		srebro=srebro+((srebroPromjena/100)*srebro);
	}
		else if(srebroRand==1){
			srebroPromjena=srebroPromjena+0.1;
			srebro=srebro+((srebroPromjena/100)*srebro);
		}
	//nafta
		if(naftaRand==0){
		naftaPromjena=naftaPromjena-0.1;
		nafta=nafta+((naftaPromjena/100)*nafta);
	}
		else if(naftaRand==1){
			naftaPromjena=naftaPromjena+0.1;
			nafta=nafta+((naftaPromjena/100)*nafta);
		}

						if(zlatoPromjena<=0.01 && zlatoPromjena>=-0.01) zlatoPromjena=0;
	if(srebroPromjena<=0.01 && srebroPromjena>=-0.01) srebroPromjena=0;
	if(naftaPromjena<=0.01 && naftaPromjena>=-0.01) naftaPromjena=0;
		printf("CET: Zlato $%.2f (%+.1f) Srebro $%.2f (%+.1f) Nafta $%.2f (%+.1f)\n",zlato,zlatoPromjena,srebro,srebroPromjena,nafta,naftaPromjena);



	/////////Petak

		zlatoRand=rand()%2;
	srebroRand=rand()%2;
	naftaRand=rand()%2;
	//zlato
	if(zlatoRand==0){
		zlatoPromjena=zlatoPromjena-0.1;
		zlato=zlato+((zlatoPromjena/100)*zlato);
	}
		else if(zlatoRand==1){
			zlatoPromjena=zlatoPromjena+0.1;
			zlato=zlato+((zlatoPromjena/100)*zlato);
		}
	//srebro
		if(srebroRand==0){
		srebroPromjena=srebroPromjena-0.1;
		srebro=srebro+((srebroPromjena/100)*srebro);
	}
		else if(srebroRand==1){
			srebroPromjena=srebroPromjena+0.1;
			srebro=srebro+((srebroPromjena/100)*srebro);
		}
	//nafta
		if(naftaRand==0){
		naftaPromjena=naftaPromjena-0.1;
		nafta=nafta+((naftaPromjena/100)*nafta);
	}
		else if(naftaRand==1){
			naftaPromjena=naftaPromjena+0.1;
			nafta=nafta+((naftaPromjena/100)*nafta);
		}
					if(zlatoPromjena<=0.01 && zlatoPromjena>=-0.01) zlatoPromjena=0;
	if(srebroPromjena<=0.01 && srebroPromjena>=-0.01) srebroPromjena=0;
	if(naftaPromjena<=0.01 && naftaPromjena>=-0.01) naftaPromjena=0;

		printf("PET: Zlato $%.2f (%+.1f) Srebro $%.2f (%+.1f) Nafta $%.2f (%+.1f)\n",zlato,zlatoPromjena,srebro,srebroPromjena,nafta,naftaPromjena);


	zlatoPare=zlato*stanjeZlata;
	srebroPare=srebro*stanjeSrebra;
	naftaPare=nafta*stanjeNafte;

			printf("\n");
			printf("Imate:\n");
			printf("Zlata: %g ($%.2f) Srebra: %g ($%.2f) Nafte: %g ($%.2f) Novca: $%.2f\n",stanjeZlata,zlatoPare,stanjeSrebra,srebroPare,stanjeNafte,naftaPare,stanje);
			printf("UKUPNO: $%.2f ($%+.2f)\n",stanje+zlatoPare+srebroPare+naftaPare,(stanje+zlatoPare+srebroPare+naftaPare)-i);
			printf("\n");

						}
		else if(izbor==0) { return 0;}

				}



	return 0;
}
