#pragma once
#include <stack>

namespace core {
    struct MenuState {
        std::stack<MenuInfo> menu_stack;
    };

    enum MenuInfo {
        MainMenu = 0
    };

    enum MainMenuInfo {
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
}
