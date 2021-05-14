void loadmap(){
	uint16_t premap[26] = {
		0,	//nič
		770,	//65
		790,	//66
		810,	//67
		830,	//68
		900,	//69
		950,	//70
		990,	//71
		1055,	//72
		1090,	//73
		1190,	//74
		1230,	//75
		1350,	//76
		1450,	//77
		1550,	//78
		1650,	//79
		1750,	//80
		1950,	//81
		2100,	//82
		2250,	//83
		2500,	//84
		2700,	//85
		2990,	//86
		3300,	//87
		3700,	//88
		4096,	//rep
	};
//	for(int j=65; j<90; j++)[
	GPIO_SetBits(GPIOD, GPIO_Pin_15);
	for(int i=0; i<26; i++){
		for(int j=premap[i]; j<4096; j++){
			map[j] = i+65;
		}
	}
	GPIO_ResetBits(GPIOD, GPIO_Pin_15);
/*
	for(int i=0; i<4096; i++){
		map[i] = 65;
	}
	for(int i=770; i<4096; i++){
		map[i] = 66;
	}
	for(int i=795; i<4096; i++){
		map[i] = 67;
	}
	for(int i=820; i<4096; i++){
		map[i] = 68;
	}
	for(int i=1700; i<4096; i++){
		map[i] = 80;
	}
*/
/*
	for(int i=0; i<1024; i++){
		map[i] = i/50;
	}
*/
}
