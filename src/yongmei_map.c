void loadmap(){
/*
	map[175] = 65;
	map[176] = map[175];
	map[177] = map[175];
	map[178] = map[175];
	map[179] = map[175];
	map[180] = map[175];
	map[181] = map[175];

	map[182] = 66;
	map[183] = map[182];
	map[184] = map[182];
	map[185] = map[182];
	map[186] = map[182];
	map[187] = map[182];
	map[188] = map[182];

	map[200] = 67;
	map[201] = map[200];
	map[202] = map[200];
	map[203] = map[200];
*/
	for(int i=0; i<4096; i++){
		GPIO_SetBits(GPIOD, GPIO_Pin_15);
		map[i] = 65;
		GPIO_ResetBits(GPIOD, GPIO_Pin_15);
	}
	for(int i=380; i<4096; i++){
		map[i] = 66;
	}
/*	for(int i=175; i<185; i++){
		map[i] = 67;
	}
	for(int i=185; i<195; i++){
		map[i] = 68;
	}
	for(int i=195; i<205; i++){
		map[i] = 69;
	}
	for(int i=205; i<214; i++){
		map[i] = 70;
	}
	for(int i=214; i<230; i++){
		map[i] = 71;
	}
	for(int i=230; i<240; i++){
		map[i] = 72;
	}
	for(int i=240; i<255; i++){
		map[i] = 73;
	}
	for(int i=255; i<275; i++){
		map[i] = 74;
	}
	for(int i=275; i<285; i++){
		map[i] = 75;
	}
/*	for(int i=512; i<1024; i++){
		map[i] = 66;
	}
	for(int i=0; i<511; i++){
		map[i] = 65;
	}
	for(int i=512; i<1024; i++){
		map[i] = 66;
	}
	for(int i=0; i<511; i++){
		map[i] = 65;
	}
	for(int i=512; i<1024; i++){
		map[i] = 66;
	}
	for(int i=0; i<511; i++){
		map[i] = 65;
	}
	for(int i=512; i<1024; i++){
		map[i] = 66;
	}
	for(int i=0; i<511; i++){
		map[i] = 65;
	}
	for(int i=512; i<1024; i++){
		map[i] = 66;
	}
	for(int i=0; i<511; i++){
		map[i] = 65;
	}
	for(int i=512; i<1024; i++){
		map[i] = 66;
	}
	for(int i=0; i<511; i++){
		map[i] = 65;
	}
	for(int i=512; i<1024; i++){
		map[i] = 66;
	}
	for(int i=0; i<511; i++){
		map[i] = 65;
	}
	for(int i=512; i<1024; i++){
		map[i] = 66;
	}
	for(int i=0; i<511; i++){
		map[i] = 65;
	}
	for(int i=512; i<1024; i++){
		map[i] = 66;
	}
	for(int i=0; i<511; i++){
		map[i] = 65;
	}
	for(int i=512; i<1024; i++){
		map[i] = 66;
	}
	for(int i=0; i<511; i++){
		map[i] = 65;
	}
	for(int i=512; i<1024; i++){
		map[i] = 66;
	}
*/
/*
	for(int i=0; i<1024; i++){
		map[i] = i/50;
	}
*/
}
