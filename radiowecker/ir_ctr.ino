// includes
  #include <DIYables_IRcontroller.h> // DIYables_IRcontroller library
//defines
  #define IR_DEBUG
 //bose code
  #define IR_RECEIVER_PIN   32 //input IR controller
  #define BOOSE_ON          179 //getCommand();
  #define BOOSE_AUX         240 //showClock();
  #define BOOSE_1           248 //toggleRadio(radio);
  #define BOOSE_2           247 //startSnooze();
  #define BOOSE_3           246 //startSnooze();
  #define BOOSE_4           245 //changeStation();
  #define BOOSE_5           244 //
  #define BOOSE_6           243 //
  #define BOOSE_VOL_PLUS    252 //
  #define BOOSE_VOL_MINUS   253 //
  #define BOOSE_GO          228 //
  #define BOOSE_BW          231 //
  #define BOOSE_FW          230 //
  #define BOOSE_DOWN         91 //select station down
  #define BOOSE_UP           85 //
 //peaq code
  #define PEAQ_ON            2 // 
  #define PEAQ_INFO          6 // 
  #define PEAQ_MODE         69 // 
  #define PEAQ_MEMORY       68 // 
  #define PEAQ_MENUE        10 //showRadioPage
  #define PEAQ_BACK         72 //showCommand
  #define PEAQ_UP           73 // 
  #define PEAQ_LEFT         14 // 
  #define PEAQ_SELECT       77 // 
  #define PEAQ_RIGHT        76 // 
  #define PEAQ_DOWN         81 // 
  #define PEAQ_VOL_MINUS    18 // 
  #define PEAQ_VOL_PLUS     80 // 
  #define PEAQ_TUNING_DOWN  22 // 
  #define PEAQ_TUNING_UP    84 // 
  #define PEAQ_BW           26 //showClock
  #define PEAQ_FW           27 // 
  #define PEAQ_GO           88 // 
  #define PEAQ_MONO         21 // 
  #define PEAQ_EQ           31 // 
  #define PEAQ_MUTE         92 // 
  #define PEAQ_SLEEP        30 // 
  #define PEAQ_ALARM        90 // 
  #define PEAQ_SNOOZE       95 // 
//instances
  //DIYables_IRcontroller_17 irController(IR_RECEIVER_PIN, 200); // debounce time is 200ms
  DIYables_IRcontroller bose(IR_RECEIVER_PIN, 300); // debounce time is 300ms
  DIYables_IRcontroller peaq(IR_RECEIVER_PIN, 600); // debounce time is 300ms
//variable
  uint16_t
  gainVal{0},
  v{10}
  ;
