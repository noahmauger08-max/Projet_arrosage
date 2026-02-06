/*
Auteur: Noah Anonyme
Interface: arduino
Nom du projet: 
Description: 
Toolbox: vittascience
Mode: code

Blocks: <xml xmlns="https://developers.google.com/blockly/xml"><variables><variable id="sxmPg)%/~duO;!$;c/He">x</variable><variable id="J)C(d]U54dO3e.,4AWeC">t</variable><variable id="`.{b)hO!e7mzg!u$1]D#">geste</variable><variable id="rq|-kq0;tv^*lF#sTZ/;">mem_geste_valid</variable><variable id="hUuolE-)MjW|e.85.82#">undefined</variable><variable id="0(-];DhG5n|nTB4Q^^1Q">tm_digits</variable></variables><block type="preproc_include" id="eLh^{Nw[B_wMk@v^e6?R" x="20" y="20"><field name="LIBRARY">paj7620.h</field><field name="TYPE">system</field></block><block type="procedures_defnoreturn" id="-.tBr/M7W%G_)y6Xa7DE" x="360" y="10"><mutation name="setTemperature"><arg name="x" varid="sxmPg)%/~duO;!$;c/He" paramId="sxmPg)%/~duO;!$;c/He"></arg><arg name="t" varid="J)C(d]U54dO3e.,4AWeC" paramId="Q2lo0(4H-MSPw-?#3=cD"></arg></mutation><field name="NAME">setTemperature</field><field name="sxmPg)%/~duO;!$;c/He">x</field><field name="TYPES_sxmPg)%/~duO;!$;c/He">NUMBER</field><field name="Q2lo0(4H-MSPw-?#3=cD">t</field><field name="TYPES_Q2lo0(4H-MSPw-?#3=cD">DECIMAL</field><statement name="STACK"><block type="controls_if" id="}k1,a_j{!r1W7$1UhTaC"><mutation else="1"></mutation><value name="IF0"><block type="math_arithmetic" id=":{~OfoK:IS)3z.H~ph5N"><field name="OP">MINUS</field><value name="B"><block type="math_number" id="!_`U`dFp;lir}qatmM=G"><field name="NUM">10</field></block></value></block></value><statement name="DO0"><block type="controls_if" id="a%/T/E:$Qvpcq.Vh5RB!"><mutation else="1"></mutation><value name="IF0"><block type="logic_compare" id="+=m~-x8m8R%cu,py%y9H"><field name="OP">LT</field><value name="A"><block type="variables_get" id="mt1)n9CTxJF1|uZ1eQ:I"><field name="VAR" id="J)C(d]U54dO3e.,4AWeC">t</field></block></value><value name="B"><block type="math_number" id="#AJs{rHsb?gRs|9Ae{3p"><field name="NUM">-1</field></block></value></block></value></block></statement></block></statement></block><block type="preproc_include" id="*W]?~*c/FzdyC,s#()h3" x="20" y="74"><field name="LIBRARY">TM1637.h</field><field name="TYPE">system</field></block><block type="preproc_define" id="K)T20rI~L$GmOUMc(_`v" x="20" y="128"><field name="NAME">PIN_4_DIGIT_DISPLAY_CLK_2</field><field name="VALUE">2</field></block><block type="preproc_define" id="kx/gfC60v*Q8vD6]5jq-" x="20" y="182"><field name="NAME">PIN_4_DIGIT_DISPLAY_DIO_3</field><field name="VALUE">3</field></block><block type="preproc_define" id="NLqN*an:d-8AT8Y#Igw}" x="20" y="236"><field name="NAME">PIN_MOISTURE_SENSOR_A1</field><field name="VALUE">A1</field></block><block type="preproc_define" id="x7o6+^CNgI(W];%3#iLg" x="20" y="290"><field name="NAME">WATER_THRESHOLD</field><field name="VALUE">100</field></block><block type="preproc_define" id="8DFj*y6SCl2@o%`+A+xt" x="20" y="344"><field name="NAME">ATTINY1_HIGH_ADDR</field><field name="VALUE">0x78</field></block><block type="preproc_define" id="OX0[/IhE7+@(`?ALYxH]" x="20" y="398"><field name="NAME">ATTINY2_LOW_ADDR</field><field name="VALUE">0x77</field></block><block type="on_start" id="0XVJ7ra(*B{lAHS|lt@j" x="20" y="452"><statement name="DO"><block type="call_expression_editable" id="iq`x.w,MJh!cr_%2c(2Y" inline="false"><field name="NAME">paj7620Init</field><next><block type="call_expression" id="RUu|r4k$W@6KMWIDW=*8"><field name="NAME">tm1637_2</field><value name="chain"><block type="call_expression_editable_return" id="X,{.xAG2#zXx{}~-TDsb" inline="false"><field name="NAME">init</field></block></value><next><block type="call_expression" id="[c}U;qaK()|f(co,798T"><field name="NAME">tm1637_2</field><value name="chain"><block type="call_expression_editable_return" id="GNXMD#r{Nq-%-!)?y;a0"><mutation items="1"></mutation><field name="NAME">set</field><value name="items0"><block type="math_number" id="^Z7d?Ny.@M@CIUuI{?6g"><field name="NUM">7</field></block></value></block></value><next><block type="comment_block" id="^=#m@;wO}b+Rk2Mctb@n"><field name="COMMENT"> Maximum brightness</field><next><block type="call_expression" id="/wG-/5f[J$YUs1nUq25i"><field name="NAME">Wire</field><value name="chain"><block type="call_expression_editable_return" id="24SZ_9o(?#2z,v(fll7u" inline="false"><field name="NAME">begin</field></block></value></block></next></block></next></block></next></block></next></block></statement></block><block type="forever" id="GcJ}?3Kjt(}nWu(ZKYZg" x="10" y="1056"><statement name="DO"><block type="variables_set" id="qcnO7OE,[K9XEelr3AgV"><field name="VAR" id="`.{b)hO!e7mzg!u$1]D#">geste</field><next><block type="controls_if" id="nLfBc]od[I^fPXXCGGoG"><value name="IF0"><block type="logic_compare" id="jHu32_ZAg$en^FHq=nCW"><field name="OP">NEQ</field><value name="A"><block type="variables_get" id="FwSUsRr$?:Z8y!]^i8[r"><field name="VAR" id="`.{b)hO!e7mzg!u$1]D#">geste</field></block></value><value name="B"><block type="text" id="u;9-x}9^ti.{j_^?VDk2"><field name="TEXT">gesture not detected</field></block></value></block></value><statement name="DO0"><block type="variables_set" id="3;TAN_2eU2Vl{m0,(%?M"><field name="VAR" id="rq|-kq0;tv^*lF#sTZ/;">mem_geste_valid</field><value name="VALUE"><block type="variables_get" id="Tm?t)bGklIv;9Puq*L,Q"><field name="VAR" id="`.{b)hO!e7mzg!u$1]D#">geste</field></block></value></block></statement><next><block type="controls_if" id="IVuk*8/s8xJ[)o2mVOhx"><mutation elseif="2"></mutation><value name="IF0"><block type="logic_compare" id="t]3.4}ZnQdY,zep8$DfN"><field name="OP">EQ</field><value name="A"><block type="variables_get" id="uxGR^Le)$z#b;5F:GmNH"><field name="VAR" id="rq|-kq0;tv^*lF#sTZ/;">mem_geste_valid</field></block></value><value name="B"><block type="text" id="mzUJnxC{cxw:U=8ditGT"><field name="TEXT">right</field></block></value></block></value><statement name="DO0"><block type="call_expression" id="eu;boH*0yBy~+qLCFmOh"><field name="NAME">tm1637_2</field><value name="chain"><block type="call_expression_editable_return" id="tpJ^d#-dW$}y[%oGZ2Cu"><mutation items="1"></mutation><field name="NAME">displayNum</field></block></value></block></statement><value name="IF1"><block type="logic_compare" id="*U-:%S])gHxNwDS`!2QR"><field name="OP">EQ</field><value name="A"><block type="variables_get" id="Lh-6((bm?w64c2A:!9q0"><field name="VAR" id="rq|-kq0;tv^*lF#sTZ/;">mem_geste_valid</field></block></value><value name="B"><block type="text" id="@5Ej;st}UNzeqJfLcfCW"><field name="TEXT">left</field></block></value></block></value><statement name="DO1"><block type="procedures_callnoreturn" id="|9nFCaMH0o_:9=^zcK]{"><mutation name="setTemperature"><arg name="undefined"></arg><arg name="t"></arg></mutation><value name="ARG0"><block type="variables_get" id="2cgmG+#x=1--d}Ia#DyI"><field name="VAR" id="0(-];DhG5n|nTB4Q^^1Q">tm_digits</field></block></value><next><block type="call_expression" id="e`^S)j3@k*pV=,[zu-5#"><field name="NAME">tm1637_2</field><value name="chain"><block type="call_expression_editable_return" id="rKM]BCR}A.O{1sO2)Mc{"><mutation items="1"></mutation><field name="NAME">display</field><value name="items0"><block type="variables_get" id="U]9+@qs5.IgdW8#r+N`C"><field name="VAR" id="0(-];DhG5n|nTB4Q^^1Q">tm_digits</field></block></value></block></value></block></next></block></statement><value name="IF2"><block type="logic_compare" id="KAFW%1U{}y|mC+3L`VX,"><field name="OP">EQ</field><value name="A"><block type="variables_get" id="y#b3dOj?d^x,Y-}j:by("><field name="VAR" id="rq|-kq0;tv^*lF#sTZ/;">mem_geste_valid</field></block></value><value name="B"><block type="text" id="Sxm(Y#YkBG%azDZ;LjJ-"><field name="TEXT">up</field></block></value></block></value><statement name="DO2"><block type="call_expression" id="JnFNX5.fm1uMv]`k9Dgt"><field name="NAME">tm1637_2</field><value name="chain"><block type="call_expression_editable_return" id="SVwFXJ7D0QGk1er]P8#7"><mutation items="1"></mutation><field name="NAME">displayNum</field><value name="items0"><block type="math_number" id="-XaFYDt4[c[po[$cWVNt"><field name="NUM">0</field></block></value></block></value></block></statement><next><block type="controls_if" id="1fA+Khm-zIS})AkVqE9c"><mutation elseif="1"></mutation><value name="IF0"><block type="logic_operation" id="*zrYJM.hKRml5ewjapsm"><field name="OP">AND</field><value name="A"><block type="logic_compare" id=".cLvD`26%KW!m%%9tHR5"><field name="OP">GT</field><value name="B"><block type="math_number" id="q;XU+`@-}HRYz5]:G+,g"><field name="NUM">10</field></block></value></block></value><value name="B"><block type="logic_compare" id="5[G;,Mx!E33P.oAQ-M,l"><field name="OP">LT</field><value name="B"><block type="math_number" id="@qtnH3iCw!UC*LKDcN#Q"><field name="NUM">250</field></block></value></block></value></block></value><statement name="DO0"><block type="controls_whileUntil" id="1.d@mCGcw9g=:or?vf%+"><field name="MODE">UNTIL</field><value name="BOOL"><block type="logic_operation" id="E$rEA^XDy;s8U}K$pGi["><field name="OP">OR</field><value name="A"><block type="logic_compare" id="=(A0m]2$7udafl0bz5o1"><field name="OP">LT</field><value name="B"><block type="math_number" id="N;^s`GG2+d51M+s!YIG)"><field name="NUM">10</field></block></value></block></value><value name="B"><block type="logic_compare" id="4PAiILGn,ZJQNt%woUGZ"><field name="OP">GTE</field><value name="B"><block type="math_number" id="-,aa~kfLsCq4%7Mx|qu_"><field name="NUM">500</field></block></value></block></value></block></value></block></statement><value name="IF1"><block type="logic_operation" id="g|pzU2=yy?|tM.)aV!)I"><field name="OP">AND</field><value name="A"><block type="logic_compare" id="Zt2Z[4zn_)Rvi}dV*Lsi"><field name="OP">GT</field><value name="B"><block type="math_number" id="#6v2EgXe(tT2x(RPiy3|"><field name="NUM">5</field></block></value></block></value><value name="B"><block type="logic_compare" id="/AO6H_;u|i![zB=P`TCd"><field name="OP">LT</field><value name="B"><block type="math_number" id="oz.,Y@Fs|jcn^%B2hbvQ"><field name="NUM">100</field></block></value></block></value></block></value><statement name="DO1"><block type="controls_whileUntil" id="Cp.%q!)oC|E08sHXJ1]f"><field name="MODE">UNTIL</field><value name="BOOL"><block type="logic_operation" id="nzGrj{Rp:yBQ]{jEW*Op"><field name="OP">OR</field><value name="A"><block type="logic_compare" id="c[U*8#*n/yNlwxf(?#c2"><field name="OP">LTE</field><value name="B"><block type="math_number" id="opOKk%g3vKTJ:OrVbv?l"><field name="NUM">1</field></block></value></block></value><value name="B"><block type="logic_compare" id="WtxzG;H~0#a77[1#-nh;"><field name="OP">GTE</field><value name="B"><block type="math_number" id="glwiHabWgVITnP)tsJ2T"><field name="NUM">500</field></block></value></block></value></block></value></block></statement></block></next></block></next></block></next></block></statement></block></xml>

Projet généré par Vittascience.
Ce fichier contient le code textuel ainsi que le code blocs. Il peut être importé de nouveau
sur l'interface http://vittascience.com/arduino

*/

