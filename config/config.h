// Timing is key
#define TAPPING_TERM       300
#define SHORT_TAPPING_TERM 150
#define QUICK_TAP          200

// Human-readable layer indexes
#define L_BASE          0
#define L_GAME          1
#define L_NAV           2
#define L_NUM           3
#define L_DOFUS         4


// Thumb keys
#define TK_SFT &bsk_shift 
#define TK_SPC &lt L_NAV SPC
#define TK_TAB &lt L_NUM TAB

#define TK_RALT &EZ_SK(RALT)
#define TK_BSPC &lt L_NAV BSPC
#define TK_ENT  &lt L_NUM ENTER

// HRM Shorthands
#define HRM_A &hrm LGUI A
#define HRM_S &hrm LALT S
#define HRM_D &hrm LCTL D
#define HRM_F &hrm LSHFT F

#define HRM_J &hrm LSHFT J
#define HRM_K &hrm LCTL K
#define HRM_L &hrm LALT L
#define HRM_SEMI &hrm LGUI SEMI


#define LHRM_LEFT  &hrm LALT LEFT
#define LHRM_DOWN  &hrm LCTL DOWN
#define LHRM_RIGHT &hrm LSHFT RIGHT

#define RHRM_LEFT &hrm LSHFT LEFT
#define RHRM_DOWN &hrm LCTL DOWN
#define RHRM_RIGHT &hrm LALT RIGHT


#define MY_MUTE      &kp LC(LS(F16))
#define MY_SCRNSHR   &kp LC(LS(F17))



#define EZ_SL(layer)    bsl   (layer) (layer)
#define EZ_SLMH(layer)  bslmh (layer) (layer)
#define EZ_SK(mod)      bsk   (mod) (mod)

#define MAC_MORPH(name, base_binding, mac_binding)            \
  name: name {                                                \
    compatible = "zmk,behavior-os-key";                       \
    #binding-cells = <0>;                                     \
    /*               Win            Mac             Lin  */   \
    bindings = <base_binding>, <mac_binding>, <base_binding>; \
  };

