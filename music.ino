//	============================================================
//	�I���{�[�hLED�_��
//	date written 2017-05-10
//	============================================================
#define PIN_SPK (A5)
#define PIN_SW  (2)
#define PIN_LED13 (13)
//	----------------------------------------
//	�N�����Ɉ�x�������s�����
//	----------------------------------------
void setup() {
	pinMode( PIN_LED13, OUTPUT );
	pinMode( PIN_SW, INPUT_PULLUP);
	pinMode( PIN_SPK, OUTPUT);
}


//	----------------------------------------
//	���C�����[�v
//	----------------------------------------
void loop() {
	if( digitalRead(PIN_SW)==LOW){
		tone(PIN_SPK, 262); 
		delay(300);
		noTone(PIN_SPK);
	}
	else{noTone(PIN_SPK);}
}






