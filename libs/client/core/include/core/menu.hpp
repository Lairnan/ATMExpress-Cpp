#pragma once
#include <stack>

namespace core {
    struct AMenu {};

    struct MenuState {
        std::stack<AMenu> menu_stack;
    };

    enum MenuInfo : AMenu {
        MainMenu = 0
    };

    enum MainMenuInfo : AMenu {
        Exit = 0,
        Settings = 1,
        Products = 2,
        ViewBalance = 3,
        WithdrawCash = 4,
        DepositCash = 5,
        QuickTransfer = 6,
        TransactionHistory = 7,
        CardlessCash = 8,
        ManageCards = 9,
        PromotionsAndOffers = 10,
    };

    enum StartMenuInfo : AMenu {
        Exit = 0,
        Authorize = 1,
        Register = 2
    };

    enum SettingsMenuInfo : AMenu {
        Back = 0,
        AccountInformation = 1,
        SecuritySettings = 2,
        ChangeLanguage = 3
    };

    enum SecurityMenuInfo : AMenu {
        Back = 0,
        ChangePassword = 1,
        ChangeName = 2
    };

    enum WithdrawMenuInfo : AMenu {
        Back = 0,
        SelectCard = 1
    };

    enum DepositMenuInfo : AMenu {
        Back = 0,
        SelectCard = 1
    };
}
