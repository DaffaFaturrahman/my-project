// See the tabs for some tested remotes with various setups

// Below is the default code list without any codes entered.

// IR commands... change these to match your buttons/keys
// ** If your remote button only outputs one code when it is pushed multiple times, 
//   set the XX_BUTTON value to that code with "0x" before it since it is a HEX value
//   and leave the XX_BUTTN_ALT value as "0x0" (zero).  
// If it toggles between two different codes, as you tap the button,
//   set XX_BUTTON value to one code and
//   set the XX_BUTTN_ALT value to the other code.

// Basic required 17 remote buttons
#define ZERO_BUTTON         0x0
#define ZERO_BUTTN_ALT      0x0
#define ONE_BUTTON          0x0
#define ONE_BUTTN_ALT       0x0
#define TWO_BUTTON          0X0
#define TWO_BUTTN_ALT       0x0
#define THREE_BUTTON        0x0
#define THREE_BUTTN_ALT     0x0
#define FOUR_BUTTON         0x0
#define FOUR_BUTTN_ALT      0x0
#define FIVE_BUTTON         0x0
#define FIVE_BUTTN_ALT      0x0
#define SIX_BUTTON          0x0
#define SIX_BUTTN_ALT       0x0
#define SEVEN_BUTTON        0x0
#define SEVEN_BUTTN_ALT     0x0
#define EIGHT_BUTTON        0x0
#define EIGHT_BUTTN_ALT     0x0
#define NINE_BUTTON         0x0
#define NINE_BUTTN_ALT      0x0
#define ENTER_BUTTON        0x0     // button at the bottom right of the number pad
#define ENTER_BUTTN_ALT     0x0
#define BACK_BUTTON         0x0     // button at the bottom left of the number pad
#define BACK_BUTTN_ALT      0x0

#define FORWARD_BUTTON      0x0     // forward/up direction button/arrow
#define FORWARD_BUTTN_ALT   0x0     // alternate forward/up direction button/arrow
#define BACKWARD_BUTTON     0x0     // backward/down direction button/arrow
#define BACKWARD_BUTTN_ALT  0x0     // alternate backward/down direction button/arrow
#define RIGHT_BUTTON        0x0     // right direction button/arrow
#define RIGHT_BUTTN_ALT     0x0     // alternate right direction button/arrow
#define LEFT_BUTTON         0x0     // left direction button/arrow
#define LEFT_BUTTN_ALT      0x0     // alternate left direction button/arrow
#define STOP_BUTTON         0x0     // stop button in the middle of the direction keys
#define STOP_BUTTN_ALT      0x0     // alternate stop button in the middle of the direction keys

// Optionally set these buttons only if you have available buttons and want to expand
// beyond the number and arrow keys for clarity.
// ** These MUST be left with "0x0" values if they are not used. **
#define FORWARD_RIGHT       0x0
#define FORWARD_RT_ALT      0x0
#define FORWARD_LEFT        0x0
#define FORWARD_LFT_ALT     0x0
#define BACKWARD_RIGHT      0x0
#define BACKWARD_RT_ALT     0x0
#define BACKWARD_LEFT       0x0
#define BACKWARD_LFT_ALT    0x0
#define RC_MODE             0x0
#define RC_MOD_ALT          0x0
#define FREE_PROGRAM_MODE   0x0
#define FREE_PROG_MOD_ALT   0x0
#define LINE_PROGRAM_MODE   0x0
#define LINE_PROG_MOD_ALT   0x0
#define TRIM_MODE           0x0
#define TRIM_MOD_ALT        0x0
#define PLAY_PROGRAM        0x0
#define PLAY_PROG_ALT       0x0
#define STOP_PROGRAM        0x0
#define STOP_PROG_ALT       0x0

// Gripper buttons
#define    GRIP_OPEN     0x0
#define    GRIP_OPN_ALT  0x0
#define    GRIP_CLOSE    0x0
#define    GRIP_CLOS_ALT 0x0

#define REPEAT_CODE         0xFFFFFFFF  // this probably does not need any change