#include <Wire.h>
#include <paj7620.h>
#include <TM1637.h>

#define PIN_4_DIGIT_DISPLAY_CLK_2  2
#define PIN_4_DIGIT_DISPLAY_DIO_3  3
#define PIN_MOISTURE_SENSOR_A1  A1
#define WATER_THRESHOLD 100
#define ATTINY1_HIGH_ADDR 0x78
#define ATTINY2_LOW_ADDR 0x77

TM1637 tm1637_2(PIN_4_DIGIT_DISPLAY_CLK_2, PIN_4_DIGIT_DISPLAY_DIO_3);

uint8_t water_low_data[8] = {0};
uint8_t water_high_data[12] = {0};
String geste;
String mem_geste_valid;
int8_t tm_digits[4];

String getGestureType() {
  uint8_t data = 0;
  paj7620ReadReg(0x43, 1, &data);
  if (data == GES_RIGHT_FLAG) return "right";
  else if (data == GES_LEFT_FLAG) return "left";
  else if (data == GES_UP_FLAG) return "up";
  else if (data == GES_DOWN_FLAG) return "down";
  else if (data == GES_FORWARD_FLAG) return "forward";
  else if (data == GES_BACKWARD_FLAG) return "backward";
  else if (data == GES_CLOCKWISE_FLAG) return "clockwise";
  else if (data == GES_COUNT_CLOCKWISE_FLAG) return "anticlockwise";
  else if (data == GES_WAVE_FLAG) return "wave";
  else return "gesture not detected";
}