//private
  //getCommand(...
    void getCommand(){
    //if we are in config mode reset start_conf on any event
      if(!clockmode)     
        start_conf=millis(); 
    //if we are in the clock mode, we switch into the config mode. Independent where the event occured.
      if(clockmode){ 
        clockmode=false;
        showCommand(); 
      }
    }
  //getBoseCode(...
    void getBoseCode(){
      if(uint16_t command=bose.loop()){
      #ifdef IR_DEBUG
        buzzer_click();
      #endif
        switch(command){
          case BOOSE_ON:
            getCommand();
          #ifdef IR_DEBUG
            Serial.printf("ON");
            Serial.println();
          #endif
          break;
          case BOOSE_AUX:
          clockmode=true;
          showClock();
          #ifdef IR_DEBUG
            Serial.printf("AUX");
            Serial.println();
          #endif
          break;
          case BOOSE_1:
            toggleRadio(radio);
          #ifdef IR_DEBUG
            Serial.printf("1");
            Serial.println();
          #endif
          break;
          case BOOSE_2:
            startSnooze();
          #ifdef IR_DEBUG
            Serial.printf("2");
            Serial.println();
          #endif
          break;
          case BOOSE_3:
            startSnooze();
          #ifdef IR_DEBUG
            Serial.printf("3");
            Serial.println();
          #endif
          break;
          case BOOSE_4:
            changeStation();
          #ifdef IR_DEBUG
            Serial.printf("4");
            Serial.println();
          #endif
          break;
          case BOOSE_5:
          #ifdef IR_DEBUG
            Serial.printf("5");
            Serial.println();
          #endif
          break;
          case BOOSE_6:
          #ifdef IR_DEBUG
            Serial.printf("6");
            Serial.println();
          #endif
          break;
          case BOOSE_VOL_PLUS:
          #ifdef IR_DEBUG
            Serial.printf("VOL+");
            Serial.println();
          #endif
          break;
          case BOOSE_VOL_MINUS:
          #ifdef IR_DEBUG
            Serial.printf("VOL-");
            Serial.println();
          #endif
          break;
          case BOOSE_GO:
          #ifdef IR_DEBUG
            Serial.printf("GO");
            Serial.println();
          #endif
          break;
          case BOOSE_BW:
          #ifdef IR_DEBUG
            Serial.printf("BW");
            Serial.println();
          #endif
          break;
          case BOOSE_FW:
          #ifdef IR_DEBUG
            Serial.printf("FW");
            Serial.println();
          #endif
          break;
          case BOOSE_DOWN:
          #ifdef IR_DEBUG
            Serial.printf("DOWN");
            Serial.println();
          #endif
          break;
          case BOOSE_UP:
          #ifdef IR_DEBUG
            Serial.printf("UP");
            Serial.println();
          #endif
          break;
          default:
          #ifdef IR_DEBUG
            Serial.print(command);
            Serial.printf(" undefined");
            Serial.println();
          #endif
          break;
        }
      }
    }
  //getPeaqCode(...
    void getPeaqCode(){
    //new command?
      if(uint16_t command=peaq.loop()){
      #ifdef IR_DEBUG
        //buzzer_click();
      #endif
        switch(command){
        //ON
          case PEAQ_ON:
          #ifdef IR_DEBUG
            Serial.printf("PEAQ ON");
            Serial.println();
          #endif
          break;
        //INFO
          case PEAQ_INFO:
          #ifdef IR_DEBUG
            Serial.printf("INFO");
            Serial.println();
          #endif
          break;
        //MODE
          case PEAQ_MODE:
          #ifdef IR_DEBUG
            Serial.printf("MODE");
            Serial.println();
          #endif
          break;
        //MEMORY
          case PEAQ_MEMORY:
          #ifdef IR_DEBUG
            Serial.printf("MEMORY");
            Serial.println();
          #endif
          break;
        //MENUE
          case PEAQ_MENUE:
            clockmode=false;
            configpage=false;
            radiopage=true;
            showRadioPage();
          #ifdef IR_DEBUG
            Serial.printf("MENUE\n");
            buzzer_click();
          #endif
          break;
        //BACK
          case PEAQ_BACK:
            clockmode = false;
            configpage = true;
            radiopage = false;
            showCommand(); 
          #ifdef IR_DEBUG
            Serial.printf("BACK\n");
            buzzer_click();
          #endif
          break;
        //UP
          case PEAQ_UP:
          #ifdef IR_DEBUG
            Serial.printf("UP");
            Serial.println();
          #endif
          break;
        //LEFT
          case PEAQ_LEFT:
          #ifdef IR_DEBUG
            Serial.printf("LEFT");
            Serial.println();
          #endif
          break;
        //SELECT
          case PEAQ_SELECT:
          #ifdef IR_DEBUG
            Serial.printf("SELECT");
            Serial.println();
          #endif
          break;
        //RIGHT
          case PEAQ_RIGHT:
          #ifdef IR_DEBUG
            Serial.printf("RIGHT");
            Serial.println();
          #endif
          break;
        //DOWN
          case PEAQ_DOWN:
          #ifdef IR_DEBUG
            Serial.printf("DOWN");
            Serial.println();
          #endif
          break;
        //VOL_MINUS
          case PEAQ_VOL_MINUS:
            if(gainVal!=0){
              if(radiopage&&!clockmode){
                gainVal=gainVal-v;
                setGainValue(gainVal,"RadioPage");
                #ifdef IR_DEBUG
                  Serial.printf("PEAQ VOL- %i\n",gainVal);
                  buzzer_click();
                #endif
              }
            }
          break;
        //VOL_PLUS
          case PEAQ_VOL_PLUS:
            if(gainVal<296){
              if(radiopage&&!clockmode){
                gainVal=gainVal+v;
                setGainValue(gainVal,"RadioPage");
                #ifdef IR_DEBUG
                  Serial.printf("PEAQ VOL+ %i\n",gainVal);
                  buzzer_click();
                #endif
              }
            }
          break;
        //TUNING_DOWN
          case PEAQ_TUNING_DOWN:
          #ifdef IR_DEBUG
            Serial.printf("TUNING_DOWN");
            buzzer_click();
          #endif
          break;
        //TUNING_UP
          case PEAQ_TUNING_UP:
          #ifdef IR_DEBUG
            Serial.printf("TUNING_UP");
            Serial.println();
          #endif
          break;
        //BW
          case PEAQ_BW:
            clockmode = true;
            configpage = false;
            radiopage = false;
            showClock();
          #ifdef IR_DEBUG
            Serial.printf("<\n");
            buzzer_click();
          #endif
          break;
        //FW
          case PEAQ_FW:
          #ifdef IR_DEBUG
            Serial.printf(">");
            Serial.println();
          #endif
          break;
        //GO
          case PEAQ_GO:
          #ifdef IR_DEBUG
            Serial.printf("||");
            Serial.println();
          #endif
          break;
        //MONO
          case PEAQ_MONO:
          #ifdef IR_DEBUG
            Serial.printf("MONO");
            Serial.println();
          #endif
          break;
        //EQ
          case PEAQ_EQ:
          #ifdef IR_DEBUG
            Serial.printf("EQ");
            Serial.println();
          #endif
          break;
        //MUTE
          case PEAQ_MUTE:
          #ifdef IR_DEBUG
            Serial.printf("MUTE");
            Serial.println();
          #endif
          break;
        //SLEEP
          case PEAQ_SLEEP:
          #ifdef IR_DEBUG
            Serial.printf("SLEEP");
            Serial.println();
          #endif
          break;
        //ALARM
          case PEAQ_ALARM:
          #ifdef IR_DEBUG
            Serial.printf("ALARM");
            Serial.println();
          #endif
          break;
        //SNOOZE
          case PEAQ_SNOOZE:
          #ifdef IR_DEBUG
            Serial.printf("SNOOZE");
            Serial.println();
          #endif
          break;
        //default
          default:
          #ifdef IR_DEBUG
            Serial.print(command);
            Serial.printf(" WARNING: undefined key:");
            Serial.println();
          #endif
        }//!switch(...
      }//!new command?...
    }
//public
 //setup_IR(...
  void setup_IR(){
    //bose.begin();
    peaq.begin();
  }
 //loop_IR(...
  void loop_IR(){
    //getBoseCode();
    getPeaqCode();
  }
//EOF
