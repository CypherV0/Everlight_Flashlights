class SlotInfo;
class PointerSlot: SlotInfo {
    compatibleItems[] += {
        "Everlight_X2000_point",
        "Everlight_X2000_wide"
    };
};

class PointerSlot_Rail: PointerSlot {
    class compatibleItems {
        Everlight_X2000_point = 1;
        Everlight_X2000_wide = 1;
    };
};

class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo {
    class compatibleItems {
        Everlight_X2000_point = 1;
        Everlight_X2000_wide = 1;
    };
};