uint16_t getAnalogMean(uint8_t pin, long n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += analogRead(pin);
    delay(1);
  }
  return sum / n;
}

void getHigh12SectionValue() {
  memset(water_high_data, 0, sizeof(water_high_data));
  Wire.requestFrom(ATTINY1_HIGH_ADDR, 12);
  while (12 != Wire.available());
  for (int i = 0; i < 12; i++) {
    water_high_data[i] = Wire.read();
  }
  delay(10);
}

void getLow8SectionValue(void) {
  memset(water_low_data, 0, sizeof(water_low_data));
  Wire.requestFrom(ATTINY2_LOW_ADDR, 8);
  while (8 != Wire.available());
  for (int i = 0; i < 8 ; i++) {
    water_low_data[i] = Wire.read(); // receive a byte as character
  }
  delay(10);
}

int getWaterLevel() {
  uint32_t touch_val = 0;
  uint8_t trig_section = 0;
  getLow8SectionValue();
  getHigh12SectionValue();
  for (int i = 0 ; i < 8; i++) {
    if (water_low_data[i] > WATER_THRESHOLD) {
      touch_val |= 1 << i;
    }
  }
  for (int i = 0 ; i < 12; i++) {
    if (water_high_data[i] > WATER_THRESHOLD) {
      touch_val |= (uint32_t)1 << (8 + i);
    }
  }
  while (touch_val & 0x01) {
    trig_section++;
    touch_val >>= 1;
  }
  return trig_section * 5;
}

void setTemperature(int8_t digits[], float t) {
  if (t<100 && t>-10) {
    if (t<-1) {
      digits[0] = '-';
   	  digits[1] = (int8_t)abs((int)t);
    } else {
      digits[0] = (int8_t)((int)t/10);
      digits[1] = (int8_t)((int)t%10);
    }
  } else {
    digits[0] = '_';
   	digits[1] = '_';
  }
  digits[2] = ' ';
  digits[3] = ' ';
}


void setup() {
  paj7620Init();
  pinMode(PIN_4_DIGIT_DISPLAY_CLK_2, OUTPUT);
  pinMode(PIN_4_DIGIT_DISPLAY_DIO_3, OUTPUT);
  tm1637_2.init();
  tm1637_2.set(7); // Maximum brightness
  pinMode(PIN_MOISTURE_SENSOR_A1, INPUT);
  Wire.begin();
  pinMode(6, OUTPUT);
}

void loop() {
  geste = getGestureType();
  if (geste != "gesture not detected") {
    mem_geste_valid = geste;
  }
  if (mem_geste_valid == "right") {
    tm1637_2.displayNum(getAnalogMean(PIN_MOISTURE_SENSOR_A1, 5));
  } else if (mem_geste_valid == "left") {
    setTemperature(tm_digits, getWaterLevel());
    tm1637_2.display(tm_digits);
  } else if (mem_geste_valid == "up") {
    tm1637_2.displayNum(0);
  }
  if (getWaterLevel() > 10 && getAnalogMean(PIN_MOISTURE_SENSOR_A1, 5) < 250) {
    analogWrite(6, (HIGH == 0) ? 0 : 255);
    while (!(getWaterLevel() < 10 || getAnalogMean(PIN_MOISTURE_SENSOR_A1, 5) >= 500) ) {}
    analogWrite(6, (LOW == 0) ? 0 : 255);
  } else if (getWaterLevel() > 5 && getAnalogMean(PIN_MOISTURE_SENSOR_A1, 5) < 100) {
    analogWrite(6, (HIGH == 0) ? 0 : 255);
    while (!(getWaterLevel() <= 1 || getAnalogMean(PIN_MOISTURE_SENSOR_A1, 5) >= 500) ) {}
    analogWrite(6, (LOW == 0) ? 0 : 255);
  }
}